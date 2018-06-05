/**
 * File contents of "userdata_devel.h" for DUMB2SMART
 *
 * This file is used to change the userdata to meet your needs
 */

//************ CONFIG WIFI *******************************************************************************
// Configurations of your wifi network - Fixed IP is used because it's quicker than DHCP. IP address and
// and Hostname must be unique inside your network
//********************************************************************************************************
  #ifndef WIFI_CONFIG_H
  #define YOUR_WIFI_SSID "wifinet"                                              // Wifi SSID
  #define YOUR_WIFI_PASSWD "wifipass"                                           // Wifi password
  #endif // !WIFI_CONFIG_H

// If you want to use a fixed IP address, open "wifiConfig.h" and edit lines 123, 124 and 125

  #define DEVICE_HOSTNAME "teste_tt"                                            // Hostname

//************ CONFIG NTP ********************************************************************************
// Configurations for the NTP server - Use the address of the server closer to your location
//********************************************************************************************************
  static const char ntpServerName[] = "ntp02.oal.ul.pt";

  const int timeZone = 0;  // 0 = UTC

//************ CONFIG ACCESS TO UPDATE PAGE **************************************************************
// Configurations for OTA page - When you access "http://<device-ip>/firmware" the page will ask for a
// username and password. For your security, please change both or at least the password!
//********************************************************************************************************
  const char* ACCESS_USERNAME = "admin";                                        // Username to the web update page
  const char* ACCESS_PASSWORD = "1a2b3c";                                       // Password to the web update page
  const char* UPDATE_PATH = "/firmware";                                        // Path to update page

//************* CONFIG MQTT ******************************************************************************
// Configurations of your MQTT server -
//********************************************************************************************************
  const char* MQTT_SERVER = "192.168.1.200";                                    // MQTT server IP ou URL
  int MQTT_PORT = 1883;                                                         // MQTT port
  const char* MQTT_USERNAME = "homeassistant";                                  // MQTT user
  const char* MQTT_PASSWORD = "password";                                       // MQTT password

//************ MQTT LWT **********************************************************************************
// Configurations of your MQTT LWT - Define here the Last Will and Testment of your device. the MQTT broker and the
// payload for door open and closed
//********************************************************************************************************
  const char* MQTT_WILL_TOPIC = "home/test/status";                             // MQTT last will topic
  const char* MQTT_WILL_MESSAGE = "online";                                     // MQTT last will message
  int MQTT_WILL_QOS = 1;                                                        // MQTT last will QoS (0,1 or 2)
  int MQTT_WILL_RETAIN = 1;                                                     // MQTT last will retain (0 or 1)

//************* CONFIG PINS ******************************************************************************
// Configurations of the device pins - This is where you configure which pins should be used. You can
// change them to fit your needs. The pins refer to Arduino-like pins and not the ones marked on the board
//********************************************************************************************************
  #define B_LEDPIN 15                                                           // Blue LED pin - External running indicator
  #define ONBOARD_LED 2                                                         // Internal LED in NodeMCU

// END
//********************************************************************************************************
