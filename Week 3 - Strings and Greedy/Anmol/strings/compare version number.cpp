class Solution {
public:
    int compareVersion(string v1, string v2) {
        // d1 d2 for diff in . of versions
        int d1 = count(v1.begin(), v1.end(), '.'),
            d2 = count(v2.begin(), v2.end(), '.');
        
        int diff = abs(d1-d2);
        if(d1>d2){
          while(diff--) v2 += ".0";  
        }
        else if(d2>d1){
            while(diff--) v1 += ".0"; 
        }
        
        // now string lengths are equal
       
         replace(v1.begin(), v1.end(), '.', ' ');
         replace(v2.begin(), v2.end(), '.', ' ');
       
        stringstream ss1(v1),ss2(v2); //stringstream converts string into space-separated int values
        int n1,n2;
        while(ss1>>n1){
            ss2>>n2;
            if(n1>n2) return 1;
            else if(n2>n1) return -1;
        }
        return 0;
    }
};