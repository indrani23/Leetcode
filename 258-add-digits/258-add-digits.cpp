class Solution {
public:
    int addDigits(int num) {
        if(num==0)
        {
            return 0;
        }
        while(1)
        {
            int r,cnt=0,value=0;
            while(num)
            {
                r = num%10;
                cnt++;
                value += r;
                num /= 10;
            }
            if(cnt==1)
            {
                return value;
            }
            num = value;
        }
    }
};