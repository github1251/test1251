#include<iostream>
#include<cstring>
#include <stdio.h>

using namespace std;

class A
{
    public:
        A()
        {
            cout<<"constructor"<<endl;
        }
        ~A()
        {
            cout<<"destructor"<<endl;
        }

};


int main()
{
    A a;

    return 0;

}
