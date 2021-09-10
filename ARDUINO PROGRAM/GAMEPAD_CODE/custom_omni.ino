/*
 * Custom program for Omniwheel car
kit i used: https://osoyoo.com/2019/11/08/omni-direction-mecanum-wheel-robotic-kit-v1/
*bttx 0, btrx 1
*SoftwareSerial mySerial(0, 1); // TX, RX
*https://github.com/engrpanda/Arduino-Bluetooth-Controller#serial-code-to-arduino-car
*/
char data = 0;

const int leftmotorA = 26;
const int leftmotorB = 28;
const int rightmotorA = 22;
const int rightmotorB = 24;
const int ENA = 10;
const int ENB = 9;

const int leftmotorC = 7;
const int leftmotorD = 8;
const int rightmotorC = 5;
const int rightmotorD = 6;
const int ENC = 12;
const int END = 11;

int carspeed = 255; //0-255

void setup() {
  Serial.begin(9600);
  //mySerial.begin(9600);
  pinMode(leftmotorA, OUTPUT);
  pinMode(leftmotorB, OUTPUT);
  pinMode(rightmotorA, OUTPUT);
  pinMode(rightmotorB, OUTPUT);
  pinMode(leftmotorC, OUTPUT);
  pinMode(leftmotorD, OUTPUT);
  pinMode(rightmotorC, OUTPUT);
  pinMode(rightmotorD, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(ENC, OUTPUT);
  pinMode(END, OUTPUT);
}
void loop() {

  Bluetooth();

}

void TurnLeft() {
  digitalWrite(leftmotorA, 0);
  digitalWrite(leftmotorB, 1);
  digitalWrite(rightmotorA, 1);
  digitalWrite(rightmotorB, 0);

  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);

  digitalWrite(leftmotorC, 0);
  digitalWrite(leftmotorD, 1);
  digitalWrite(rightmotorC, 1);
  digitalWrite(rightmotorD, 0);
  analogWrite(ENC, carspeed);
  analogWrite(END, carspeed);
}

void TurnRight() {
  digitalWrite(leftmotorA, 1);
  digitalWrite(leftmotorB, 0);
  digitalWrite(rightmotorA, 0);
  digitalWrite(rightmotorB, 1);

  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);

  digitalWrite(leftmotorC, 1);
  digitalWrite(leftmotorD, 0);
  digitalWrite(rightmotorC, 0);
  digitalWrite(rightmotorD, 1);
  analogWrite(ENC, carspeed);
  analogWrite(END, carspeed);
}


void Backward() {
  digitalWrite(leftmotorA, 0);
  digitalWrite(leftmotorB, 1);
  digitalWrite(rightmotorA, 0);
  digitalWrite(rightmotorB, 1);

  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);

  digitalWrite(leftmotorC, 0);
  digitalWrite(leftmotorD, 1);
  digitalWrite(rightmotorC, 0);
  digitalWrite(rightmotorD, 1);
  analogWrite(ENC, carspeed);
  analogWrite(END, carspeed);
}

void Forward() {
  digitalWrite(leftmotorA, 1);
  digitalWrite(leftmotorB, 0);
  digitalWrite(rightmotorA, 1);
  digitalWrite(rightmotorB, 0);

  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);

  digitalWrite(leftmotorC, 1);
  digitalWrite(leftmotorD, 0);
  digitalWrite(rightmotorC, 1);
  digitalWrite(rightmotorD, 0);
  analogWrite(ENC, carspeed);
  analogWrite(END, carspeed);
}
void sideright() {
  digitalWrite(leftmotorA, 1);
  digitalWrite(leftmotorB, 0);
  digitalWrite(rightmotorA, 0);
  digitalWrite(rightmotorB, 1);

  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);

  digitalWrite(leftmotorC, 0);
  digitalWrite(leftmotorD, 1);
  digitalWrite(rightmotorC, 1);
  digitalWrite(rightmotorD, 0);
  analogWrite(ENC, carspeed);
  analogWrite(END, carspeed);
}
void sideleft() {
  digitalWrite(leftmotorA, 0);
  digitalWrite(leftmotorB, 1);
  digitalWrite(rightmotorA, 1);
  digitalWrite(rightmotorB, 0);

  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);

  digitalWrite(leftmotorC, 1);
  digitalWrite(leftmotorD, 0);
  digitalWrite(rightmotorC, 0);
  digitalWrite(rightmotorD, 1);
  analogWrite(ENC, carspeed);
  analogWrite(END, carspeed);
}
void DiagonalLU() {
  digitalWrite(leftmotorA, 0);
  digitalWrite(leftmotorB, 0);
  digitalWrite(rightmotorA, 1);
  digitalWrite(rightmotorB, 0);

  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);

  digitalWrite(leftmotorC, 1);
  digitalWrite(leftmotorD, 0);
  digitalWrite(rightmotorC, 0);
  digitalWrite(rightmotorD, 0);
  analogWrite(ENC, carspeed);
  analogWrite(END, carspeed);
}
void DiagonalRU() {
  digitalWrite(leftmotorA, 1);
  digitalWrite(leftmotorB, 0);
  digitalWrite(rightmotorA, 0);
  digitalWrite(rightmotorB, 0);

  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);

  digitalWrite(leftmotorC, 0);
  digitalWrite(leftmotorD, 0);
  digitalWrite(rightmotorC, 1);
  digitalWrite(rightmotorD, 0);
  analogWrite(ENC, carspeed);
  analogWrite(END, carspeed);
}
void DiagonalRD() {
  digitalWrite(leftmotorA, 0);
  digitalWrite(leftmotorB, 0);
  digitalWrite(rightmotorA, 0);
  digitalWrite(rightmotorB, 1);

  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);

  digitalWrite(leftmotorC, 0);
  digitalWrite(leftmotorD, 1);
  digitalWrite(rightmotorC, 0);
  digitalWrite(rightmotorD, 0);
  analogWrite(ENC, carspeed);
  analogWrite(END, carspeed);
}
void DiagonalLD() {
  digitalWrite(leftmotorA, 0);
  digitalWrite(leftmotorB, 1);
  digitalWrite(rightmotorA, 0);
  digitalWrite(rightmotorB, 0);

  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);

  digitalWrite(leftmotorC, 0);
  digitalWrite(leftmotorD, 0);
  digitalWrite(rightmotorC, 0);
  digitalWrite(rightmotorD, 1);
  analogWrite(ENC, carspeed);
  analogWrite(END, carspeed);
}
void Stop() {
  digitalWrite(leftmotorA, 0);
  digitalWrite(leftmotorB, 0);
  digitalWrite(rightmotorA, 0);
  digitalWrite(rightmotorB, 0);

  analogWrite(ENA, carspeed);
  analogWrite(ENB, carspeed);

  digitalWrite(leftmotorC, 0);
  digitalWrite(leftmotorD, 0);
  digitalWrite(rightmotorC, 0);
  digitalWrite(rightmotorD, 0);
  analogWrite(ENC, carspeed);
  analogWrite(END, carspeed);
}

void Bluetooth() {
  if (Serial.available() > 0)
  {
    data = Serial.read();
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
    else if (data == 'M')
    {
      sideleft();
    }
    else if (data == 'O')
    {
      sideright();
    }
    else if (data == 'i')
    {
      DiagonalLU();
    }
    else if (data == 'j')
    {
      DiagonalRU();
    }
    else if (data == 'k')
    {
      DiagonalLD();
    }
    else if (data == 'l')
    {
      DiagonalRD();
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
    else if (data == 's')
    {
      Stop();
    }
  }
}
