// Static methods can not be overridden. They are stored in heap space of the memory


#include<iostream>
using namespace std;

class Hero {
    
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete; /*static keyword*/

    static int random() {   /*static function*/
        return timeToComplete ;
    }


};

int Hero::timeToComplete = 5;

int main() {

    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    // Hero a;

    // cout << a.timeToComplete << endl;

}

