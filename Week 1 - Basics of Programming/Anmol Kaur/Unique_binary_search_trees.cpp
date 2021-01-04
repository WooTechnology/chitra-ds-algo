// Given n, how many structurally unique BST's (binary search trees) that store values 1 ... n?

// nth catalan term = catalan(i)*catalan(n-i-1)  
class Solution {
public:
    int numTrees(int n) {
        if(n<=1) return 1;
        // recursive approach
        // for(int i =0; i<n; i++){
        //     res += numTrees(i) * numTrees(n-i-1);
        // } 
        
        // DP approach
        long int arr[n+1];
        arr[0] = arr[1] =1;
        for(int i =2;i<=n;i++){
            arr[i] =0;
            for(int j=0 ; j<i; j++){
            arr[i] += arr[j] * arr[i-j-1];
        }
        }
        return arr[n];
    }
};