/*
 * PIR sensor tester
 */
#include <ESP8266WiFi.h>


int inputPin = 2;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;                    // variable for reading the pin status
char[] wifi_name = "Nik";
char[] wifi_pass = "nikashw2";

void setup() {
  Serial.begin(115200);
  Serial.println();

  WiFi.begin(wifi_name, wifi_pass);

  Serial.print("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());

  //pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
 
  Serial.begin(9600);
}
 
void loop(){
//  val = digitalRead(inputPin);  // read input value
//  if (val == HIGH) {            // check if the input is HIGH
//    digitalWrite(ledPin, HIGH);  // turn LED ON
//    if (pirState == LOW) {
//      // we have just turned on
//      Serial.println("Motion detected!");
//      // We only want to print on the output change, not state
//      pirState = HIGH;
//    }
//  } else {
//    digitalWrite(ledPin, LOW); // turn LED OFF
//    if (pirState == HIGH){
//      // we have just turned of
//      Serial.println("Motion ended!");
//      // We only want to print on the output change, not state
//      pirState = LOW;
//    }
//  }
}
