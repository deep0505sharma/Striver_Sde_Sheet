
long countWaysToMakeChange(int *denominations, int n, int value)
{
    //Write your code here
    long dp[n+1][value+1];
    for(int i=0;i<=n;i++)dp[i][0]=1;
    for(int j=1;j<=value;j++)dp[0][j]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=value;j++){
            if(denominations[i-1]<=j)dp[i][j]=dp[i-1][j]+dp[i][j-denominations[i-1]];
            else dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][value];
}
