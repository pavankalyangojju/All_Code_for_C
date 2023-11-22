//Tech Trends Shameer
//Control LED Using Blynk 2.0/Blynk IOT

#define BLYNK_TEMPLATE_ID "TMPL31WiVV8La"
#define BLYNK_TEMPLATE_NAME "GOOGLE"
#define BLYNK_AUTH_TOKEN "cOiYDdi5b0nucrgIUr3VYHKv7TuH-DJm"


#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Airtel_Youngovator";  // Enter your Wifi Username
char pass[] = "Teamyoungovator23";  // Enter your Wifi password

int ledpin = D2;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  Blynk.run(); 
}




// #define BLYNK_TEMPLATE_ID "TMPL31WiVV8La"
// #define BLYNK_TEMPLATE_NAME "GOOGLE"
// #define BLYNK_AUTH_TOKEN "cOiYDdi5b0nucrgIUr3VYHKv7TuH-DJm"