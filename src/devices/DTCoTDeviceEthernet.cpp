/**
 * @file DTCoTDeviceEthernet.cpp
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

#include "DTCoTPrivate.h"
#include "DTCoTDeviceEthernet.h"

using namespace DTCoT;

CoTConfigDeviceEthernet::CoTConfigDeviceEthernet( )
	: CoTConfigDevice() 
{ }

CoTDeviceEthernet::CoTDeviceEthernet( 
	const CoTConfigDeviceEthernet& config)
	: CoTDeviceBase( config)
{ }
