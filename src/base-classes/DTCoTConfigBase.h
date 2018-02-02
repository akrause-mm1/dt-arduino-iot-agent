/**
 * @file DTCoTConfigBase.h
 * @description Basic setup and protocol to interact 
 * with the Deutsche Telekom Cloud of things MQTT-SN connector.
 * @author mm1 Technology GmbH
 * @copyright (C) 2018 Deutsche Telekom AG- all rights reserved. 
 * @licence MIT licence
 */

#ifndef DT_COT_CoTConfigBase_H_
#define DT_COT_CoTConfigBase_H_

namespace DTCoT 
{
	/**
	 Base class for all kind of configurations used 
	 * in the library.
	 * (it covers Devicem, Cloud, 
	 * Communication, Authentication configs). 
	 * Everything that has to be configured and 
	 * configs - stored: passwords, IP, Port, URL, etc.
	 * This abstraction may be useful for logging / remote configuration purposes.
	 */
	class CoTConfigBase { };
}

#endif