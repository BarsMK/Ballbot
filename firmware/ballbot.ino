// Left motor
const int ENA = 5;
const int IN1 = 6;
const int IN2 = 7;

// Right motor
const int ENB = 10;
const int IN3 = 8;
const int IN4 = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void moveMotor(int en, int in1, int in2, int speed) {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(en, speed);
}


void loop() {
  // put your main code here, to run repeatedly:
  moveMotor(ENA, IN1, IN2, 150);
  delay(2000);

  analogWrite(ENA, 0);
  delay(1000);
}
