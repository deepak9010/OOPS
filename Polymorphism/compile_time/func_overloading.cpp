#include<iostream>
using namespace std;

class A{

    public:
    void func(){
         cout<<"Hello"<<endl;
    }

    void func(string name){
        cout<<"deepak"<<endl;
        cout<<name<<endl;
    }

    // int func(string name){   /*here we can't function overload,for overloading we can only change in arguments*/
    //     cout<<"deepak"<<endl;
    // }
};

int main(){
    A obj;
    obj.func();
    obj.func("cndn");
}