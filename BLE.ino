char code;
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if(Serial.available()>0)
  {
    code=Serial.read();
    if(code=='1')
    {
      if(digitalRead(LED_BUILTIN)==LOW) Serial.println("LED ON");
      else Serial.println("LED OFF");
      digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    }
  }
}
