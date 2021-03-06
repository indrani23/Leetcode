class Solution {
public:
    int consecutiveNumbersSum(int n) 
    {
        int cnt=0; // no of ways
        int k=1; // no of elements
        for(int i=k;2*n>i*(i-1);i++) // to check for positive number
        {
            if((n-((i-1)*i)/2) % i == 0) // to check if x(first element) is integer
                cnt++;
        }
        return cnt;
    }
};