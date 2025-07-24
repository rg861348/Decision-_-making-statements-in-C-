//RISHITA GOSWAMI 
//24070123086
//B1
#include <iostream>
using namespace std;

int main(){
  char ch;
  cout<<"Enter the character = ";
  cin>>ch;
  if(ch=='a'||ch=='A'||ch=='e' ||ch=='E'||ch=='i'||ch=='I'||ch=='o' ||ch=='O' || ch=='u' || ch=='U' )
  {
      cout<<"The character is vowel ";
  }
  else
  {
      cout<<"The character is consonant";
  }



    return 0;
}

/*
output:
Enter the character = A
The character is vowel 

Enter the character = R
The character is consonant
*/
