int green = 8;
int blue = 9;
int red = 10;
int pushButton= 1;
int buttonState =1;
int buzzer = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(pushButton, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(green, HIGH);
buttonState = digitalRead(pushButton);
if(buttonState == 0){
  delay(500);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  delay(2000);
  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);
  for(int i=0; i<8; i++){
    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    delay(500);
  }
  delay(500);
  digitalWrite(red, LOW);
  digitalWrite(blue, HIGH);
  delay(2000);
  digitalWrite(blue, LOW);
}
}
