

#include "HX711.h"

#define calibration_factor -64820.0 //This value is obtained using the SparkFun_HX711_Calibration sketch

#define DOUT  13

#define CLK  12

HX711 scale(DOUT, CLK);


int DIR=6; //define Direction pin



void setup() {
 
  

  pinMode (DIR, OUTPUT);
  
  Serial.begin(9600);
  
  Serial.println("Remove all weight from scale");
  
  scale.set_scale();
  scale.tare(); //Reset the scale to 0
}

void loop() {

   scale.set_scale(calibration_factor); //Adjust to this calibration factor

  Serial.println(scale.get_units(),4);
  

  if (scale.get_units()<=-0.5){
    
     digitalWrite(DIR,LOW);
  }

  else{
     digitalWrite(DIR,HIGH);
     
  }
}
  
    

 

   

   
 

   

    




