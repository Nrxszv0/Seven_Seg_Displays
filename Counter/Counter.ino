int pin, arr;
int dly = 150;
int pinVal[10][8] = {
  {0, 1, 1, 1, 1, 1, 1, 0}, //0
  {0, 0, 0, 1, 0, 0, 1, 0}, //1
  {1, 0, 1, 1, 1, 1, 0, 0}, //2
  {1, 0, 1, 1, 0, 1, 1, 0}, //3
  {1, 1, 0, 1, 0, 0, 1, 0}, //4
  {1, 1, 1, 0, 0, 1, 1, 0}, //5
  {1, 1, 1, 0, 1, 1, 1, 0}, //6
  {0, 0, 1, 1, 0, 0, 1, 0}, //7
  {1, 1, 1, 1, 1, 1, 1, 0}, //8
  {1, 1, 1, 1, 0, 1, 1, 0} //9
};
void setup() {
  Serial.begin(9600);
  for (pin = 2; pin <= 9; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  for (int arr = 0; arr <= 10; arr++) {
    for ( int num = 0; num <= 7; num++) {
      pin = num + 2;
      if (pinVal[arr][num] == 1) {
        digitalWrite(pin, HIGH);
      }
      else if (pinVal[arr][num] == 0) {
        digitalWrite(pin, LOW);
      }
    }
    delay(dly);
  }
}
