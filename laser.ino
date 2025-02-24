int laser=8;
int ir=12;

void setup(){
  pinMode(laser,OUTPUT);
  pinMode(ir,INPUT);
   Serial.begin(9600);
}

void loop(){
  
    digitalWrite(ir,HIGH);
    Serial.println("laser IS TURNED ON");
    delay(2000);
    digitalWrite(ir,LOW);
    Serial.println("laser is TURNED OFF");
    delay(2000);
    
  }
