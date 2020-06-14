int PUL=7; //define Pulse pin





void setup() {

  pinMode (PUL, OUTPUT);

 



 

}

void loop() {

   

   

    digitalWrite(PUL,HIGH);

    delayMicroseconds(100);

    digitalWrite(PUL,LOW);

    delayMicroseconds(100);
  

  }
