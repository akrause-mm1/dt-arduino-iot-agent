/**
 * @file DTCoTDeviceNBIoT.cpp
 * @description Basic setup and protocol to interact 
 * with the Deutsche Telekom Cloud of things MQTT-SN connector.
 * @author Andreas Krause
 * @copyright (C) 2018 mm1 Technology GmbH - all rights reserved. 
 * @licence MIT licence
 * 
 * Find out more about mm1 Technology:
 * Company: http://mm1-technology.de/
 * GitHub:  https://github.com/mm1technology/
 */

#include "DTCOTSetup.h"

#if CONN_TYPE == NB_IOT

#include "DTCoTPrivate.h"
#include "devices/DTCoTDeviceNBIoT.h"

#include "utility/DTCoTDebugOutput.h"

using namespace DTCoT;

CoTConfigDeviceNBIoT::CoTConfigDeviceNBIoT(
	const char* serverIP
	, const unsigned short serverPort
	, const char* imsi
	, const char* password)
	:  _serverIP(serverIP), _serverPort(serverPort), 
		_imsi(imsi), _password(password), CoTConfigDevice()
	
{
	//DEBUG_PRINT("CoTConfigDeviceNBIoT::CoTConfigDeviceNBIoT");
}

const char* CoTConfigDeviceNBIoT::getServerIP() { 
	return _serverIP;
}

const unsigned short CoTConfigDeviceNBIoT::getServerPort() {
	return _serverPort;
}


const char* CoTConfigDeviceNBIoT::getIMSI() { 
	return _imsi;
}


const char* CoTConfigDeviceNBIoT::getPassword() { 
	return _password; 
}

CoTDeviceNBIoT::CoTDeviceNBIoT(	 CoTConfigDeviceNBIoT& nbiotConfig)
	: CoTDeviceBase( nbiotConfig)
		
	,_nbiotClient (NbiotClient( nbiotConfig.getServerIP()
				,  nbiotConfig.getServerPort()
				,  nbiotConfig.getIMSI()
				,  nbiotConfig.getPassword()
				))
					
					
{
}

bool CoTDeviceNBIoT::init() {
		DEBUG_PRINT("CoTDeviceNBIoT::init");

	/* TODO: Initialize Gimasi modem here */
		
	_nbiotClient.init();	
		
	
	return false;
}


Client * DTCoT::CoTDeviceNBIoT::getClient() const {
	return (Client*)(&_nbiotClient);
}

#endif