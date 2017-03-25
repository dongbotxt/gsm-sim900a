#include <SoftwareSerial.h>

SoftwareSerial mySerial(9, 10); // RX, TX: 10 - RX (GSM); 9 - TX (GSM)

void setup() {
  mySerial.begin(9600);   // Toc do baud GSM Module
  
  mySerial.println("AT+CMGF=1"); // Che do Text
  delay(1000);
  mySerial.println("AT+CMGS=\"+84xxxxxxxxx\"\r"); // So dien thoai nhan tin nhan
  delay(1000);
  mySerial.println("Hello World!");
  delay(100);
  mySerial.println((char)26); // Ctrl + Z - Gui tin nhan
  delay(1000);
}

void loop() {
  ;
}

