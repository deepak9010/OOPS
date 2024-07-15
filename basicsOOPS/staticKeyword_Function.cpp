#include<iostream>
#include<cstring> 
using namespace std;

class Hero{

    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;  /*static keyword*/
   

// default constructor
   Hero(){
    cout<<"constructor called"<<endl;
    name = new char[100];
   }

//  Parameterized constructor
 Hero(int health){
       this->health =health;
 }

 Hero(int health, char level){
       this->health = health;
       this->level = level;
 }


// copy constructor
  Hero(Hero& temp){
    char *ch = new char[strlen(temp.name) +1 ];
    strcpy(ch, temp.name);
    this->name = ch;

    // cout<<"Copy constructor called" << endl;
    this->health = temp.health;
    this->level =  temp.level;
  }

 void print(){ 
        cout<<endl;
        cout<< "Name: "<<this->name<<" ,";
        cout<< "health: " <<this->health<<" ,";
        cout<< "level: "<<this->level<<" , ";
        cout<<endl;
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

    void setName(char name[]){
        strcpy(this->name, name);
    }
   

//    static function
   static int random(){
    //   return health; /* here it doesnot access health bcz it is not a static member*/
     return timeToComplete; 
   }

    // Destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

   
};

// initialization
int Hero :: timeToComplete = 5;


int main(){

// cout<< Hero::timeToComplete <<endl;

// Hero a;   /* it also run by this method but is is not recommended bcz it does not belongss to object*/
// cout<< a.timeToComplete <<endl;
  
  cout<< Hero::timeToComplete <<endl;
  cout<< Hero::random()<<endl;
}