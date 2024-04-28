public:
    // Function to convert an infix expression to a postfix expression.
    int precedence(char ch){
        switch(ch){
            case '-':
            case '+':
              return 1;
            
            case '*':
            case '/':
              return 2;
              
            case '^':
              return 3;
             
            default:
              return -1;
        }
    }
    
    
    string infixToPostfix(string s) {
        // Your code here
        string postfix;
        stack<char> st;
        for(char ch : s) {
            if(isalnum(ch)) {
              postfix.push_back(ch);
            } else if(ch == '(') {
                st.push(ch);
            } else if(ch == ')') {
                while(!st.empty() && st.top() != '(') {
                postfix.push_back(st.top());
                st.pop();
            }
            if(!st.empty()) st.pop();
            } else { // Operator
                while(!st.empty() && st.top() != '(' && precedence(st.top()) >= precedence(ch)) {
                   postfix.push_back(st.top());
                   st.pop();
                }
                st.push(ch);
            }
        }
        while(!st.empty()) {
            postfix.push_back(st.top());
            st.pop();
        }
        return postfix;
    }