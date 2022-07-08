int editDistance(string str1, string str2)
{
    //write you code here
    int n =str1.size();
    int m= str2.size();
    int dp[n+1][m+1];

    for(int i=0;i<n+1;i++)dp[i][0]=i;
    for(int j=1;j<m+1;j++)dp[0][j]=j;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(str1[i-1] == str2[j-1])dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
        }
    }
    return dp[n][m];
}
