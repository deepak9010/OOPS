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
       cout<<this<<endl; /* this keyword store ramesh address*/
       this->health =health;
       cout<<this->health<<endl;
 }

 Hero(int health, char level){
       this->health = health;
       cout<<  this->health<<endl;
       this->level = level;
       cout<<  this->level;
 }

    void print(){ 
        cout<<level<<endl;
    }


     void setHealth(int h){
        health=h;
    }

    void setLevel(char c){
        level =c;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

   
};

int main(){

// Hero ram;
// cout<<"hello"<<endl; 

// Hero *mohan = new Hero(); /*dynamically*/

Hero ramesh(10);
cout<<"Address of ramesh "<< &ramesh<<endl;
// ramesh.getHealth();



Hero temp(22,'B');

}