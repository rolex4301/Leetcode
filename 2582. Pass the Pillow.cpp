class Solution {
public:
    int passThePillow(int n, int time) {
    int div, r, ans;
    div = floor(time/(n-1));
    r = time%(n-1);
    if (div%2 ==0)
    {
        ans = 1+r;   
    }
    else
    {
        ans = n-r;   
    }
    return ans;    
    }
};