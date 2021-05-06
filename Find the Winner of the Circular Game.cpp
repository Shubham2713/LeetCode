class Solution {
public:
    
    int winner(int n,int k)
    {
        if(n==1)
            return 0;
        else
            return (winner(n-1,k)+k)%n;
    }
    
    int findTheWinner(int n, int k) {
        int res= winner(n,k)+1;
        return res;
    }
};
