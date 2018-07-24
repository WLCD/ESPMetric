
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <ArduinoJson.h>
//#include "Config.h"
#include "FS.h"
#include "JsonListener.h"
#include "Matrix.h"
#include "Pluginhandler.h"

//transfer wifi handling to this file
//#include "Wifi.h"

extern "C" {
#include "user_interface.h"
}


