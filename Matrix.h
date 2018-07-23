#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

class Matrix {
   protected:
   byte width;
   byte height;
   byte pin;
   
   
   public:
   Matrix(int awidth, int aheight, int apin);
   void initialize();
   void setColors(); 
};

Matrix::Matrix(int awidth, int aheight, int apin) {
  width = awidth;
  height = aheight;
  pin = apin;
}

void Matrix::initialize() {
  Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(width, height, pin,
  NEO_MATRIX_TOP    + NEO_MATRIX_LEFT+
  NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
  NEO_GRB            + NEO_KHZ800);
}
/*void Matrix::Colors {
    Matrix::Matrix matrix;
    uint16_t colors[] = {
    matrix.Color(255, 0, 0), matrix.Color(0, 255, 0), matrix.Color(255, 210, 0),matrix.Color(0, 0, 255), matrix.Color(255, 0, 255), matrix.Color(0, 255, 255), matrix.Color(255, 255, 255),matrix.Color(91, 68, 43),matrix.Color(0, 0, 0)}
}*/
