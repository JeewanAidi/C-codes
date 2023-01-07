#include <iostream>
using namespace std;

class Animal {
  public:
    // Pure Virtual Function
    virtual void move() = 0;
};

class Lion: public Animal {
  public: 
    void move() {
      cout << "Lions walk in an unusual manner." << endl;
    }
};

class Wolf: public Animal {
  public: 
    void move() {
      cout << "Wolves can move for hours at a speed of 5-6 miles per hour." << endl;
    }
};

int main() {
  Lion l;
  Wolf w;

  l.move();
  w.move();
  return 0;
}
