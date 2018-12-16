/*
LED BLINKING 
*/
//Board: NodeMCU 0.9 (ESP-12 Module)
//Upload speed: "115200"
//CPU frequency: "80MHz"
//Flash Size: "4M (1M SPIFFS)"
//Debug port: "Disabled"
//Debug level: "CORE+WIFI+HTTP_UPDATE+UPDATER+OTA+OOM"
//lwIP Variant: "v2 Lower Memory"
//Erase Flash: "Only sketch"
//Port: COM3
//Programmer: "AVRISP mkII"

#include "ESP8266WiFi.h"

// WiFi parameters to be configured
const char* ssid = "cashierNaveen";
const char* password = "4rfv5tgb6yhn";

void setup(void)
{ 
  Serial.begin(115200);
  // Connect to WiFi
  WiFi.begin(ssid, password);
  // while wifi not connected yet, print '.'
  // then after it connected, get out of the loop
  while (WiFi.status() != WL_CONNECTED) {
     delay(500);
     Serial.print(".");
  }
  //print a new line, then print WiFi connected and the IP address
  Serial.println("");
  Serial.println("WiFi connected");
  // Print the IP address
  Serial.println(WiFi.localIP());

}
void loop() {
  // Nothing
}
