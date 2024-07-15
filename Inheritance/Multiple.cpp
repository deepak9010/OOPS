// syntax

/*
 class parent_class1 { 
  //Body of parent class1 
  }; 
class parent_class2 {
   //Body of parent class2 
   };
 class child_class: access_modifier parent_class1, access_modifier parent_class2 {
   //Body of child class 
   };
   
*/

#include<iostream>
using namespace std;

class Animal{
  
  public:
  int weight;
  int age;

   void bark() {
        cout<<"barking "<<endl;
  }

};

class Human{
     public:
      string color;
    
    void speak(){
        cout<<"speaking "<<endl;
    }
};

// multiple inheritance
class sansaar: public Animal,public Human{

};


int main(){
      
     
    sansaar s1;
    s1.bark();
    s1.speak();
    
   
}
 