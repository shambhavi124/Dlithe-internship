#include <Ultrasonic.h>
int LED=42;
int RELAY=5;
int BUZZ=6;
int distence;
Ultrasonic ultrasonic(12, 13);
void setup() {
  pinMode(RELAY,OUTPUT);
  pinMode(LED,OUTPUT);
  pinMode(BUZZ,OUTPUT);
  Serial.begin(9600);
}

void loop() {
   distence = ultrasonic.read();
   if(distence<5)
  {
  Serial.println("LED IS ON");
  digitalWrite(LED,HIGH);
  digitalWrite(RELAY,LOW);
  digitalWrite(BUZZ,LOW);
  delay(1000);
}
else
{
 Serial.println("RELAY IS ON");
  digitalWrite(LED,LOW);
  digitalWrite(RELAY,HIGH);
  digitalWrite(BUZZ,LOW);
  delay(1000);
}
 Serial.println("BUZZ IS ON");
  digitalWrite(LED,LOW);
  digitalWrite(RELAY,LOW);
  digitalWrite(BUZZ,HIGH);
  delay(1000);
}

