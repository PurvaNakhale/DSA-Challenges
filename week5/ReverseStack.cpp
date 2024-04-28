class Solution{
public:
    queue<int> temp;
    
    void Reverse(stack<int> &St){
        
        if(St.empty()){
            return;
        }
        
        temp.push(St.top());
        St.pop();
        
        Reverse(St);
        
        while(!temp.empty()){
            St.push(temp.front());
            temp.pop();
        }
    }
};