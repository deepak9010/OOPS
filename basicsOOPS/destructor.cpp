#include<iostream>
#include<cstring> 
using namespace std;

class Hero{

    private:
    int health;

    public:
    char *name;
    char level;
   

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

    // Destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

   
};

int main(){
   
//    static
  Hero a;

//   Dynamic
  Hero *b = new Hero();
  
  delete b;  /*manually destrucor call*/

  
}