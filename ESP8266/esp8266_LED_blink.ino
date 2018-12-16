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

void setup() {
  // put your setup code here, to run once:
  pinMode(15, OUTPUT);
  Serial.begin(115200);
  int br = Serial.baudRate();
  Serial.printf("Serial is %d bps", br);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(15, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.printf("test\n");
  delay(1000);              // wait for a second
  digitalWrite(15, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
