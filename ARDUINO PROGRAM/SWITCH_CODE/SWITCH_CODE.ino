#include <SoftwareSerial.h>
char data = 0;
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
  if (mySerial.available() > 0)
  {
    data = mySerial.read();
    Serial.print(data);
    Serial.print("\n");
    if (data == 'B')
    {
      digitalWrite(2, HIGH);
    }
    else if (data == 'b')
    {
      digitalWrite(2, LOW);
    }
    else if (data == 'C')
    {
      digitalWrite(3, HIGH);
    }
    else if (data == 'c')
    {
      digitalWrite(3, LOW);
    }
    else if (data == 'D')
    {
      digitalWrite(4, HIGH);
    }
    else if (data == 'd')
    {
      digitalWrite(4, LOW);
    }
    else if (data == 'E')
    {
      digitalWrite(5, HIGH);
    }
    else if (data == 'e')
    {
      digitalWrite(5, LOW);
    }
    else if (data == 'F')
    {
      digitalWrite(6, HIGH);
    }
    else if (data == 'f')
    {
      digitalWrite(6, LOW);
    }
    else if (data == 'G')
    {
      digitalWrite(7, HIGH);
    }
    else if (data == 'g')
    {
      digitalWrite(7, LOW);
    }
    else if (data == 'H')
    {
      digitalWrite(8, HIGH);
    }
    else if (data == 'h')
    {
      digitalWrite(8, LOW);
    }
    else if (data == 'I')
    {
      digitalWrite(9, HIGH);
    }
    else if (data == 'i')
    {
      digitalWrite(9, LOW);
    }
    else if (data == 'J')
    {
      digitalWrite(10, HIGH);
    }
    else if (data == 'j')
    {
      digitalWrite(10, LOW);
    }
    else if (data == 'K')
    {
      digitalWrite(11, HIGH);
    }
    else if (data == 'k')
    {
      digitalWrite(11, LOW);
    }
    else if (data == 'L')
    {
      digitalWrite(12, HIGH);
    }
    else if (data == 'l')
    {
      digitalWrite(12, LOW);
    }
    else if (data == 'M')
    {
      digitalWrite(13, HIGH);
    }
    else if (data == 'm')
    {
      digitalWrite(13, LOW);
    }
    else if (data == 'N')
    {
      digitalWrite(A0, HIGH);
    }
    else if (data == 'n')
    {
      digitalWrite(A0, LOW);
    }
    else if (data == 'O')
    {
      digitalWrite(A1, HIGH);
    }
    else if (data == 'o')
    {
      digitalWrite(A1, LOW);
    }
    else if (data == 'P')
    {
      digitalWrite(A2, HIGH);
    }
    else if (data == 'p')
    {
      digitalWrite(A2, LOW);
    }
    else if (data == 'Q')
    {
      digitalWrite(A3, HIGH);
    }
    else if (data == 'q')
    {
      digitalWrite(A3, LOW);
    }
    else if (data == 'R')
    {
      digitalWrite(A4, HIGH);
    }
    else if (data == 'r')
    {
      digitalWrite(A4, LOW);
    }
    else if (data == 'S')
    {
      digitalWrite(A5, HIGH);
    }
    else if (data == 's')
    {
      digitalWrite(A5, LOW);
    }
  }
}
