//space : O(1)
//time : O(n)

class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int temp = 0,cube_sum=0,num=n;
        while(n){
            temp = n % 10;
            cube_sum = temp*temp*temp + cube_sum;
            n = n/10;
        }
        return num == cube_sum?"Yes":"No";
    }
};