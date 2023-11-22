#include <SoftwareSerial.h>

String value;

int TxD = 11;

int RxD = 10;

int servoposition;

SoftwareSerial bluetooth(TxD, RxD);


void setup() {

  pinMode(2, OUTPUT);

  pinMode(13, OUTPUT);

  Serial.begin(9600);       // start serial communication at 9600bps

  bluetooth.begin(9600);

}


void loop() {

  Serial.println(value);

 if (bluetooth.available())

   {

    value = bluetooth.readString();


    if (value == "all LED turn on"){

    digitalWrite(2, HIGH);

    digitalWrite(13, HIGH);  

      }


    if (value == "all LED turn off"){

      digitalWrite(2, LOW); 

      digitalWrite(13, LOW);       

      }


    if (value == "white"){

    digitalWrite(2, HIGH); 

      }


    if (value == "yellow"){

      digitalWrite(13, HIGH);       

      }

      

    if (value == "turn off white"){

    digitalWrite(2, LOW); 

      }


    if (value == "turn off yellow"){

      digitalWrite(13, LOW);       

      }


 }


}