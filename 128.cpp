#include <bits/stdc++.h>
using namespace std;
void s(){
    stack<int> s;
    string str;
    int n;
    cin >> n;
    cin >> str;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='(') s.push(str[i]);
        else if(str[i]==')'){
            if(s.empty()) s.push(str[i]);
            else if(s.top()=='(') s.pop();
            else s.push(str[i]);
        }
    i++;
    }
    cout <<(s.size()/2)<<endl;
}
int main(){
int t;
cin >> t;
while(t--){
    s();
}
}