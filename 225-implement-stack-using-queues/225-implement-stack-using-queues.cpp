class MyStack {
public:
    queue <int> q1;
    queue <int> q2;
    MyStack()
    {}
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int n = q1.size();
        for(int i=0;i<n-1;i++)
        {
            int a = q1.front();
            q1.pop();
            q2.push(a);
        }
        int x=q1.front();
        q1.pop();
        for(int i=0;!q2.empty();i++)
        {
            q1.push(q2.front());
            q2.pop();
        }
        return x;
    }
    
    int top() {
        int n = q1.size();
        for(int i=0;i<n-1;i++)
        {
            int a = q1.front();
            q1.pop();
            q2.push(a);
        }
        int x = q1.front();
        q1.pop();
        for(int i=0;!q2.empty();i++)
        {
            q1.push(q2.front());
            q2.pop();
        }
        q1.push(x);
        return x;
    }
    
    bool empty() {
        if(q1.empty())
            return true;
        else
            return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */


// class MyStack {
// public:
//     queue <int> q1; // to mainly store the elements
//     queue <int> q2; // to be used as a temp queue , we transfer the elements to q2, perform ops on q1 and move the elements back to q1 from q2
    
//     MyStack() {
//     }
    
//     void push(int x) { // simply push the element into q1
//         q1.push(x);
//     }
    
//     int pop() {
//         int n= q1.size();
//         while(n>1){ // we will pop the elements from front until ther is only 1 element left
//             int a=q1.front(); // chose the front element
//             q2.push(a); // store it into q2
//             q1.pop(); // pop it from q1
//             n--; // update the size
//         }
//         int x= q1.front(); // this is the required element
//         q1.pop(); // we now empty the whole q1
//         while(!q2.empty()){ // now we transfer all elements from q2 back to q1
//             q1.push(q2.front());
//             q2.pop();
//         }
//         return x; // return the required element
//     }
    
//     int top() {
//         int n= q1.size();     
//         while(n>1){ // same as pop
//             int a= q1.front();
//             q2.push(a);
//             q1.pop();
//             n--;
//         }
//         int x= q1.front();
//         q1.pop();
//         while(!q2.empty()){
//             q1.push(q2.front());
//             q2.pop();
//         }
//         q1.push(x); // we also push the end element
//         return x;
//     }
    
//     bool empty() {
//         return q1.empty(); // check if q1 is empty
//     }
// };

// /**
//  * Your MyStack object will be instantiated and called as such:
//  * MyStack* obj = new MyStack();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->top();
//  * bool param_4 = obj->empty();
//  */