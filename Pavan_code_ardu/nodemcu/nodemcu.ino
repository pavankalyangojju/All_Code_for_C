//Tech Trends Shameer


#define BLYNK_TEMPLATE_ID "TMPL3f8k_Ivv5"
#define BLYNK_TEMPLATE_NAME "HOME AUTOMATION"
#define BLYNK_AUTH_TOKEN "C6W_ZQaavJ2H9frm2ERFaV-oUEYP1iWR"











//Control LED Using Blynk 2.0/Blynk IOT

#define BLYNK_TEMPLATE_ID "TemplateID"
#define BLYNK_DEVICE_NAME "Device Name"
#define BLYNK_AUTH_TOKEN "Auth Token"


#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Wifi Username";  // Enter your Wifi Username
char pass[] = "Wifi Password";  // Enter your Wifi password

int ledpin = D4;
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