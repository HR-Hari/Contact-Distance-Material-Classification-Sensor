#include <Wire.h>
#include <Servo.h>

#define MPU_ADDR 0x68
#define SERVO_PIN 9

Servo tapServo;

void setup() {
  Serial.begin(115200);
  Wire.begin();

  // Wake up MPU6050
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);

  tapServo.attach(SERVO_PIN);
  tapServo.write(0);   // initial position
}

void loop() {
  // Perform a simple tap
  tapServo.write(40);
  delay(150);
  tapServo.write(0);

  // Read accelerometer data
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x3B); // ACCEL_XOUT_H
  Wire.endTransmission(false);
  Wire.requestFrom(MPU_ADDR, 6, true);

  int16_t ax = Wire.read() << 8 | Wire.read();
  int16_t ay = Wire.read() << 8 | Wire.read();
  int16_t az = Wire.read() << 8 | Wire.read();

  // Send raw data
  Serial.print(ax);
  Serial.print(",");
  Serial.print(ay);
  Serial.print(",");
  Serial.println(az);

  delay(500);
}
