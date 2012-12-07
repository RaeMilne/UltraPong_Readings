/*
Pong Controllers
 Rae Milne
 Physical Computing
 2 December 2012
 
 Modified Code from:
 Making Things Talk
 by Tom Igoe
 
 */

int inByte = 0;

//int leftPin = 3;
int rightPin = A1;
int btnPin = 13;
int rightVal = 0;
int btnVal = 1;

/*
const int numVals = 3;
 long tempVals[numVals];
 long leftVal, pulse, inches;
 */

void setup() {
  Serial.begin(9600);
  pinMode(rightPin, INPUT);
  pinMode(btnPin, INPUT_PULLUP);
 
   while (Serial.available() <= 0) 
   {
   Serial.write('\r');
   delay(300);
   } 


}

void loop() {

  if (Serial.available() > 0) {

    inByte = Serial.read();
    Serial.print("I received: ");
    Serial.println(inByte, DEC);

    rightVal = analogRead(rightPin);
    btnVal = digitalRead(btnPin);

    Serial.print(rightVal);
    Serial.print(",");
    Serial.println(btnVal);

  }
}

/*
    pulse = pulseIn(leftPin, HIGH);
 
 inches = pulse/147;
 leftVal = inches;
 
 btnVal = digitalRead(btnPin);
 
 Serial.print(leftVal);
 
 //  Serial.print(",");
 //  Serial.print(rightVal);
 
 Serial.print(",");
 Serial.println(btnVal);
 */




