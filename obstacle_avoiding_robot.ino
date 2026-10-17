int motor1pin1 = 2;//out 1
int motor1pin2 = 3;//out2
//left wheel

int motor2pin1 = 4;//out 3
int  motor2pin2 = 5;//out4
//right wheel

const int front_left=9;
const int front_right=8;
const int back_left=10;
const int back_right=11;
//sensors

void setup() {
  pinMode(motor1pin1,OUTPUT);
  pinMode(motor1pin2,OUTPUT);
  pinMode(motor2pin1,OUTPUT);
  pinMode(motor2pin2,OUTPUT);

  pinMode(front_left,INPUT);
  pinMode(front_right,INPUT);
  pinMode(back_right,INPUT);
  pinMode(back_left,INPUT);
}

void loop() {
  int sensorfr=digitalRead(front_right);
  int sensorfl=digitalRead(front_left);
  int sensorbr=digitalRead(back_right);
  int sensorbl=digitalRead(back_left);
  
  if (sensorfr==HIGH && sensorfl==HIGH && sensorbr==HIGH && sensorbl==HIGH) {
    moveForward();
  }
  if (sensorfr==LOW && sensorfl==HIGH && sensorbr==HIGH && sensorbl==HIGH) {
    moveBack();
    svouraLeft();
    delay(175);
    stopMotors();
  }
  if (sensorfr==HIGH && sensorfl==HIGH && sensorbr==HIGH && sensorbl==LOW) {
    moveForward();
    delay(250);
    svouraRight();
    delay(175);
    stopMotors();
  }
  if (sensorfr==HIGH && sensorfl==HIGH && sensorbr==LOW && sensorbl==HIGH) {
    moveForward();
    delay(250);
    svouraLeft();
    delay(175);
    stopMotors();
  }
  if (sensorfr==HIGH && sensorfl==LOW && sensorbr==HIGH && sensorbl==HIGH) {
    moveBack();
    delay(250);
    svouraRight();
    delay(175);
    stopMotors();
  }
  if (sensorfr==HIGH && sensorfl==HIGH && sensorbr==LOW && sensorbl==LOW) {
    moveForward();
  }
  if (sensorfr==HIGH && sensorfl==LOW && sensorbr==LOW && sensorbl==HIGH) {
    svouraRight();
    delay(175);
    stopMotors();
  }
  if (sensorfr==HIGH && sensorfl==LOW && sensorbr==HIGH && sensorbl==LOW) {
    svouraRight();
    delay(100);
    stopMotors();
  }
  if (sensorfr==HIGH && sensorfl==LOW && sensorbr==LOW && sensorbl==HIGH) {
    svouraRight();
    delay(175);
    stopMotors();
  }
  if (sensorfr==HIGH && sensorfl==LOW && sensorbr==LOW && sensorbl==LOW) {
    svouraRight();
    delay(175);
    stopMotors();
  }
  if (sensorfr==LOW && sensorfl==HIGH && sensorbr==HIGH && sensorbl==LOW) {
    svouraLeft();
    delay(175);
    stopMotors();
  }
  if (sensorfr==LOW && sensorfl==HIGH && sensorbr==LOW && sensorbl==HIGH) {
    svouraLeft();
    delay(175);
    stopMotors();
  }
  if (sensorfr==LOW && sensorfl==HIGH && sensorbr==LOW && sensorbl==LOW) {
    svouraRight();
    delay(175);
    stopMotors();
  }
  if (sensorfr==LOW && sensorfl==LOW && sensorbr==HIGH && sensorbl==HIGH) {
    moveBack();
  }
  if (sensorfr==LOW && sensorfl==LOW && sensorbr==HIGH && sensorbl==LOW) {
    svouraLeft();
    delay(175);
    stopMotors();
    moveBack();
  }
  if (sensorfr==LOW && sensorfl==LOW && sensorbr==LOW && sensorbl==HIGH) {
    svouraRight();
    delay(175);
    stopMotors();
    moveBack();
  }
  if (sensorfr==LOW && sensorfl==LOW && sensorbr==HIGH && sensorbl==LOW) {
    svouraLeft();
    delay(175);
    stopMotors();
  }
}

void moveForward(void) {
  digitalWrite(motor1pin1,LOW);
  digitalWrite(motor1pin2,HIGH);
  digitalWrite(motor2pin1,LOW);
  digitalWrite(motor2pin2,HIGH);
}

void moveBack(void) {
  stopMotors();
  digitalWrite(motor1pin1,HIGH);
  digitalWrite(motor1pin2,LOW);
  digitalWrite(motor2pin1,HIGH);
  digitalWrite(motor2pin2,LOW);
  delay(250);
  stopMotors();
}

void stopMotors(void) {
  digitalWrite(motor1pin1,LOW);
  digitalWrite(motor1pin2,LOW);
  digitalWrite(motor2pin1,LOW);
  digitalWrite(motor2pin2,LOW);
  delay(500);
}

void svouraRight(void) {
  stopMotors();
  digitalWrite(motor1pin1,LOW);
  digitalWrite(motor1pin2,HIGH);
  digitalWrite(motor2pin1,HIGH);
  digitalWrite(motor2pin2,LOW);
}

void svouraLeft(void) {
  stopMotors();
  digitalWrite(motor1pin1,HIGH);
  digitalWrite(motor1pin2,LOW);
  digitalWrite(motor2pin1,LOW);
  digitalWrite(motor2pin2,HIGH);
}
