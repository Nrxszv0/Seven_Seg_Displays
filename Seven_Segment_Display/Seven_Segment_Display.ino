int pin1 = 2, pin2 = 3, pin3 = 4, pin4 = 5, pin5=6, pin6=7, pin7=8, pin8=9;
int pin, arr=9;
int pinVal[10][8] = {
  {0,1,1,1,1,1,1,0}, //0
  {0,0,0,1,0,0,1,0},  //1
  {1,0,1,1,1,1,0,0}, //2
  {1,0,1,1,0,1,1,0}, //3
  {1,1,0,1,0,0,1,0}, //4
  {1,1,1,0,0,1,1,0}, //5
  {1,1,1,0,1,1,1,0}, //6
  {0,0,1,1,0,0,1,0}, //7
  {1,1,1,1,1,1,1,0}, //8
  {1,1,1,1,0,1,1,0} //9
  };
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
for( int num=0; num<=7; num++) {
  pin = num+2;
  if(pinVal[arr][num] == 1){
    digitalWrite(pin, HIGH);
  }
  else if(pinVal[arr][num] == 0) {
    digitalWrite(pin, LOW);
  }
}
}
