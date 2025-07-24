// RISHITA GOSWAMI 
//24070123086
//B1
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the number to check even or odd: ";
    cin>>a;
    if(a%2!=0){
        cout<<"The number is odd."<<endl;
    }
    else if(a=0){
        cout<<"the number is zero."<<endl;
    }
    else{
        cout<<"The number is even."<<endl;
    }

    return 0;
}

/*
output:
Enter the number to check even or odd: 2
The number is even.

Enter the number to check even or odd: 9
The number is odd.
*/
