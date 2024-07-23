class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int bot = numBottles;
        int exg = numExchange;
        
        int div,r;
        int sum = bot;
        int left = bot;
        while (left >= exg)
        {
             div = floor(left/exg);
             r = left % exg;
             sum = sum + div;
             left = div + r;
        }
        return sum;
    }
};