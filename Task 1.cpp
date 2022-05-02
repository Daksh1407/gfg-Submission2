// Print the character of the given string

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
   char s[]="A string.";        //taking string
   char *ptr=s;                 //declare the pointer variable of character type
   cout<<s[0];                  //print the first letter(present at idx 0)
   cout<<' '<<*ptr<<' '<<ptr[3]<<endl;
   ptr+=2;                      //increment the pointer value by 2
   cout<<*ptr<<' '<<ptr[2]<<' '<<ptr[5];

   return 0;
}
