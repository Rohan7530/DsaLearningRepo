# include <iostream>
using namespace std;

int length (char input[]){
    int count = 0;
    for(int i= 0; input[i] != '\0'; i++ ){
        count++;
    }
    return count;
}

int main(){
    char name[100];
    cout << "Enter your name: ";
    cin >> name;
    int len = length(name);
    cout << "length of the string is " << len << endl;
}