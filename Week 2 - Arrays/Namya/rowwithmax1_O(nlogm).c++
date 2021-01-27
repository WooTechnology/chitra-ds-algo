class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	  
	    //This is an O(nlogm) solution, neeed to do better i.e O(m+n)
	    //Brute force would be O(m*n), searching through every row and colum
	    int index = 0;
	    int maxindex = -1;
	    int colsize = (arr[0]).size() - 1;
	      int maxzeros = m;
	      vector<int> k;
	    for(auto row : arr){
	        
	        vector<int>::iterator low1;
	        low1 = lower_bound(row.begin(), row.end(), 1);
	        int posze = low1 - row.begin();
	        maxzeros = min(maxzeros, posze);
	        k.push_back(posze);
	        //cout<<"pos of 1 is  "<<posze<<endl;
	        index += 1;
	    }
	     //cout<<"max zeros is "<< maxzeros<<endl;
	    if(maxzeros == m){
	        return -1;
	    }
	   
	    for(int i = 0; i < n; i++){
	        if(k[i] == maxzeros){
	            return i;
	        }
	    }
	    //
	//return (maxindex);

	    
	}
	
	
};
