// https://leetcode.com/problems/count-primes/
// Count the number of prime numbers less than a non-negative number, n.
class Solution {
public:
    int countPrimes(int n) {
        if (n ==0 || n == 1 || n == 2) return 0;
        if(n == 3) return 1;
        bool primes[n+1];
        int count = 0;
        memset(primes,true,sizeof(primes));
        for(int p =2 ; p*p<=n; p++){
            if(primes[p]){
                for(int i = p*p; i<n; i+=p){
                    primes[i] = false; 
                }
            }
        }
        for(int i = 2; i<n; i++)
            if(primes[i]) count++;
        return count;
    }
};