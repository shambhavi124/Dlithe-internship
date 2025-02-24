#define BLYNK_TEMPLATE_ID "TMPL35krS4NvW"
#define BLYNK_TEMPLATE_NAME "LED1"
#define BLYNK_AUTH_TOKEN "VGKw7JB__dKcuufooSwYFpip_SDAeJTg"
#define BLYNK_PRINT Serial
#include<WiFi.h>
#include<BlynkSimpleEsp32.h>

char auth[] = "VGKw7JB__dKcuufooSwYFpip_SDAeJTg";
char ssid[] = "One Plus Nord 2T";
char pass[] = "12345678";

BLYNK_WRITE(V0){
  int pinvalue=param.asInt();
  digitalWrite(42,pinvalue);
}
void setup() {
 Serial.begin(9600);
 pinMode(42,OUTPUT);
 WiFi.begin(ssid,pass);
 while(WiFi.status() != WL_CONNECTED){
  delay(500);
  Serial.println("Not connected");
 }
 Serial.println("Connected");
 Blynk.begin(auth,ssid,pass);

}

void loop() {
  Blynk.run();
}
