// Modulino Movement (IMU) — อ่านความเร่ง x/y/z
// ขยับ/เอียงบอร์ดแล้วดูค่าขยับใน Serial Monitor
// AI idea: จำท่ามือ, จับการล้ม, ตรวจการสั่น

#include <Modulino.h>

ModulinoMovement movement;

void setup() {
  Serial.begin(9600);
  Modulino.begin();
  movement.begin();
}

void loop() {
  movement.update();
  Serial.print("x: ");
  Serial.print(movement.getX());
  Serial.print("  y: ");
  Serial.print(movement.getY());
  Serial.print("  z: ");
  Serial.println(movement.getZ());
  delay(100);
}
https://drive.google.com/file/d/14yTtl1gxTREoU-g3JpaKDJCkucHd2X9o/view?usp=drive_link
