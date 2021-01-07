// ques https://leetcode.com/problems/next-greater-element-iii/
int nextGreaterElement(int n) {
        string num = to_string(n);
        string maxi = to_string(INT_MAX);
        if(next_permutation(num.begin(), num.end())){
            if(num.length() >= maxi.length() && maxi.compare(num) < 0) return -1; // doubt -> second condtion of if, didnt work with one
        return stoi(num);
       }
        return -1;
    }