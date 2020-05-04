#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char choice;
    do
    {
        system("cls"); //To sclaer the screen
        cout << right << setw(80) << setfill(' ') << "English To ASCII Converter" << endl
             << endl;

        wchar_t input;
        cout << "Enter the English alphabet: ";
        wcin >> input;
        cout << "ASCII value of Alphabet (" << (char)input << ") is: " << input << endl<<endl;

        cout << right << setw(90) << setfill(' ') << "Press Y to try again & N to exit: ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}