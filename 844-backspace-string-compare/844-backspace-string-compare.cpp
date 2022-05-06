class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<int> stack1;
        stack<int> stack2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#'){
                if(!stack1.empty())
                   stack1.pop();
            }
            else
                stack1.push(s[i]);
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#'){
                if(!stack2.empty())
                    stack2.pop();
            }
            else
                stack2.push(t[i]);
        }
        if(stack1.size() != stack2.size())
        {
            return false;
        }
        else
        {
            while(!stack1.empty())
            {
              if (stack1.top() == stack2.top())
              {
                stack1.pop();
                stack2.pop();
              }
              else
              {
                return false;
              }
            }
            return true;
          }
    }
};