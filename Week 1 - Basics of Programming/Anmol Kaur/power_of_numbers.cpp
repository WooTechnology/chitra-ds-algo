#define MOD 1000000009

//  Given a number and its reverse. Find that number raised to the power of its own reverse.
//  Note: As answers can be very large, print the result modulo 109 + 7.
long long power(int N,int R)
{
   if( R == 0)
        return 1;
   long long temp = power(N, R/2);
    if (R%2 == 0)
        return (temp%MOD*temp%MOD)%MOD;
    else
        return (N%MOD*temp%MOD*temp%MOD)%MOD;
}