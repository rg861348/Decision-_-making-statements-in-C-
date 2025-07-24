//RISHITA GOSWAMI 
//24070123086
//B1
#include <iostream>
using namespace std;
int main()
{
    int m, n ;
    int choice;
    cout << "Enter first number: ";
    cin >> m;
    cout << "Enter second number: ";
    cin >> n;
    cout << "Choose an operation:" << endl;
    cout << "1 for Addition" << endl;
    cout << "2 for Subtraction" << endl;
    cout << "3 for Multiplication" << endl;
    cout << "4 for Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    switch(choice) {
        case 1:
            cout << "Result: " << m + n << endl;
            break;
        case 2:
            cout << "Result: " << m - n << endl;
            break;
        case 3:
            cout << "Result: " << m * n << endl;
            break;
        case 4:
            if (n != 0) {
                cout << "Result: " << m/ n << endl;
            } else {
                cout << "Not Divisible by 0." << endl;
            }
            break;
        default:
            cout << "Enter Choice from 1 to 4"<< endl;
    }
    return 0;
}

/*
output:
Enter first number: 5
Enter second number: 8
Choose an operation:
1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
Enter your choice (1-4): 1
Result: 13

Enter first number: 5
Enter second number: 8
Choose an operation:
1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
Enter your choice (1-4): 2
Result: -3

Enter first number: 5
Enter second number: 8
Choose an operation:
1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
Enter your choice (1-4): 3
Result: 40

Enter first number: 5
Enter second number: 8
Choose an operation:
1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
Enter your choice (1-4): 4
Result: 0
*/
