#include<iostream>
using namespace std;

class Human{
  
  public:
  int height;
  int weight;

  private:
  int age;

  int getAge(){
    return this->age;
  }
  
 

};

// class Male : public Human{

//     public:
//     string color;

//     void sleep(){ 
//         cout<<"Male Sleeping"<<endl;
//     }
// };

class Male : protected Human{

    public:
    string color;

    void sleep(){ 
        cout<<"Male Sleeping"<<endl;
    }
  
  int getheight(){
    return this->height;
  }

};

// class Male : private Human{

//     public:
//     string color;

//     void sleep(){ 
//         cout<<"Male Sleeping"<<endl;
//     }
  
//   int getheight(){
//     return this->height;
//   }

// };

 
int main(){

   Male m1;
   cout<<m1.getheight() <<endl;
 
}
