class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        int value,r;
        while(1)
        {
            value = 0;
            while(n)
            {
                r = n%10;
                value += r*r;
                n /= 10;
            }
            if(value==1)
            {
                return true;
            }
            else if(s.find(value)!=s.end())
            {
                return false;
            }
            s.insert(value);
            n = value;
        }
    }
};