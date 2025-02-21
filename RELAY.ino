int RELAY=5;
void setup() 
{
  pinMode (RELAY,OUTPUT);
  Serial.begin(9600);

}

void loop() 
{
  digitalWrite(RELAY,HIGH);
  Serial.println("RELAY IS ON");
  delay(5000);
  digitalWrite(RELAY,LOW);
  Serial.println("RELAY IS OFF");
  delay(8000);  

}
