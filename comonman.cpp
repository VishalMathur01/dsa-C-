#include<iostream>
using namespace std;

class eternity
{
    int a = 4;
    int lamar=0;
    public:
    void enter_value()
    {
        char characterio ;
     
       do
       {
            lamar = a+a;
            cout<<"do you want to go again: (y/n) "<<endl;
            cin>>characterio; 
            
       } while (characterio == 'y');
       
    }
    void display(void)
    {
        cout<<"The value of the input is: "<<a<<endl;
        cout<<"The value of lamar is: "<< lamar<<endl;
    }
};

int main()
{
    eternity love;
    love.enter_value();
    love.display();
    return 0;
}

