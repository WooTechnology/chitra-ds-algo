// strstr: This function takes two strings s1 and s2 as an argument and finds the first occurrence of the sub-string s2 in the string s1. 
/* char *strstr (const char *s1, const char *s2);
s1: This is the main string to be examined, s2: This is the sub-string to be searched in s1 string.
Return Value: This function returns a pointer points to the first character of the found s2 in s1 otherwise a null pointer if s2 is not present in s1. If s2 points to an empty string, s1 is returned.*/

    char s1[] = "HELLO WORLD!";
   // char s2[] = "abc";
    char s3[] = "ORLD";
    char *p;
    p = strstr(s1,s3);
    if(p) cout<<"Found\n";
    else cout<<"-1";
    return 0;
}

// atoi and stoi are two common methods to convert strings to numbers
// stoi takes string as argument and atoi takes character or literal as argument

string s = "SOME value";
int k = stoi(s);  //NOTE: stoi converts to integer
int m = stol(s); // stol converts into long integer
int n = stoll(s); // stoll converts into long long integer

    const char *str1 = "42"; 
    const char *str2 = "3.14159"; 
    const char *str3 = "31337 geek"; 
     
    int num1 = atoi(str1); 
    int num2 = atoi(str2); 
    int num3 = atoi(str3); 