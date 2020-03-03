char value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  if (Serial.available()>0)
  {
    char value = Serial.read();
    switch(value)
    {
      case '1':digitalWrite(13,HIGH);break;
      case '0':digitalWrite(13,LOW);break;
      default : break;    
    }
    Serial.println(value);
    
  }
  delay(50);
}
