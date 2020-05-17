/* A CPP Source file by Mushfiqur Rahman Abir */
/* It is a CMD tool which will launch secret and usefull windows 10 apps/tools. */
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

//Global var
int menuChoice;

//Func
void heading()
{
  cout<<right<<setw(85)<<setfill(' ')<<"Windows Tool Launcher"<<endl<<endl;
}

void menu()
{
  vector <string> menu;
  menu={"Launcher","Theme","Exit"};

  for (int i=0;i<menu.size();i++)
  {
    cout<<i+1<<". "<<menu[i]<<endl;
  }

  cout<<"Enter your choice: ";
  cin>>menuChoice;
}

//classes
class launcher
{
  protected:


  public:
  void internet()
  {
    system("cls");
    cout<<right<<setw(85)<<setfill('_')<<"Internet Section"<<endl<<endl;

    vector <string> menu;
    menu={"Google"};

    for (int i = 0; i<menu.size(); i++)
    {
      cout<<i+1<<". "<<menu[i]<<endl;
    }
    cout<<"Enter your choice: ";
    int choice;
    cin>>choice;

    switch (choice)
    {
    case 1:
      system("start www.google.com");
      break;
    
    default:
    cout<<"Invalid Input"<<endl;
      break;
    }
  }
};

int main()
{
    system("title Widnows Tool Launcher");
    heading();
    menu();
    if (menuChoice==1)
    {
      launcher sec1;
      sec1.internet();
    }


    system("pause");
}