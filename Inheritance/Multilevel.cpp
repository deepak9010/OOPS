// syntax
/*
 
class parent_class { 
     //Body of parent class 
     }; 
class child_class: access_modifier parent_class { 
     //Body of child class 
     }; 
class child_class_of_child_class: access_modifier child_class { 
     //Body of class
     };

*/


#include<iostream>
using namespace std;

class Animal{
  
  public:
  int weight;
  int age;

  
   void speak() {
        cout<<"Speaking "<<endl;
  }

};

class Dog : public Animal{

};

class Germanshepherd: public Dog{

};


int main(){
      
     
     Germanshepherd g;
     g.speak();
   
}
