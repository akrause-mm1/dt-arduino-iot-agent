#ifndef MQTTSNCommunication_h_
#define MQTTSNCommunication_h_

#include "DTCoTPrivate.h"
#include "DTCoTCommunicationBase.h"
#include "NbIoTClient.h"
#include "mm1MqttSn.h"


namespace DTCoT {
	
class CoTCommunicationMQTTSN: public CoTCommunicationBase {
public:
	CoTCommunicationMQTTSN(
		const CoTDeviceBase& device
		, const CoTConfigBase& config 	
		, const CoTAuthBase& authentication);
	
	void init();
	
	void publish(const char * key, const char * value);
	
private:
	void reconnect();
	
private:	
	//NbiotClient nbiotClient;
	MM1MqttSn mqttsn;
};

}

#endif // MQTTCommunication_h_
