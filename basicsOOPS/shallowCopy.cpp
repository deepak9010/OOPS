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

   
};

int main(){
   
   Hero hero1;

   hero1.setHealth(12);
   hero1.setLevel('D');
   char name[7] = "Babbar";
   hero1.setName(name);

   hero1.print();

// use default copy constructor

Hero hero2(hero1);   /* or Hero hero2 = hero1*/
hero2.print();
 
hero1.name[0] = 'G';
hero1.print();

hero2.print();

// assignment operator
hero1 = hero2; 
hero1.print();
hero2.print();
}