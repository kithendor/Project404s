#include <SoftwareSerial.h>
const int txPin = 12; //SoftwareSerial TX pin, connect to JY-MCU RX pin
const int rxPin = 13; //SoftwareSerial RX pin, connect to JY-MCY TX pin
SoftwareSerial bluetoothInput(txPin,rxPin);
char value;
char st[] = {90,90};
int front_led_l = 6;
int front_led_r = 5;

int back_led_l = 11;
int back_led_r = 10;

#include <Servo.h>

//___________________ front motros ________________
int frontleft1 = 22;
int frontleft2 = 23;

int frontright1 = 24;
int frontright2 = 25;

//___________________ middle motros ________________
int middleleft1 = 26;
int middleleft2 = 27;

int middleright1 = 28;
int middleright2 = 29;

//___________________ back motros ________________
int backleft1 = 18;
int backleft2 = 19;

int backright1 = 20;
int backright2 = 21;


Servo frontleft,frontright,backleft,backright;

void setup()
{
  pinMode(front_led_l, OUTPUT);
    pinMode(front_led_r, OUTPUT);
    pinMode(back_led_l, OUTPUT);
    pinMode(back_led_r, OUTPUT);
  Serial.begin(9600);
  bluetoothInput.begin(9600);


  pinMode(frontleft1, OUTPUT);
  pinMode(frontleft2, OUTPUT);
  pinMode(frontright1, OUTPUT);
  pinMode(frontright2, OUTPUT);

  pinMode(middleleft1, OUTPUT);
  pinMode(middleleft2, OUTPUT);
  pinMode(middleright1, OUTPUT);
  pinMode(middleright2, OUTPUT);

  pinMode(backleft1, OUTPUT);
  pinMode(backleft2, OUTPUT);
  pinMode(backright1, OUTPUT);
  pinMode(backright2, OUTPUT);

  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT);


  frontleft.attach(6);
  frontright.attach(7);
  backleft.attach(8);
  backright.attach(9);

//_______________ rover forward
  frontleft.write(0); 
  frontright.attach(0);
  backleft.attach(0);
  backright.attach(0);
}

void loop()
{
  if (bluetoothInput.available()>0 || Serial.available()>0){
    
    if(bluetoothInput.available()>0){
      value = bluetoothInput.read();
    }else{
      value = Serial.read();
      Serial.print("c"+value);
    }
    
    if(value == 'a')
    {
      forward();
    }
    if(value == 's')
    {
      turnleft();
    }
    if(value == 'z')
    {
      //....
    }
    if(value == 'x')
    {
      //...
    }
  }
}


void forward(){
  analogWrite(2, 200); //ENA pin
  analogWrite(3, 200); //ENB pin



  //forward all motors
  digitalWrite(frontleft1, HIGH);
  digitalWrite(frontleft2, LOW);

  digitalWrite(frontright1, HIGH);
  digitalWrite(frontright2, LOW);

  

  digitalWrite(middleleft2, HIGH);
  digitalWrite(middleleft2, LOW);

  digitalWrite(middleright1, HIGH);
  digitalWrite(middleright2, LOW);



  digitalWrite(backleft1, HIGH);
  digitalWrite(backleft2, LOW);

  digitalWrite(backright1, HIGH);
  digitalWrite(backright2, LOW);

  }



  void turnleft(){
  frontleft.write(-45); 
  frontright.attach(45);
  backleft.attach(45);
  backright.attach(-45);
}
