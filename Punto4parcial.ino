const int btnPin =2;
const int ledPin =5;

void setup() {
  DDRD = B00100000;
  PORTD = B00000100;
}

void loop() {
  int led = digitalRead(btnPin);

  if(btnPin == LOW){
    PORTD = (1 << ledPin) | PORTD;
  }else{
    PORTD = ~ (1 << ledPin) & PORTD;
  }

}