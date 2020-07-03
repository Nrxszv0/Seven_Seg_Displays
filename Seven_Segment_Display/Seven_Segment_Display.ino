int pin1 = 2, pin2 = 3, pin3 = 4, pin4 = 5, pin5=6, pin6=7, pin7=8, pin8=9;
int pin;
int pinVal[] = {1,0,0,0,0,0,0,0};
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pin1, OUTPUT);
pinMode(pin2, OUTPUT);
pinMode(pin3, OUTPUT);
pinMode(pin4, OUTPUT);
pinMode(pin5, OUTPUT);
pinMode(pin6, OUTPUT);
pinMode(pin7, OUTPUT);
pinMode(pin8, OUTPUT);
}

void loop() {
//digitalWrite(pin1, HIGH);
//digitalWrite(pin2, HIGH);
//digitalWrite(pin3, HIGH);
//digitalWrite(pin4, HIGH);
//digitalWrite(pin5, HIGH);
//digitalWrite(pin6, HIGH);
//digitalWrite(pin7, HIGH);
//digitalWrite(pin8, HIGH);
// 00000001 = pin1 on
//if (pinVal[0] == 1) {
//  digitalWrite(pin1, HIGH);
//}
for( int num=0; num<=7; num++) {
  pin = num+2;
  if(pinVal[num] == 1){
    digitalWrite(pin, HIGH);
  }
  else if(pinVal[num] == 0) {
    digitalWrite(pin, LOW);
  }
  Serial.println(pin);
//  Serial.println(pinVal[num]);
}
delay(8888);
}
