/*
Pong Controllers
 Rae Milne
 Physical Computing
 2 December 2012
 
 Modified Code from:
 Bruce Allen
 Date: 23/07/09
 
 */


int leftPin = 3;
//int rightPin = A1;
int btnPin = 7;

//int leftVal;
//int rightVal;
int btnVal;

int previousTime;
int currentTime;
int delayTime = 0;

const int numVals = 3;

long tempVals[numVals];

long leftVal, pulse, inches;

void setup() {
  Serial.begin(9600);
  pinMode(leftPin, INPUT);
  //pinMode(rightPin, INPUT);
  pinMode(btnPin, INPUT_PULLUP);

  previousTime = millis();
}

void loop() {

  currentTime = millis();

  if (currentTime - previousTime >= delayTime) 
  {  

    
    pulse = pulseIn(leftPin, HIGH);
    
    inches = pulse/147;
    leftVal = inches;

    btnVal = digitalRead(btnPin);

    Serial.print(leftVal);

    //  Serial.print(",");
    //  Serial.print(rightVal);

    Serial.print(",");
    Serial.println(btnVal);

    previousTime = millis(); 

  }

}
