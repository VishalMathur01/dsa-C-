#include<iostream>
using namespace std;

class A
{
    public:
    A()
{cout<<"c";}

~A()
{cout<<"d";}};

int main(void)
{
    A *a=new A[5];
    delete [] a;
     return 0;

}