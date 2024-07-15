 #include<iostream>
 using namespace std;

 class Rectangle{

    private:
    int length;
    int breadth;


    public:
    Rectangle(int length, int breadth){
       this->length = length;
       this->breadth = breadth;
 }

    int getArea() {
      return length * breadth;
    }

 };

 int main() {

     Rectangle rect(8, 6);

  // Call getArea() function
  cout << "Area = " << rect.getArea();

  return 0;
    
 }