#include <iostream>
#include <fstream>
#include <string>
#include <cstddef>

#include "../src/turtle.hpp"

using namespace std;

void rect(Turtle& t, float width, float height) {
  t.forward(width);
  t.right(90);
  t.forward(height);
  t.right(90);
  t.forward(width);
  t.right(90);
  t.forward(height);
  t.right(90);
}


void meetTurtle() {
  Turtle t;
  t.satinon(0.3);
  t.pendown();  
  rect(t, 20, 30);
  t.end();
  t.save("demo.dst");
}

void myFirstEmbroidery(){
  Turtle ted;
  ted.satinon(0.3);
  ted.setStepSize(2);
  ted.gotopoint(0, 20);
  ted.pendown();
  ted.displayMessage("Alejandra*Castaneda", 2, 5);
  ted.penup();
  ted.end();
  ted.save("myfirst.dst");
}

void mySecondEmbroidery(){
  Turtle tye;
  tye.satinon(0.3);
  tye.gotopoint(20, 20);
  tye.pendown();
  tye.spiral("left", 50);
  tye.penup();
  tye.end();
  tye.save("mysecond.dst");
}

int main() {
  myFirstEmbroidery();
  //mySecondEmbroidery();

  return 0;
}
