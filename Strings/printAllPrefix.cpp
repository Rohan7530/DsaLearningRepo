#include<iostream>
#include<cstring>

using namespace std;

void printAllPrefixes(char str[100]){

    for (int i = 0; i < strlen(str); i++)
    {   
       for (int j = 0; j <= i; j++)
       {
        std :: cout << str[j];
       }
       std:: cout << endl;
       
    }
}

int main(){
    char str[] = "rohan";
    printAllPrefixes(str);
     
    return 0;
}