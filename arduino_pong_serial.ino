/*
Pong Controllers
 Rae Milne
 Physical Computing
 2 December 2012
 
 */

int inByte = 0;
int rightPin = A1; //rangerfinder
int btnPin = 13; //button
int rightVal = 0;
int btnVal = 1;


void setup() {
  Serial.begin(9600);
  pinMode(rightPin, INPUT);
  pinMode(btnPin, INPUT_PULLUP);
}

void loop() {

    rightVal = analogRead(rightPin);
    btnVal = digitalRead(btnPin);
    
    //Send values to serial
    Serial.print(rightVal);
    Serial.print(",");
    Serial.println(btnVal);

}




