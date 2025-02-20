int SOILMOISTURESENSOR=A1;
int BUZZER=6;
void setup() {
  pinMode(SOILMOISTURESENSOR,INPUT);
  pinMode(BUZZER,OUTPUT);
    Serial.begin(9600);  
}

void loop() {
  int SOILMOISTURESENSOR= digitalRead(SOILMOISTURESENSOR);
  Serial.println(SOILMOISTURESENSOR);
  if(SOILMOISTURESENSOR<500)
  {
    digitalWrite(BUZZER,HIGH);

  }
  else
  {
    digitalWrite(BUZZER,LOW);
      }

}
