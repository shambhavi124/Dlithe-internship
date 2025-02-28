int led=LED_BUILTIN;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(led,HIGH);
   Serial.println(led);
   delay(1000);
   digitalWrite(led,LOW);
    Serial.println(led);
   delay(1000);
}
