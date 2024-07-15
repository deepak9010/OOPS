// syntax
/*
class parent_class1 {
     //Body of parent class1 
     };
 class parent_class2 { 
    //Body of parent class1 
    };
 class child_class1: access_modifier parent_class1 { 
    //Body of child class1
     };
 class child_class2: access_modifier parent_class1, access_modifier parent_class2 { 
    //Body of child class2 
    };

    */



#include <iostream> 
using namespace std; 

// Parent class1 
class Vehicle { 
    public: 
    Vehicle() { 
      cout << "This is a Vehicle" << endl; 
      } 
      }; 

//Parent class2 
class Fare {
     public: 
     Fare() {
         cout << "Fare of Vehicle\n"; 
         } 
         };

 //Child class1
  class Car: public Vehicle { 

  }; 

  //Child class2
   class Bus: public Vehicle, public Fare { 

   }; 

   
   int main() {
    
     Bus obj2; 
     return 0; 
    }