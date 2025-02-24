int tiltsensor=45;
int led=42;
void setup() {
  pinMode(tiltsensor,INPUT);
  pinMode(led,OUTPUT);
  }

void loop()
 {
  int value= digitalRead(tiltsensor);
 if (value>90)
 {
  digitalWrite(led,HIGH);
  Serial.println(" led is on");
 }
 else
 {
  digitalWrite(led,LOW);
  Serial.println(" led is off");
 }
 if(value>180)
 {
  digitalWrite(led,HIGH);
  Serial.println(" led is on");
 }
 else
 {
  digitalWrite(led,LOW);
  Serial.println(" led is off");
 }
 if(value>360)
 {
  digitalWrite(led,HIGH);
  Serial.println(" led is on");
 }
 else
 {
  digitalWrite(led,LOW);
  Serial.println(" led is off");
 }

 


}
