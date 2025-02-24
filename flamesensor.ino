int laser=8;

void setup(){
  pinMode(laser,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int laser_value=analogRead(laser);
  if(laser_value<500){
    Serial.println("laser value is below 500");
    delay(2000);
  }
  else{
    Serial.println("laser value is above 500");
    delay(2000);
    
  }
}