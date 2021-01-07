// Implement pow(x, n), which calculates x raised to the power n (i.e. xn).

class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0) return 0;
        if(n == 0) return 1;
        if(n == 1) return x;
        long long nn = n;    // because of the int max range if n is negative: refer second line of next if loop 
        if(n<0){
            x = 1/x;
            nn = -1 * nn;
        }
        double var = myPow(x,nn/2); 
        return nn&1 ? x * var * var : var * var;
    }
};