// Given a stack, the task is to sort it such that the top of the stack has the greatest element.

void insertElement(stack<int> &s, int ele){
    if(s.empty() || s.top() < ele){
        s.push(ele);
        return;
    }
    
    int temp = s.top();
    s.pop();
    insertElement(s, ele);
    s.push(temp);
}

void sortStack(stack<int> &s){
    if(s.empty()){
       return;
   }    
    
   int temp = s.top();
   s.pop();
   sortStack(s);
   insertElement(s, temp);
}

void SortedStack :: sort()
{
   //Your code here
    sortStack(s);
   
}