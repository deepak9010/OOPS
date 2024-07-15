#include<iostream>
using namespace std;

class A{

    public:
    void func(){
        cout<<"class A" <<endl;
    }
};

class B{

    public:
    void func(){
        cout<<"class B" <<endl;
    }
};

class C : public A, public B{
  
};

int main(){

    // C obj1;
    // obj1.func();  /*here func is ambigous we can't access ,*/

   /* so for solved this prbl we use scope resolution operator(::)*/

  C obj1;
  obj1.A::func();
  obj1.B::func();
  
}