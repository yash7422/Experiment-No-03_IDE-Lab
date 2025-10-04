#include <iostream>
using namespace std;

class Print {
  public:
    //Function with one int parameter
    void show(int i) {
      cout << "Integer: " << i << endl;
    }

    //Function with one float parameter
    void show(float  f) {
      cout << "Float: " << f << endl;
    }    

    //Function with two parameter
    void show(int i, float f) {
      cout << "Integer: " << i << " Float: " << f << endl;
    }
};

int main() {
  Print obj;
  obj.show(5);
  obj.show(3.14f);
  obj.show(7, 2.5);
  return 0;
}