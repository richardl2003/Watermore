int sensor;
const int powerpin = 8;
const int delayTime = 1000;
const int redLED = 2;
const int greenLED = 3;
const int dryThreshold = 800;
const int wetThreshold = 300;
const int normal = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(powerpin, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(powerpin, HIGH); // turn sensor on
  delay(10);
  sensor = analogRead(A0); // read sensor
  digitalWrite(powerpin, LOW);

  if (sensor > dryThreshold && sensor < normal) { // dry
    // turn green on, red off
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    Serial.println('d');
  } else if (sensor < wetThreshold) { // wet
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
  }

}
