void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == HIGH){ // if btn pressed - turn on
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
}
