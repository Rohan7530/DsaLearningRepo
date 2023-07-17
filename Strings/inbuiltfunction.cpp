#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // length of a string
    char str1[100]= "abc";
    // std :: cin >> str1;
    // int len = strlen(str1);
    // std:: cout << len;

    // compare 2 strings
    char str2[100] = "defgh";
    // std ::cin >> str1;
    // std ::cin >> str2;
    // bool EqualOrNot = strcmp(str1, str2);
    // if (EqualOrNot == 1)
    //     std ::cout << "Not Equal";
    // else
    //     std::cout << "they are equal";

    //copy string
    // strcpy(str1, str2);
    // strncpy(str1,str2,4);
    strcat(str1, str2);
    std :: cout<< str1 << endl;
    return 0;
}