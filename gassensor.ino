int flamesensor= 7;

void setup(){
  pinMode(flamesensor,INPUT);
  Serial.begin(9600);
}

void loop(){
  int flamesensor_value=analogRead(flamesensor);
  if(flamesensor_value<500){
    Serial.println("flamesensor value is below 500");
    delay(2000);
  }
  else{
    Serial.println("flamesensor value is above 500");
    delay(2000);
    
  }
}