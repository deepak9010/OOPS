// A class that contains a pure virtual function is known as an abstract class. In the below example, the class Shape is an abstract class.
// We cannot create objects of an abstract class. However, we can derive classes from them, and use their data members and member functions (except pure virtual functions).

// here we see that shape(base class) have don't  have any implementtation of calculation, its completion is in dervied classess, so here we can see  abstraction in base class 

#include <iostream>
using namespace std;

// Abstract class
class Shape {
   protected:
    float dimension=10;

   public:
    // void getDimension() {
    //     cin >> dimension;
    // }

    // pure virtual Function
    virtual float calculateArea() = 0;
};

// Derived class
class Square : public Shape {
   public:
    float calculateArea() {
        return dimension * dimension;
    }
};

// Derived class
class Circle : public Shape {
   public:
    float calculateArea() {
        return 3.14 * dimension * dimension;
    }
};

int main() {
    Square square;
    Circle circle;

    cout << "Enter the length of the square: ";
    // square.getDimension();
    cout << "Area of square: " << square.calculateArea() << endl;

    cout << "\nEnter radius of the circle: ";
    // circle.getDimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;

    return 0;
}