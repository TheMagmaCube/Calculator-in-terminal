#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>

using namespace std;



void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{   
    while(true)
    {
        cout << "************************************************" << endl;
        cout << "  Addition --> 1" << endl;
        cout << "  Subtraction --> 2" << endl;
        cout << "  Multiplication --> 3" << endl;
        cout << "  Division --> 4" << endl;
        cout << "  Exponentiation --> 5" << endl;
        cout << "  Elementalization --> 6" << endl;
        cout << "  Calculating the area of a square/rectangle in cm --> 7" << endl;
        cout << "************************************************" << endl;
        sleep(0.3);
        cout << "Your decision: " << endl;
        int menu_decision;
        long long first;
        long long second;
        long long result;
        string pass;
        cin >> menu_decision;
        


        switch(menu_decision)
        {
            case 1:
                sleep(1);
                clearConsole();
                cout << "Your choice: addition" << endl;
                cout << endl;
                cout << ": ";
                cin >> first;
                cout << endl;
                cout << ": ";
                cin >> second;
                cout << endl;
                result = first + second;
                cout << "Result: " << result << endl;
                cout << "Press any key to continue: ";
                cin >> pass;
                if (pass == string(pass))
                {   
                    sleep(1);
                    clearConsole();
                    continue;
                }
                else
                    sleep(1);
                    clearConsole();
                    continue;
                    

            case 2:
                sleep(1);
                clearConsole();
                cout << "Your choice: subtraction" << endl;
                cout << endl;
                cout << ": ";
                cin >> first;
                cout << endl;
                cout << ": ";
                cin >> second;
                cout << endl;
                result = first - second;
                cout << "Result: " << result << endl;
                cout << "Press any key to continue: ";
                cin >> pass;
                if (pass == string(pass))
                {   
                    sleep(1);
                    clearConsole();
                    continue;
                }
                else
                    sleep(1);
                    clearConsole();
                    continue;

            case 3:
                sleep(1);
                clearConsole();
                cout << "Your choice: multiplication" << endl;
                cout << endl;
                cout << ": ";
                cin >> first;
                cout << endl;
                cout << ": ";
                cin >> second;
                cout << endl;
                result = first * second;
                cout << "Result: " << result << endl;
                cout << "Press any key to continue: ";
                cin >> pass;
                if (pass == string(pass))
                {   
                    sleep(1);
                    clearConsole();
                    continue;
                }
                else
                    sleep(1);
                    clearConsole();
                    continue;

            case 4:
                sleep(1);
                clearConsole();
                cout << "Your choice: division" << endl;
                cout << endl;
                cout << ": ";
                cin >> first;
                cout << endl;
                cout << ": ";
                cin >> second;
                cout << endl;
                result = first / second;
                cout << "Result: " << result << endl;
                cout << "Press any key to continue: ";
                cin >> pass;
                if (pass == string(pass))
                {   
                    sleep(1);
                    clearConsole();
                    continue;
                }
                else
                    sleep(1);
                    clearConsole();
                    continue;
            
            case 5:
                sleep(1);
                clearConsole();
                cout << "Your choice: exponentiation" << endl;
                cout << endl;
                cout << ": ";
                cin >> first;
                cout << endl;
                cout << ": ";
                cin >> second;
                cout << endl;
                result = pow(first, second);
                cout << "Result: " << result << endl;
                cout << "Press any key to continue: ";
                cin >> pass;
                if (pass == string(pass))
                {   
                    sleep(1);
                    clearConsole();
                    continue;
                }
                else
                    sleep(1);
                    clearConsole();
                    continue;
            
            case 6:
                sleep(1);
                clearConsole();
                cout << "Your choice: elementalization" << endl;
                cout << endl;
                long long first;
                long long second;
                cout << ": ";
                cin >> first;
                cout << endl;
                result = sqrt(first);
                cout << "Result: " << result << endl;
                cout << "Press any key to continue: ";
                cin >> pass;
                if (pass == string(pass))
                {   
                    sleep(1);
                    clearConsole();
                    continue;
                }
                else
                    sleep(1);
                    clearConsole();
                    continue;

            case 7:
                sleep(1);
                clearConsole();
                cout << "Your choice: calculating the area of a square/rectangle in cm" << endl;
                cout << endl;
                cout << "First side: ";
                cin >> first;
                cout << endl;
                cout << "Second side: ";
                cin >> second;
                cout << endl;
                result = first * second;
                cout << "Result: " << result << "cm^2" << endl;
                cout << "Press any key to continue: ";
                cin >> pass;
                if (pass == string(pass))
                {   
                    sleep(1);
                    clearConsole();
                    continue;
                }
                else
                    sleep(1);
                    clearConsole();
                    continue;
            
            default:
                sleep(4);
                clearConsole();
                cout << "You broke the current process, because you enter a letter [Please restart process].";
                sleep(1);
                clearConsole();
                continue;
                
        }
    }




    return 0;

}