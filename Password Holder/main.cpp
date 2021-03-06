/* A C++ console app which will hold password inputted by the user */
#include <iostream>
#include <iomanip>
using namespace std;

int menuChoice;
int themeChoice;
static char back;

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
    void white()
    {
        system("color 06");
    }
};

void heading()
{
    cout << right << setw(85) << setfill(' ') << "Password Holder" << endl
         << endl;
}
void menu()
{
    Theme color;
    string options[3] = {"Password Book", "Theme", "Exit"};
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". " << options[i] << endl;
    }
    cout << "Please input your choice: ";
}
void passwordBook()
{
    system("cls");
    cout << setw(85) << right << setfill(' ') << "Input Your Master Password: ";
    string input;
    cin >> input;
    string masterPassword = "uniking";
    if (input == masterPassword)
    {
        cout << "Your FB Password is: Hello World" << endl;
    }
}

void theme()
{
    system("cls");
    cout << right << setw(85) << setfill(' ') << "Theme Selector" << endl
         << endl;
    string themeContainer[3] = {"Red", "White", "Blue"};
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". " << themeContainer[i] << endl;
    }
    cout << "Please input your choice: ";
}

void exit()
{
    system("exit");
}

int main()
{
    Theme color;
    do
    {
        system("cls");
        heading();
        menu();
        cin >> menuChoice;
        if (menuChoice == 1)
        {
            passwordBook();
        }
        else if (menuChoice == 2)
        {
            theme();
            cin >> themeChoice;
            switch (themeChoice)
            {
            case 1:
                color.red();
                break;
            case 2:
                color.white();
                break;
            case 3:
                color.blue();
                break;

            default:
                cout << "Invalid Input" << endl;
                break;
            }
        }
        else if (menuChoice == 3)
        {
            exit();
        }
        else 
        {
            cout<<"Your Input is not valid. Please try again :-)"<<endl;
        }

        cout << "Press B to go back & E to exit the program : ";
        cin >> back;
    } while (back == 'B' || back == 'b');
}