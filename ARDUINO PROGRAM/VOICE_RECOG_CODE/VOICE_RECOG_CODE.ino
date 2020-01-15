//LINK: https://github.com/engrpanda/Arduino-Bluetooth-Controller

#include <SoftwareSerial.h>
String data;
SoftwareSerial mySerial(0, 1); // TX, RX

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
}
void loop() {
  Bluetooth();
}

void Bluetooth() {
  while (mySerial.available())
  {
    delay(10);
    char c = mySerial.read();
    if (c == "#") {
      break;
    }
    data += c;
  }

  if (data.length() > 0) {
    Serial.println(data);

    if (data == "green on")
    {
      digitalWrite(2, HIGH);
    }
    else if (data == "green off")
    {
      digitalWrite(2, LOW);
    }
    else if (data == "blue on")
    {
      digitalWrite(3, HIGH);
    }
    else if (data == "blue off")
    {
      digitalWrite(3, LOW);
    }
    else if (data == "yellow on")
    {
      digitalWrite(4, HIGH);
    }
    else if (data == "yellow off")
    {
      digitalWrite(4, LOW);
    }
  }
  data = "";
}
