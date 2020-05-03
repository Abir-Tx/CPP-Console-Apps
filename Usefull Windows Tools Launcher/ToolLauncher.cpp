/* A CPP Source file by Mushfiqur Rahman Abir */
/* It is a CMD tool which will launch secret and usefull windows 10 apps/tools. */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    system("title Widnows Tool Launcher");
    cout<<right<<setw(85)<<setfill(' ')<<"Windows Tool Launcher"<<endl<<endl;
    cout << showbase << uppercase;
  cout << uppercase <<"Google" << '\n';
  cout << nouppercase << 77 <<"Google"<< '\n';

   std::cout.flags ( std::ios::right | std::ios::showbase );
  std::cout.width (50);
  std::cout << 100 << '\n';
    system("pause");
}