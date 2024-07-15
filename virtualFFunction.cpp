// without virtual function

// #include <iostream>  
// using namespace std;  
// class A  
// {  
//    int x=5;  
//     public:  
//     void display()  
//     {  
//         std::cout << "Value of x is : " << x<<std::endl;  
//     }  
// };  
// class B: public A  
// {  
//     int y = 10;  
//     public:  
//     void display()  
//     {  
//         std::cout << "Value of y is : " <<y<< std::endl;  
//     }  
// };  
// int main()  
// {  
//     A *a;  
//     B b;  
//     a = &b;  
//    a->display();  
//     return 0;  
// }  

// In the above example, * a is the base class pointer. The pointer can only access the base class members but not the members of the derived class. Although C++ permits the base pointer to point to any object derived from the base class, it cannot directly access the members of the derived class. Therefore, there is a need for virtual function which allows the base pointer to access the members of the derived class.



// The Virtual function cannot be private, as the private functions cannot be overridden. It is used to achieve runtime polymorphism.
#include <iostream>  
using namespace std;  
class A  
{  
   int x=5;  
    public:  
    virtual void display()  
    {  
        std::cout << "Value of x is : " << x<<std::endl;  
    }  
};  
class B: public A  
{  
    int y = 10;  
    public:  
    void display()  
    {  
        cout << "Value of y is : " <<y<< std::endl;  
    }  
};  
int main()  
{  
    A *a;  
    B b;  
    a = &b;  
   a->display(); 
   b.display();
    return 0;  
}  


//                pure virtual function

// #include <iostream>  
// using namespace std;  
// class Base  
// {  
//     public:  
//     virtual void show() = 0;  
// };  
// class Derived : public Base  
// {  
//     public:  
//     void show()  
//     {  
//         std::cout << "Derived class is derived from the base class." << std::endl;  
//     }  
// };  
// int main()  
// {  
//     Base *bptr;  
//     //Base b;  
//     Derived d;  
//     bptr = &d;  
//     bptr->show();  
//     return 0;  
// }  