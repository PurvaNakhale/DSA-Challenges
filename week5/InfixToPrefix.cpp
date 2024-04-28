#include <bits/stdc++.h>
using namespace std;

int precedence(char ch){
    switch (ch)
    {
    case '-':
    case '+':
      return 1;
    
    case '*':
    case '/':
       return 2;
    
    default:
        return -1;
    }
}

string infixToPostfix(string infix){
    string postfix;
    stack<char> s;
    for(int i=0; i<infix.size(); i++){
        if(isalnum(infix[i])){
            postfix.push_back(infix[i]);
        }
        else if(infix[i] == '('){
            s.push(infix[i]);
        }
        else if(infix[i] == ')'){
            while(infix[i] != '('){
                s.push(s.top());
                s.pop();
            }
            s.pop();
        }
        else{
            while(!s.empty() && s.top() != '(' && precedence(s.top()) >= precedence(infix[i])){
                postfix.push_back(s.top());
                s.pop();
            }
            s.push(infix[i]);
        }

        while(s.empty()){
            postfix.push_back(s.top());
            s.pop();
        }

        return postfix;
    }
}

int main(){
    string infix;
    cin>>infix;
    
    string postfix = infixToPostfix(infix);
    cout<<"Infix expression : "<<infix<<endl; 
    cout<<"Postfix expression : "<<postfix<<endl;

    return 0;
}