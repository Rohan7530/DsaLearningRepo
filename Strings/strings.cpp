#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = "abc";
    cout << s << endl;

    string *sp = new string;
    *sp = "mno";
    cout << sp << endl;
    cout << *sp << endl;

    vector<string> v;
    v.push_back(s);
    v.push_back("hello");

    for(int i = 0 ; i<v.size() ; i++){
    cout << v[i] << endl;
    sort(v[i].begin(), v[i].end());
    cout << v[i] <<endl;
    }

    // string s3;
    // cin >> s3;
    // cout << s3 << endl;

    string s4;
    // getline (cin, s4);
    // cout << s4;

    s4 = "abcdef";
    cout << s4[1] << endl;
    cout << s4.substr(3)<<endl;
    cout << s4.substr(3,2)<<endl;
    cout << s4.find("def") << endl;
    int a = 1234;
    string s5 = to_string(a);
    cout << s5 << endl;
    s5[1] = '7';
    s5.push_back('9');
    cout << s5 <<endl;

    a = atoi(s5.c_str());
    cout << a << endl;
    return 0; 
}