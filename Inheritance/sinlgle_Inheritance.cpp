// synntax

/*
  class parent_class { 
    //Body of parent class 
    }; 
    
  class child_class: access_modifier parent_class { 
      //Body of child class 
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


int main(){
      
      Dog d;
      d.speak();
   
}
