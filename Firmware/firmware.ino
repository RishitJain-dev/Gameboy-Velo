#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>

#define TFT_CS    3
#define TFT_DC    4
#define TFT_RST  -1

#define PIN_JOY_Y 6
#define PIN_JOY_X 7

#define PIN_BTN_D6 21
#define PIN_BTN_D7 20
#define PIN_BTN_D0 2

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  pinMode(PIN_BTN_D6, INPUT_PULLUP);
  pinMode(PIN_BTN_D7, INPUT_PULLUP);
  pinMode(PIN_BTN_D0, INPUT_PULLUP);

  tft.init(170, 320);
  tft.setRotation(1);
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextColor(ST77XX_WHITE, ST77XX_BLACK);
  tft.setTextSize(2);
}

void loop() {
  int joyY = analogRead(PIN_JOY_Y);
  int joyX = analogRead(PIN_JOY_X);

  bool btnD6 = (digitalRead(PIN_BTN_D6) == LOW);
  bool btnD7 = (digitalRead(PIN_BTN_D7) == LOW);
  bool btnD0 = (digitalRead(PIN_BTN_D0) == LOW);

  tft.setCursor(10, 10);
  tft.print("Joy Y (D4): ");
  tft.print(joyY);
  tft.print(" ba ba balack sheep   ");

  tft.setCursor(10, 40);
  tft.print("Joy X (D5): ");
  tft.print(joyX);
  tft.print(" baa   ");

  tft.setCursor(10, 80);
  tft.print("SW2 (D6): ");
  tft.print(btnD6 ? "PRESSED " : "RELEASED");

  tft.setCursor(10, 110);
  tft.print("SW3 (D7): ");
  tft.print(btnD7 ? "PRESSED " : "RELEASED");

  tft.setCursor(10, 140);
  tft.print("SW4 (D0): ");
  tft.print(btnD0 ? "PRESSED " : "RELEASED");

  delay(50);
}