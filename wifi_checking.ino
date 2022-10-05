#include <ESP8266WiFi.h>

const char* ssid = "SSID";
const char* password = "password";

#define wled 2

void setup() {
  // put your setup code here, to run once:
  pinMode(wled, OUTPUT);
  digitalWrite(wled, LOW);

  Serial.begin(115200);
  Serial.print("Wifi connecting");

  WiFi.begin(ssid, password);

  Serial.println("Connecting");

  
}
  


void loop() {
  // put your main code here, to run repeatedly:
  while(WiFi.status() != WL_CONNECTED )
  {
    delay(200);
    Serial.println(".");
  }
  if(WiFi.status() == WL_CONNECTED)
  digitalWrite(wled, HIGH);
  delay(200);
  digitalWrite(wled, LOW);
  delay(200);
  
}
