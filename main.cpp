#include<iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "\n\t-----------------------------------------\n";
    cout << "\t               CALCULATOR                \n";
    cout << "\t-----------------------------------------\n";
    cout << "\t1:Addition\t\t" << " 8:Sin" << endl;
    cout << "\t2:Subtraction\t\t" << " 9:Cos" << endl;
    cout << "\t3:Multiplication\t" << "10:Tan" << endl;
    cout << "\t4:Division\t\t" << "11Inverse of Sin" << endl;
    cout << "\t5:Exponent\t\t" << "12:inverse of Cos" << endl;
    cout << "\t6:Square\t\t" << "13:Inverse of Tan" << endl;
    cout << "\t7:Log\t\t" << "14:Exist" << endl;

    const string firstMessage = "\nEnter first number : ";
    const string secondMessage = "\nEnter second number : ";
    const string result = "\nResults = ";

    float x, y;
    float PI = 3.141559265;
    int choice;

    do {
        cout << "\n\tEnter the function that you want to perform : ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << firstMessage;
                cin >> x;
                cout << secondMessage;
                cin >> y;
                cout << result << x + y << endl;
                break;
            case 2:
                cout << firstMessage;
                cin >> x;
                cout << secondMessage;
                cin >> y;
                cout << result << x - y << endl;
                break;
            case 3:
                cout << firstMessage;
                cin >> x;
                cout << secondMessage;
                cin >> y;
                cout << result << x * y << endl;
                break;
            case 4:
                cout << firstMessage;
                cin >> x;
                cout << secondMessage;
                cin >> y;
                cout << result << x / y << endl;
                break;
            case 5:
                cout << "\nEnter the number : ";
                cin >> x;
                cout << "\nEnter the Exponent : ";
                cin >> y;
                cout << result << pow(x, y) << endl;
                break;
            case 6:
                cout << "\nEnter the number : ";
                cin >> x;
                cout << result << sqrt(x) << endl;
                break;
            case 7:
                cout << "\nEnter the number : ";
                cin >> x;
                cout << result << log10(x) << endl;
                break;
            case 8:
                cout << "\nEnter the number : ";
                cin >> x;
                cout << result << sin(x) << endl;
                break;
            case 9:
                cout << "\nEnter the number : ";
                cin >> x;
                cout << result << cos(x) << endl;
                break;
            case 10:
                cout << "\nEnter the number : ";
                cin >> x;
                cout << result << tan(x) << endl;
                break;
            case 11:
                cout << "\nEnter the number : ";
                cin >> x;
                cout << result << asin(x) * 180 / PI << endl;
                break;
            case 12:
                cout << "\nEnter the number : ";
                cin >> x;
                cout << result << acos(x) * 180 / PI << endl;
                break;
            case 13:
                cout << "\nEnter the number : ";
                cin >> x;
                cout << result << atan(x) * 180 / PI << endl;
                break;
            case 14:
                break;
            default:
                cout << "\nWrong Input\n";
                break;
        }
    } while (choice != 14);
    return 0;
}