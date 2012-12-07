/*
Pong Controllers
 Rae Milne
 Physical Computing
 2 December 2012

 
 */

int inByte = 0;

//int leftPin = 3;
int rightPin = A1;
int btnPin = 13;
int rightVal = 0;
int btnVal = 1;


void setup() {
  Serial.begin(9600);
  pinMode(rightPin, INPUT);
  pinMode(btnPin, INPUT_PULLUP);
}

void loop() {
  
  /*
    inByte = Serial.read();
    Serial.print("I received: ");
    Serial.println(inByte, DEC);
    
    */

    rightVal = analogRead(rightPin);
    btnVal = digitalRead(btnPin);

    Serial.print(rightVal);
    Serial.print(",");
    Serial.println(btnVal);

}




