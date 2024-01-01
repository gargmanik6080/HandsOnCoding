#include <iostream>
#include<string>
#include<stack>
using namespace std;
int prec(char c){
    if(c=='^')return 3;
    if(c=='*' || c=='/') return 2;
    if(c=='+' || c=='-') return 1;
    return 0;
}

string inToPost(string s){
    string res;
    stack <char>st;
    for(char c:s){
        if(isalnum(c))res+=c;
        else if(c=='(') st.push(c);
        else if(c==')') {
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(c)<prec(st.top())){
                res+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){res+=st.top();st.pop();}
    return res;
}

int main(){
    string s="a+b*(d+e)";
    cout<<inToPost(s);
    return 0;
}