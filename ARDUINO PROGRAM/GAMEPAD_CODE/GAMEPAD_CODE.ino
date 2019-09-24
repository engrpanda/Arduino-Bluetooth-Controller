#include <SoftwareSerial.h>
char data = 0;
SoftwareSerial mySerial(0, 1); // TX, RX

const int leftmotorA = 3;
const int leftmotorB = 5;
const int rightmotorA = 6;
const int rightmotorB = 11;

int carspeed = 204; //0-255

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(leftmotorA, OUTPUT);
  pinMode(leftmotorB, OUTPUT);
  pinMode(rightmotorA, OUTPUT);
  pinMode(rightmotorB, OUTPUT);
}
void loop() {
  Bluetooth();
}

void TurnLeft() {
  analogWrite(leftmotorA, carspeed);
  analogWrite(leftmotorB, 0);
  analogWrite(rightmotorA, carspeed);
  analogWrite(rightmotorB, 0);
}

void TurnRight() {
  analogWrite(leftmotorA, 0);
  analogWrite(leftmotorB, carspeed);
  analogWrite(rightmotorA, 0);
  analogWrite(rightmotorB, carspeed);
}


void Backward() {
  analogWrite(leftmotorA, 0);
  analogWrite(leftmotorB, carspeed);
  analogWrite(rightmotorA, carspeed);
  analogWrite(rightmotorB, 0);
}

void Forward() {
  analogWrite(leftmotorA, carspeed);
  analogWrite(leftmotorB, 0);
  analogWrite(rightmotorA, 0);
  analogWrite(rightmotorB, carspeed);
}

void Stop() {
  analogWrite(leftmotorA, 0);
  analogWrite(leftmotorB, 0);
  analogWrite(rightmotorA, 0);
  analogWrite(rightmotorB, 0);
}

void Bluetooth() {
  if (mySerial.available() > 0)
  {
    data = mySerial.read();
    Serial.print(data);
    Serial.print("\n");
    if (data == '0')
    {
      carspeed = 0;
    }
    else if (data == '1')
    {
      carspeed = 100;
    }
    else if (data == '2')
    {
      carspeed = 120;
    }
    else if (data == '3')
    {
      carspeed = 140;
    }
    else if (data == '4')
    {
      carspeed = 160;
    }
    else if (data == '5')
    {
      carspeed = 180;
    }
    else if (data == '6')
    {
      carspeed = 200;
    }
    else if (data == '7')
    {
      carspeed = 220;
    }
    else if (data == '8')
    {
      carspeed = 240;
    }
    else if (data == '9')
    {
      carspeed = 255;
    }
    else if (data == 'B')
    {

    }
    else if (data == 'C')
    {
      
    }
    else if (data == 'D')
    {
      
    }
    else if (data == 'E')
    {

    }
    else if (data == 'F')
    {

    }
    else if (data == 'G')
    {

    }
    else if (data == 'H')
    {

    }
    else if (data == 'I')
    {
      Forward();
    }
    else if (data == 'J')
    {
      Backward();
    }
    else if (data == 'K')
    {
      TurnLeft();
    }
    else if (data == 'L')
    {
      TurnRight();
    }
    else if (data == 'M')
    {

    }
    else if (data == 'N')
    {

    }
    else if (data == 'O')
    {

    }
    else if (data == 'P')
    {

    }
    else if (data == 'Q')
    {

    }
    else if (data == 'R')
    {

    }
    else if (data == 'S')
    {
      Stop();
    }
  }
}
