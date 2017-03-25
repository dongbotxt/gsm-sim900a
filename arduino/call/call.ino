#include <SoftwareSerial.h>

SoftwareSerial mySerial(9, 10); // RX, TX: 10 - RX (GSM); 9 - TX (GSM)

void setup() {
  mySerial.begin(9600);   // Toc do baud GSM Module
  mySerial.println("ATD0xxxxxxxxx;\r\n"); // So dien thoai can goi di
}


void loop(){
 ;
}
