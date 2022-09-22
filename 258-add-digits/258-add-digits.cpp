class Solution {
public:
    int addDigits(int num) {
        int r,cnt=0,value=0;
        while(num)
        {
            r = num%10;
            value += r;
            num /= 10;
        }
        if(value<10)
        {
            return value;
        }
        else
        {
            return addDigits(value);
        }
    }
};