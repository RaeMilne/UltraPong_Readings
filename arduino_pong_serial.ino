/*
Pong Controllers
 Rae Milne
 Physical Computing
 2 December 2012
 */

int fsrUpPin = A0;
int fsrDownPin = A1;
int btnPin = 7;
int upVal;
int downVal;
int btnVal;

int previousTime;
int currentTime;
int delayTime = 0;


void setup() {
  Serial.begin(9600);
  pinMode(fsrUpPin, INPUT);
  pinMode(fsrDownPin, INPUT);
  pinMode(btnPin, INPUT_PULLUP);
  
  previousTime = millis();
}

void loop() {

  currentTime = millis();

  upVal = analogRead(fsrUpPin);
  //Serial.write(upVal);

  downVal = analogRead(fsrDownPin);
  //Serial.write(downVal);
  
  btnVal = digitalRead(btnPin);

  if (currentTime - previousTime >= delayTime) 
  {  
   // Serial.print("fsrUpPin: ");
    Serial.print(upVal);
    Serial.print(",");

   // Serial.print("fsrDownPin: ");
    Serial.print(downVal);
    Serial.print(",");
    Serial.println(btnVal);

    previousTime = millis(); 
  }


}





