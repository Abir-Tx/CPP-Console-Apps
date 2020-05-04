/* A C++ console app which will hold password inputted by the user */
#include <iostream>
#include<iomanip>
using namespace std;

class Theme
{
    public:
    void red()
    {
        system("color 04");
    }
    void blue()
    {
        system("color 09");
    }
    void invert()
    {
        system("color fc");
    }
};

void heading()
{
    cout<<right<<setw(85)<<setfill(' ')<<"Password Holder"<<endl<<endl;
}
void menu()
{
    string options[3]={"Password Book","Theme","Exit"};
    for (int i=0;i<3;i++)
    {
        cout<<i+1<<". "<<options[i]<<endl;
    }

    cout<<"\nPlease enter your choice: ";
    int choice;
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"coming soon";
        break;
        case 2:
        
    
    default:
        break;
    }

}

int main()
{
    Theme color;
    heading();
    menu();
    
    system("pause");
}