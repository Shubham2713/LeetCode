class Solution {
public:
    int arr[38]={0,1,1};
    int tribonacci(int n) {
        if(n<=1)
            return n;
        if(n==2)
            return 1;
        if(arr[n]!=0)
            return arr[n];
        arr[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        return arr[n];
        
    }
};
