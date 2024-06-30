#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
Adafruit_SSD1306 display(128, 64);
int state = 0;
void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3c);
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(2);
  display.setCursor(38, 25);
  display.print("14:60");
  display.display();
  
}
 

void Alarm(){
  digitalWrite(28, HIGH);
  delay(100); // this speeds up the simulation
  digitalWrite(28, LOW);
  delay(100);
  digitalWrite(28, HIGH);
  delay(100);
  digitalWrite(28, LOW);
  delay(700);
}
void loop() {
  
}
