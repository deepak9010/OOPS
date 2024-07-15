// synatax

/*
class parent_class {
   //Body of parent class 
   }; 
class child_class1: access_modifier parent_class { 
  //Body of child class1 
  };
class child_class2: access_modifier parent_class { 
  //Body of child class2 
  };
*/


#include<iostream>
using namespace std;

class A{
  
  public:

   void func1() {
        cout<<"base "<<endl;
  }

};

class B : public A{

     public:
      void func2() {
        cout<<"child1 "<<endl;
  }
};

class C : public A{

     public:
      void func3() {
        cout<<"child2 "<<endl;
  }
};


int main(){
      
     
   A obj1;
   obj1.func1();

   B obj2;
   obj2.func1();
   obj2.func2();
    
   C obj3;
   obj3.func1();
   obj3.func3();
    
}
 