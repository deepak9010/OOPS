#include<iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    // void print(){
    //     cout<<level<<endl;
    // }


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
   
//    Hero ram;  /* static allocation*/

//    ram.setHealth(70);
//   cout<< ram.getHealth()<<endl;

//    ram.setLevel('A');
//    cout<< ram.getLevel()<<endl;


// ram.health = 70; we can't access private member directly,so we use getter setter
// ram.level ='B'; but we can access public member directly.

// cout<<ram.health;
// cout<<ram.level;


/*static and dynamic allocation*/

// static
Hero a;
a.setLevel('A');
a.setHealth(70);
cout<<"level is " << a.level<<endl;
cout<<"health is "<< a.getHealth()<<endl;

// dynamically

Hero *b = new Hero;
b->setLevel('B');
b->setHealth(80);
// cout<<"level is " <<(*b).level<<endl;
// cout<<"health is " <<(*b).getHealth()<<endl; 
// or
cout<<"level is " <<b->level<<endl;
cout<<"health is " <<b->getHealth()<<endl;
}