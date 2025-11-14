/*
  This example demonstrates how to use the DMD and related classes to
  draw things on a Freetronics Large Dot Matrix Display.

  This example is placed into the public domain.
*/

#include <DMD3.h>
#include <DejaVuSans9.h>
#include <DejaVuSansBold9.h>
#include "DejaVuSansItalic9.h"
#include "Arial_Black_16_ISO_8859_1.h"
#include "Font5x7.h"
#include "Mono5x7.h"

int a = 0;

DMD3 display(6, 1);;

void scan()
{
  display.refresh();
}

void setup() {
  Timer1.initialize(2000);
  Timer1.attachInterrupt(scan);
  Timer1.pwm(9, 20);
}

void loop() {

  //  coba2(); display.clear();
  TulisanRR();   display.clear();
  //  ComingSoon();     display.clear();
  //  TulisanJoin(); display.clear();
  Instagram(); display.clear();
  KRI(); display.clear();
  Melangkah();    display.clear();
  animationKRI();    display.clear();
  coba(); display.clear();
  // training(); display.clear();
  // pendaftaran(); display.clear();
  // secreinig(); display.clear();
  // pengumuman(); display.clear();
  // pelaksanaan(); display.clear();
  gabung(); display.clear();
}
void ComingSoon()
{
  for (a = 0; a < 3; a++)
  {
    static const uint8_t bricks[] PROGMEM = {
      32, 16,
      B00000001,  B11110000,  B00001110,  B00000000,
      B00000001,  B10010000,  B00011110,  B00000000,
      B00000000,  B11101111,  B11110010,  B00000000,
      B00000000,  B10000000,  B00001100,  B00000000,
      B00000000,  B10011000,  B00001100,  B00000000,
      B00111100,  B10111100,  B10101100,  B00000000,
      B00111100,  B10000000,  B01001100,  B11111000,
      B00111100,  B10111100,  B10101100,  B11111000,
      B00111110,  B10011000,  B00001100,  B11011000,
      B00001111,  B10000000,  B00011001,  B00111000,
      B00001100,  B00111111,  B11100110,  B01100000,
      B00001100,  B00000000,  B00000000,  B11000000,
      B00001100,  B10000111,  B11000001,  B10000000,
      B00011110,  B10001100,  B11100111,  B11000000,
      B01111110,  B10011000,  B01100100,  B11100000,
      B11111110,  B10010000,  B01100100,  B01110000
    };
    static const char message[] = "COMING SOON OPREC ROBOT RESEARCH UMS";
    int width = display.width();
    display.setFont(Arial_Black_16_ISO_8859_1);
    display.textWidth(message);
    for (int x = 0; x < 450; ++x) {
      display.clear();
      display.drawText(width - x + 50, 1, message);
      display.drawBitmap(width - x, 0, bricks);
      delay(20);
    }
  }
}
void Melangkah()
{
  static const uint8_t ani1[] PROGMEM = {
    32, 16,
    B00000001,  B11110000,  B00001110,  B00000000,
    B00000001,  B10010000,  B00011110,  B00000000,
    B00000000,  B11101111,  B11110010,  B00000000,
    B00000000,  B10000000,  B00001100,  B00000000,
    B00000000,  B10011000,  B00001100,  B01110000,
    B00000000,  B10111100,  B10101100,  B11011000,
    B00000000,  B10000000,  B01001100,  B11011000,
    B00111100,  B10111100,  B10101100,  B10001000,
    B00111110,  B10011000,  B00001100,  B11011000,
    B00001111,  B10000000,  B00011001,  B00010000,
    B00001100,  B00111111,  B11100110,  B00100000,
    B00001100,  B00000000,  B00000000,  B01000000,
    B00001100,  B10000111,  B11000000,  B10000000,
    B00011110,  B10001100,  B11100000,  B0000000,
    B01111110,  B10011000,  B01100010,  B00000000,
    B11111110,  B10010000,  B01100110,  B00000000
  };

  static const uint8_t ani2[] PROGMEM = {
    32, 16,
    B00000001,  B11110000,  B00001110,  B00000000,
    B00000001,  B10010000,  B00011110,  B00000000,
    B00000000,  B11101111,  B11110010,  B00000000,
    B00000000,  B10000000,  B00001100,  B00000000,
    B00000000,  B10000000,  B00001100,  B00000000,
    B00000000,  B10011000,  B10101100,  B00111110,
    B00000000,  B10111100,  B01001100,  B00111011,
    B00111100,  B10011000,  B10101100,  B00111011,
    B00111110,  B10000000,  B00001100,  B00111111,
    B00001111,  B10000000,  B00011000,  B01001110,
    B00001100,  B00111111,  B11100111,  B10010000,
    B00001100,  B00000000,  B00000000,  B00100000,
    B00001100,  B10000111,  B11000000,  B01000000,
    B00011110,  B10001100,  B11100000,  B10000000,
    B01111110,  B10011000,  B01100001,  B00000000,
    B11111110,  B10010000,  B01100110,  B00000000
  };


  for (int x = 0; x < 70; x++)
  {
    display.setFont(Mono5x7);
    display.drawText(45, 0, "MELANGKAH BERSAMA");
    display.drawText(34, 9, "JUARA 1 SE-INDONESIA");
    display.fill(0, 0, 32, display.height(), ani1);
    display.fill(160, 0, 32, display.height(), ani1);
    delay(20);
    display.fill(0, 0, 32, display.height(), ani2);
    display.fill(160, 0, 32, display.height(), ani2);
    delay(20);
  }
  //  for (int x = 0; x < 250; x = x + 15) {
  //    int width = display.width();
  //    display.drawBitmap(width - x, 0, ani1);
  //    delay(100);
  //    display.drawBitmap(width - x, 0, ani2);
  //    delay(100);
  //    display.clear();
  //    display.drawBitmap(width - x, 3, ani1);
  //    delay(100);
  //    display.drawBitmap(width - x, 3, ani2);
  //    delay(100);
  //    display.clear();
  //  }
}
void TulisanRR()
{
  for (a = 0; a < 1; a++ )
  {
    display.clear();
    delay(1000);
    display.setFont(Arial_Black_16_ISO_8859_1);
    display.drawText(13, 0, "ROBOT RESEARCH UMS");
    delay(1500);
  }
  for (a = 192; a > 0; a = a - 2)
  {
    display.drawLine(a + 192, 0, a + 182, 0); display.drawLine(a + 177, 0, a + 168, 0); display.drawLine(a + 163, 0, a + 154, 0); display.drawLine(a + 149, 0, a + 140, 0); display.drawLine(a + 135, 0, a + 126, 0); display.drawLine(a + 121, 0, a + 112, 0); display.drawLine(a + 107, 0, a + 98, 0); display.drawLine(a + 93, 0, a + 84, 0); display.drawLine(a + 79, 0, a + 70, 0); display.drawLine(a + 65, 0, a + 56, 0); display.drawLine(a + 49, 0, a + 42, 0); display.drawLine(a + 35, 0, a + 28, 0); display.drawLine(a + 21, 0, a + 14, 0); display.drawLine(a + 7, 0, a, 0);
    delay(10);
    display.drawLine(10 - a, 15, 0 - a, 15); display.drawLine(24 - a, 15, 17 - a, 15); display.drawLine(38 - a, 15, 31 - a, 15); display.drawLine(52 - a, 15, 45 - a, 15); display.drawLine(66 - a, 15, 59 - a, 15); display.drawLine(80 - a, 15, 73 - a, 15); display.drawLine(94 - a, 15, 87 - a, 15); display.drawLine(108 - a, 15, 101 - a, 15); display.drawLine(122 - a, 15, 115 - a, 15); display.drawLine(136 - a, 15, 129 - a, 15); display.drawLine(150 - a, 15, 143 - a, 15); display.drawLine(164 - a, 15, 157 - a, 15); display.drawLine(178 - a, 15, 171 - a, 15); display.drawLine(192 - a, 15, 185 - a, 15);
    delay(10);
  }

}

void KRI()
{
  for (a = 0; a < 250; a++)
  {
    display.clear();
    display.setFont(Arial_Black_16_ISO_8859_1);
    display.drawText(25, 0, "GOES TO KRI 2026");
    display.drawLine(207 - a, 0, 200 - a, 0); display.drawLine(192 - a, 0, 182 - a, 0); display.drawLine(177 - a, 0, 168 - a, 0); display.drawLine(163 - a, 0, 154 - a, 0); display.drawLine(149 - a, 0, 140 - a, 0); display.drawLine(135 - a, 0, 126 - a, 0); display.drawLine(121 - a, 0, 112 - a, 0); display.drawLine(107 - a, 0, 98 - a, 0); display.drawLine(93 - a, 0, 84 - a, 0); display.drawLine(79 - a, 0, 70 - a, 0); display.drawLine(65 - a, 0, 56 - a, 0); display.drawLine(49 - a, 0, 42 - a, 0); display.drawLine(35 - a, 0, 28 - a, 0); display.drawLine(21 - a, 0, 14 - a, 0); display.drawLine(7 - a, 0, 0 - a, 0);
    display.drawLine(-5 + a, 15, -12 + a, 15); display.drawLine(10 + a, 15, 0 + a, 15); display.drawLine(24 + a, 15, 17 + a, 15); display.drawLine(38 + a, 15, 31 + a, 15); display.drawLine(52 + a, 15, 45 + a, 15); display.drawLine(66 + a, 15, 59 + a, 15); display.drawLine(80 + a, 15, 73 + a, 15); display.drawLine(94 + a, 15, 87 + a, 15); display.drawLine(108 + a, 15, 101 + a, 15); display.drawLine(122 + a, 15, 115 + a, 15); display.drawLine(136 + a, 15, 129 + a, 15); display.drawLine(150 + a, 15, 143 + a, 15); display.drawLine(164 + a, 15, 157 + a, 15); display.drawLine(178 + a, 15, 171 + a, 15); display.drawLine(192 + a, 15, 185 + a, 15);
    delay(10);
    display.drawLine(207 - a, 15, 200 - a, 15); display.drawLine(192 - a, 15, 182 - a, 15); display.drawLine(177 - a, 15, 168 - a, 15); display.drawLine(163 - a, 15, 154 - a, 15); display.drawLine(149 - a, 15, 140 - a, 15); display.drawLine(135 - a, 15, 126 - a, 15); display.drawLine(121 - a, 15, 112 - a, 15); display.drawLine(107 - a, 15, 98 - a, 15); display.drawLine(93 - a, 15, 84 - a, 15); display.drawLine(79 - a, 15, 70 - a, 15); display.drawLine(65 - a, 15, 56 - a, 15); display.drawLine(49 - a, 15, 42 - a, 15); display.drawLine(35 - a, 15, 28 - a, 15); display.drawLine(21 - a, 15, 14 - a, 15); display.drawLine(7 - a, 15, 0 - a, 15);
    display.drawLine(-5 + a, 0, -12 + a, 0); display.drawLine(10 + a, 0, 0 + a, 0); display.drawLine(24 + a, 0, 17 + a, 0); display.drawLine(38 + a, 0, 31 + a, 0); display.drawLine(52 + a, 0, 45 + a, 0); display.drawLine(66 + a, 0, 59 + a, 0); display.drawLine(80 + a, 0, 73 + a, 0); display.drawLine(94 + a, 0, 87 + a, 0); display.drawLine(108 + a, 0, 101 + a, 0); display.drawLine(122 + a, 0, 115 + a, 0); display.drawLine(136 + a, 0, 129 + a, 0); display.drawLine(150 + a, 0, 143 + a, 0); display.drawLine(164 + a, 0, 157 + a, 0); display.drawLine(178 + a, 0, 171 + a, 0); display.drawLine(192 + a, 0, 185 + a, 0);
    delay(10);
  }
  for (a = 0; a < 1; a++)
  {
    display.drawText(25, 0, "GOES TO KRI 2026");
    delay(1000);
    display.clear();
    delay(500);
  }
  display.drawText(25, 0, "GOES TO KRI 2025");
  delay(2000);
  display.drawText(-2, 0, "KONTES ROBOT INDONESIA");
  delay(3000);

}

void animationKRI()
{
  for (a = 0; a < 1; a++)
  {
    static const uint8_t krsti1[] PROGMEM = {
      32, 16,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B01000101,  B00100100,  B00000000,
      B11100000,  B00101111,  B11101000,  B00001111,
      B11010000,  B10010000,  B00010010,  B00010011,

      B01001000,  B01100000,  B00001100,  B00100100,
      B01100100,  B00100011,  B10001000,  B01001100,
      B01011100,  B00100100,  B01001000,  B01110100,
      B01010100,  B00011111,  B11110000,  B01010100,

      B01011110,  B00001111,  B11100000,  B11110100,
      B01010011,  B00001000,  B00100001,  B10010100,
      B01001001,  B00000100,  B01000001,  B00100100,
      B00000101,  B10000011,  B10000011,  B01000000,

      B00000011,  B10000010,  B10000011,  B10000000,
      B00000001,  B11001111,  B11100111,  B00000000,
      B00000001,  B11111000,  B00111111,  B00000000,
      B00000001,  B01110011,  B10011101,  B00000000
    };
    static const uint8_t krsti2[] PROGMEM = {
      32, 16,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B01000101,  B00100100,  B00000000,
      B11100000,  B00101111,  B11101000,  B00001111,
      B11010000,  B10010000,  B00010010,  B00010011,

      B01001000,  B01100000,  B00001100,  B00100100,
      B00100100,  B00100011,  B10001000,  B01001000,
      B00011100,  B00100100,  B01001000,  B01110000,
      B00010100,  B00011000,  B00110000,  B01010000,

      B00011110,  B00001000,  B00100000,  B11110000,
      B00010010,  B00001000,  B00100000,  B10010000,
      B00001001,  B00000100,  B01000001,  B00100000,
      B00000100,  B10000011,  B10000010,  B01000000,

      B00000011,  B10000010,  B10000010,  B10000000,
      B00000001,  B11001111,  B11100111,  B00000000,
      B00000000,  B11111000,  B00111110,  B00000000,
      B00000000,  B01110011,  B10011100,  B00000000
    };
    static const uint8_t krtmi1[] PROGMEM = {
      32, 16,
      B00000000,  B00000000,  B00000000,  B00000000,
      B11100000,  B00000000,  B00000000,  B00000000,
      B11110000,  B00111111,  B11111000,  B00000000,
      B11111000,  B00111111,  B11111000,  B00000000,
      B00111111,  B11111111,  B11111111,  B10000000,
      B00111111,  B11111111,  B11111111,  B10000000,
      B00111000,  B00110000,  B00110000,  B00000000,
      B00110011,  B10011111,  B11100111,  B00000000,
      B01100111,  B11001111,  B11001111,  B10000000,
      B11001100,  B01101111,  B10011000,  B11000000,
      B00011010,  B10110111,  B10110101,  B01100000,
      B00011001,  B00110111,  B10110010,  B01100000,
      B00011010,  B10110111,  B10110101,  B01100000,
      B00001100,  B00110000,  B00011000,  B11000000,
      B00000111,  B11000000,  B00001111,  B10000000,
      B00000011,  B10000000,  B00000111,  B00000000
    };
    static const uint8_t krtmi2[] PROGMEM = {
      32, 16,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00111111,  B11111000,  B00000000,
      B11111000,  B00111111,  B11111000,  B00000000,
      B11111111,  B11111111,  B11111111,  B10000000,
      B11111111,  B11111111,  B11111111,  B10000000,
      B11111000,  B00110000,  B00110000,  B00000000,
      B00000011,  B10011111,  B11100111,  B00000000,
      B00000111,  B11001111,  B11001111,  B10000000,
      B00001100,  B01101111,  B10011000,  B11000000,
      B00011001,  B00110111,  B10110010,  B01100000,
      B00011011,  B10110111,  B10110111,  B01100000,
      B00011001,  B00110111,  B10110010,  B01100000,
      B00001100,  B00110000,  B00011000,  B11000000,
      B00000111,  B11000000,  B00001111,  B10000000,
      B00000011,  B10000000,  B00000111,  B00000000
    };
    static const uint8_t megalodon1[] PROGMEM = {
      32, 16,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000111, B10000000,  B00000000,
      B00000000,  B00000111,  B10000000,  B00000000,
      B00000000,  B00000011,  B10000000,  B00000000,
      B00000001,  B11111111,  B11111111,  B10000000,
      B00000011,  B11111111,  B11111111,  B11000000,
      B00000111,  B11111111,  B11111111,  B11000000,
      B00001111,  B11111111,  B11111111,  B11000000,
      B00001100,  B00000000,  B00000000,  B11000000,
      B00001100,  B00000000,  B00000000,  B11000000,
      B00001001,  B11000111,  B00011100,  B11000000,
      B00000111,  B11000111,  B00011100,  B11000000,
      B00000011,  B11111111,  B11111111,  B10000000,
      B00000001,  B11000111,  B00011100,  B00000000,
      B00000001,  B11000111,  B00011100,  B00000000
    };
    static const uint8_t megalodon2[] PROGMEM = {
      32, 16,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000111,  B10000000,  B00000000,
      B00000000,  B00000111,  B10000000,  B00000000,
      B00000000,  B00000011,  B10000000,  B00000000,
      B00000001,  B11111111,  B11111111,  B10000000,
      B00000011,  B11111111,  B11111111,  B11000000,
      B00000111,  B11111111,  B11111111,  B11000000,
      B00001111,  B11111111,  B11111111,  B11000000,
      B00001100,  B00000000,  B00000000,  B11000000,
      B00001100,  B00000000,  B00000000,  B11000000,
      B00001000,  B01110001,  B11000111,  B11000000,
      B00000110,  B01110001,  B11000111,  B11000000,
      B00000011,  B11111111,  B11111111,  B10000000,
      B00000000,  B01110001,  B11000111,  B00000000,
      B00000000,  B01110001,  B11000111,  B00000000
    };
    static const uint8_t LF1[] PROGMEM = {
      32, 16,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000000,  B00000000,  B00001110,
      B00000000,  B00000000,  B00000000,  B11111110,
      B00000000,  B00000000,  B00000000,  B11111110,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000000,  B00000000,  B01110000,
      B00000000,  B00000000,  B00000111,  B11111000,
      B00000000,  B00000000,  B00111001,  B10001100,
      B00000001,  B10000000,  B11100011,  B00100110,
      B00000011,  B10000001,  B11000011,  B01110110,
      B00000111,  B11111111,  B10000011,  B00100110,
      B00001111,  B11111111,  B11110001,  B10001100,
      B00000110,  B00000000,  B00000000,  B11111000
    };
    static const uint8_t LF2[] PROGMEM = {
      32, 16,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000000,  B00000000,  B00001110,
      B00000000,  B00000000,  B00000000,  B11111110,
      B00000000,  B00000000,  B00000000,  B11111110,
      B00000000,  B00000000,  B00000000,  B00000000,
      B00000000,  B00000000,  B00000000,  B01110000,
      B00000000,  B00000000,  B00000111,  B11111000,
      B00000000,  B00000000,  B00111001,  B10001100,
      B00000001,  B10000000,  B11100011,  B01010110,
      B00000011,  B10000001,  B11000011,  B00100110,
      B00000111,  B11111111,  B10000011,  B01010110,
      B00001111,  B11111111,  B11110001,  B10001100,
      B00000110,  B00000000,  B00000000,  B11111000
    };
    static const uint8_t ani1[] PROGMEM = {
      32, 16,
      B00000001,  B11110000,  B00001110,  B00000000,
      B00000001,  B10010000,  B00011110,  B00000000,
      B00000000,  B11101111,  B11110010,  B00000000,
      B00000000,  B10000000,  B00001100,  B00000000,
      B00000000,  B10011000,  B00001100,  B01110000,
      B00000000,  B10111100,  B10101100,  B11011000,
      B00000000,  B10000000,  B01001100,  B11011000,
      B00111100,  B10111100,  B10101100,  B10001000,
      B00111110,  B10011000,  B00001100,  B11011000,
      B00001111,  B10000000,  B00011001,  B00010000,
      B00001100,  B00111111,  B11100110,  B00100000,
      B00001100,  B00000000,  B00000000,  B01000000,
      B00001100,  B10000111,  B11000000,  B10000000,
      B00011110,  B10001100,  B11100000,  B0000000,
      B01111110,  B10011000,  B01100010,  B00000000,
      B11111110,  B10010000,  B01100110,  B00000000
    };

    static const uint8_t ani2[] PROGMEM = {
      32, 16,
      B00000001,  B11110000,  B00001110,  B00000000,
      B00000001,  B10010000,  B00011110,  B00000000,
      B00000000,  B11101111,  B11110010,  B00000000,
      B00000000,  B10000000,  B00001100,  B00000000,
      B00000000,  B10000000,  B00001100,  B00000000,
      B00000000,  B10011000,  B10101100,  B00111110,
      B00000000,  B10111100,  B01001100,  B00111011,
      B00111100,  B10011000,  B10101100,  B00111011,
      B00111110,  B10000000,  B00001100,  B00111111,
      B00001111,  B10000000,  B00011000,  B01001110,
      B00001100,  B00111111,  B11100111,  B10010000,
      B00001100,  B00000000,  B00000000,  B00100000,
      B00001100,  B10000111,  B11000000,  B01000000,
      B00011110,  B10001100,  B11100000,  B10000000,
      B01111110,  B10011000,  B01100001,  B00000000,
      B11111110,  B10010000,  B01100110,  B00000000
    };
    {
      static const uint8_t krsbi1[] PROGMEM = {
        32, 16,
        B00000000,  B00000000,  B00000000,  B00000000,
        B00000000,  B00000111,  B11110000,  B00000000,
        B00000000,  B00001111,  B11111000,  B00000000,
        B00000000,  B00011000,  B00011000,  B00000000,

        B00000000,  B00111000,  B00011000,  B00000000,
        B00000000,  B01110000,  B00011000,  B00000000,
        B00000000,  B01110000,  B00011000,  B00000000,
        B00000000,  B11100000,  B00011000,  B00000000,

        B00000000,  B11000000,  B00011000,  B00000000,
        B00000000,  B11000011,  B10011000,  B00000000,
        B00011000,  B11000101,  B01001000,  B00000000,
        B00111100,  B11001001,  B00101100,  B00000000,

        B00111101,  B11001111,  B11101100,  B00000000,
        B00011001,  B11001001,  B00101100,  B00000000,
        B00000111,  B10000101,  B01000000,  B00000000,
        B00000000,  B00000011,  B10000000,  B00000000
      };
      static const uint8_t krsbi2[] PROGMEM = {
        32, 16,
        B00000000,  B00000000,  B00000000,  B00000000,
        B00000000,  B00000111,  B11110000,  B00000000,
        B00000000,  B00001111,  B11111000,  B00000000,
        B00000000,  B00011000,  B00011000,  B00000000,

        B00000000,  B00111000,  B00011000,  B00000000,
        B00000000,  B01110000,  B00011000,  B00000000,
        B00000000,  B01110000,  B00011000,  B00000000,
        B00000000,  B11100000,  B00011000,  B00000000,

        B00000000,  B11000000,  B00011000,  B00000000,
        B00000000,  B11000011,  B10011000,  B00000000,
        B01100000,  B11000100,  B01001000,  B00000000,
        B11110000,  B11001010,  B10101100,  B00000000,

        B11110001,  B11001001,  B00101100,  B00000000,
        B01100001,  B11001010,  B10101100,  B00000000,
        B00000111,  B10000100,  B01000000,  B00000000,
        B00000000,  B00000011,  B10000000,  B00000000
      };
      static const uint8_t arm1[] PROGMEM = {
        32, 16,
        B00000000,  B00000000,  B00000000,  B00000000,
        B00000000,  B00000000,  B00000000,  B00000000,
        B00000000,  B00000000,  B01000000,  B00000000,
        B00000000,  B00000000,  B11100000,  B00000000,

        B00000000,  B00000001,  B11110000,  B00000000,
        B00000000,  B11100011,  B10111000,  B00000000,
        B00000001,  B11110111,  B00011100,  B00000000,
        B00000000,  B00011110,  B00001110,  B00000000,

        B00000000,  B00001100,  B00000111,  B00000000,
        B00000000,  B00011000,  B00000011,  B10000000,
        B00000001,  B11110000,  B00000001,  B11000000,
        B00000000,  B11100000,  B00000001,  B11000000,

        B00000000,  B00000000,  B00000001,  B11000000,
        B00000000,  B00000000,  B00011111,  B11111100,
        B00000000,  B00000000,  B00111111,  B11111110,
        B00000000,  B00000000,  B01111111,  B11111111
      };
      static const uint8_t arm2[] PROGMEM = {
        32, 16,
        B00000000,  B00000000,  B00000000,  B00000000,
        B00000000,  B00000000,  B00000000,  B00000000,
        B00000000,  B00000000,  B01000000,  B00000000,
        B00000000,  B00000000,  B11100000,  B00000000,

        B00000000,  B00000001,  B11110000,  B00000000,
        B00000000,  B00000011,  B10111000,  B00000000,
        B00000000,  B11100111,  B00011100,  B00000000,
        B00000001,  B11111110,  B00001110,  B00000000,

        B00000001,  B11111100,  B00000111,  B00000000,
        B00000001,  B11111000,  B00000011,  B10000000,
        B00000000,  B11100000,  B00000001,  B11000000,
        B00000000,  B00000000,  B00000001,  B11000000,

        B00000000,  B00000000,  B00000001,  B11000000,
        B00000000,  B00000000,  B00011111,  B11111100,
        B00000000,  B00000000,  B00111111,  B11111110,
        B00000000,  B00000000,  B01111111,  B11111111
      };
      int width = display.width();
      for (int x = 0; x < 550; x = x + 3) {
        display.clear();
        display.drawBitmap(width - x, 0, ani1);
        display.drawBitmap(width - x + 74, 0, LF1);
        display.drawBitmap(width - x + 126, 0, megalodon1);
        display.drawBitmap(width - x + 168, 0, krsti1);
        display.drawBitmap(width - x + 215, 0, krtmi1);
        display.drawBitmap(width - x + 255, 0, krsbi1);
        display.drawBitmap(width - x + 287, 0, arm1);
        delay(100);
        display.clear();
        display.drawBitmap(width - x, 0, ani2);
        display.drawBitmap(width - x + 74, 0, LF2);
        display.drawBitmap(width - x + 126, 0, megalodon2);
        display.drawBitmap(width - x + 168, 0, krsti2);
        display.drawBitmap(width - x + 215, 0, krtmi2);
        display.drawBitmap(width - x + 255, 0, krsbi2);
        display.drawBitmap(width - x + 287, 0, arm2);
        delay(100);
      }
    }
  }
}
void coba()
{
  for (a = 0; a < 1; a++)
  {
    static const uint8_t bricks[] PROGMEM = {
      32, 16,
      B00000001,  B11110000,  B00001110,  B00000000,
      B00000001,  B10010000,  B00011110,  B00000000,
      B00000000,  B11101111,  B11110010,  B00000000,
      B00000000,  B10000000,  B00001100,  B00000000,
      B00000000,  B10011000,  B00001100,  B00000000,
      B00111100,  B10111100,  B10101100,  B00000000,
      B00111100,  B10000000,  B01001100,  B11111000,
      B00111100,  B10111100,  B10101100,  B11111000,
      B00111110,  B10011000,  B00001100,  B11011000,
      B00001111,  B10000000,  B00011001,  B00111000,
      B00001100,  B00111111,  B11100110,  B01100000,
      B00001100,  B00000000,  B00000000,  B11000000,
      B00001100,  B10000111,  B11000001,  B10000000,
      B00011110,  B10001100,  B11100111,  B11000000,
      B01111110,  B10011000,  B01100100,  B11100000,
      B11111110,  B10010000,  B01100100,  B01110000
    };
    static const char baru[] = " MEGALODON X EL GANADOR X ADISHA X ABU HERO   ";
    int width = display.width();
    display.setFont(Arial_Black_16_ISO_8859_1);
    display.textWidth(baru);
    for (int x = 0; x < 550; x++) {//450
      display.clear();
      display.drawText(width - x + 50, 1, baru);//50
      //      display.drawBitmap(width - x + 0, 0, bricks);
      delay(20);
    }
  }
  display.clear();
  delay(1000);
  display.setFont(Arial_Black_16_ISO_8859_1);
  display.drawText(18, 2, "JUUUAAARRRAAA !!!!");
  delay(5000);
}
void gabung() {
  for (a = 0; a < 1; a++)
  {
    static const char baru[] = " KRSRI = MEGALODON UMS X KRTMI = RR EL GANADOR X KRSTI = ADISHA UMS X KRAI = ABU HERO ";
    int width = display.width();
    display.setFont(Arial_Black_16_ISO_8859_1);
    display.textWidth(baru);
    for (int x = 0; x < 830; x++) {//450
      display.clear();
      display.drawText(width - x + 50, 0, baru);//50
      delay(20);
    }
  }
  display.clear();
  delay(1000);
  display.setFont(Arial_Black_16_ISO_8859_1);
  display.drawText(18, 0, "JUUUAAARRRAAA !!!!");
  delay(5000);
}
void training() {
  for (a = 0; a < 1; a++)
  {
    static const char TRAINING[] = " LET'S JOIN US OPEN TRAINING TIM KRI UMS 2024 / 2025 ";
    int width = display.width();
    display.setFont(Arial_Black_16_ISO_8859_1);
    display.textWidth(TRAINING);
    for (int x = 0; x < 500; x++) {//450
      display.clear();
      display.drawText(width - x + 50, 0, TRAINING);//50
      delay(20);
    }
  }
  display.clear();
}
void pendaftaran() {
  for (a = 0; a < 1; a++)
  {
    static const char pendaf[] = " PENDAFTARAN 26 AGUSTUS - 13 SEPTEMBER 2024 ";
    int width = display.width();
    display.setFont(Arial_Black_16_ISO_8859_1);
    display.textWidth(pendaf);
    for (int x = 0; x < 450; x++) {//450
      display.clear();
      display.drawText(width - x + 50, 0, pendaf);//50
      delay(20);
    }
  }
  display.clear();
}
void secreinig() {
  for (a = 0; a < 1; a++)
  {
    static const char sec[] = " SECREINING 14 SEPTEMBER - 15 SEPTEMBER 2024 ";
    int width = display.width();
    display.setFont(Arial_Black_16_ISO_8859_1);
    display.textWidth(sec);
    for (int x = 0; x < 450; x++) {//450
      display.clear();
      display.drawText(width - x + 50, 0, sec);//50
      delay(20);
    }
  }
  display.clear();
}
void pengumuman() {
  for (a = 0; a < 1; a++)
  {
    static const char PENGU[] = " PENGUMUMAN 16 SEPTEMBER 2024 ";
    int width = display.width();
    display.setFont(Arial_Black_16_ISO_8859_1);
    display.textWidth(PENGU);
    for (int x = 0; x < 380; x++) {//450
      display.clear();
      display.drawText(width - x + 50, 0, PENGU);//50
      delay(20);
    }
  }
  display.clear();
}
void pelaksanaan() {
  for (a = 0; a < 1; a++)
  {
    static const char pelak[] = " TRAINING 16 SEPTEMBER - 23 OKTOBER 2024 ";
    int width = display.width();
    display.setFont(Arial_Black_16_ISO_8859_1);
    display.textWidth(pelak);
    for (int x = 0; x < 450; x++) {//450
      display.clear();
      display.drawText(width - x + 50, 0, pelak);//50
      delay(20);
    }
  }
  display.clear();
}
void coba2()
{
  for (a = 0; a < 192; a++)
  {
    display.drawLine(a, 0, 5, 50);
    display.drawLine(-a, 0, -5, -50);
    //  display.drawLine(a,1,0,0);
    //  display.drawLine(a,2,0,0);
    //  delay(10);
    //  display.drawLine(3,0,0,a);
    //  display.drawLine(192,0,0+a,50);
    delay(10);
  }
}


void Instagram()
{
  for (a = 0; a < 1; a++)
  {
    static const uint8_t bricks[] PROGMEM = {
      32, 16,
      B00000001,  B11110000,  B00001110,  B00000000,
      B00000001,  B10010000,  B00011110,  B00000000,
      B00000000,  B11101111,  B11110010,  B00000000,
      B00000000,  B10000000,  B00001100,  B00000000,
      B00000000,  B10011000,  B00001100,  B00000000,
      B00111100,  B10111100,  B10101100,  B00000000,
      B00111100,  B10000000,  B01001100,  B11111000,
      B00111100,  B10111100,  B10101100,  B11111000,
      B00111110,  B10011000,  B00001100,  B11011000,
      B00001111,  B10000000,  B00011001,  B00111000,
      B00001100,  B00111111,  B11100110,  B01100000,
      B00001100,  B00000000,  B00000000,  B11000000,
      B00001100,  B10000111,  B11000001,  B10000000,
      B00011110,  B10001100,  B11100111,  B11000000,
      B01111110,  B10011000,  B01100100,  B11100000,
      B11111110,  B10010000,  B01100100,  B01110000
    };
    static const char message[] = "FOLLOW OUR INSTAGRAM @ROBOTRESERCH_UMS";
    int width = display.width();
    display.setFont(Arial_Black_16_ISO_8859_1);
    display.textWidth(message);
    for (int x = 0; x < 450; ++x) {
      display.clear();
      display.drawText(width - x + 50, 1, message);
      //display.drawBitmap(width - x, 0, bricks);
      delay(20);
    }
  }
}
void TulisanJoin()
{
  for (a = 0; a < 2; a++ )
  {
    display.clear();
    delay(1000);
    display.setFont(Arial_Black_16_ISO_8859_1);
    display.drawText(45, 0, "LET'S JOIN US");
    delay(1000);
  }
  for (a = 192; a > 0; a = a - 2)
  {
    display.drawLine(a + 192, 0, a + 182, 0); display.drawLine(a + 177, 0, a + 168, 0); display.drawLine(a + 163, 0, a + 154, 0); display.drawLine(a + 149, 0, a + 140, 0); display.drawLine(a + 135, 0, a + 126, 0); display.drawLine(a + 121, 0, a + 112, 0); display.drawLine(a + 107, 0, a + 98, 0); display.drawLine(a + 93, 0, a + 84, 0); display.drawLine(a + 79, 0, a + 70, 0); display.drawLine(a + 65, 0, a + 56, 0); display.drawLine(a + 49, 0, a + 42, 0); display.drawLine(a + 35, 0, a + 28, 0); display.drawLine(a + 21, 0, a + 14, 0); display.drawLine(a + 7, 0, a, 0);
    delay(10);
    display.drawLine(10 - a, 15, 0 - a, 15); display.drawLine(24 - a, 15, 17 - a, 15); display.drawLine(38 - a, 15, 31 - a, 15); display.drawLine(52 - a, 15, 45 - a, 15); display.drawLine(66 - a, 15, 59 - a, 15); display.drawLine(80 - a, 15, 73 - a, 15); display.drawLine(94 - a, 15, 87 - a, 15); display.drawLine(108 - a, 15, 101 - a, 15); display.drawLine(122 - a, 15, 115 - a, 15); display.drawLine(136 - a, 15, 129 - a, 15); display.drawLine(150 - a, 15, 143 - a, 15); display.drawLine(164 - a, 15, 157 - a, 15); display.drawLine(178 - a, 15, 171 - a, 15); display.drawLine(192 - a, 15, 185 - a, 15);
    delay(10);
  }
}
