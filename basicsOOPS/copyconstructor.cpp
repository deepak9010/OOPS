#include<iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;
   

// default constructor
   Hero(){
    cout<<"constructor called"<<endl;
   }

//  Parameterized constructor
 Hero(int health){
       this->health =health;
       cout<<this->health<<endl;
 }

 Hero(int health, char level){
       this->health = health;
       this->level = level;
 }


// copy constructor
  Hero(Hero& temp){
    cout<<"Copy constructor called" << endl;
    this->health = temp.health;
    this->level =  temp.level;
  }

 void print(){ 
        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }


    //  void setHealth(int h){
    //     health=h;
    // }

    // void setLevel(char c){
    //     level =c;
    // }

    // int getHealth(){
    //     return health;
    // }

    // char getLevel(){
    //     return level;
    // }

   
};

int main(){
 
   Hero S(70, 'C');
   S.print();

// copy constructor
   Hero R(S);
   R.print();
}