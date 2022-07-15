#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int k=0,mid=0,j=n-1;
    for(int i=0;i<m;i++){
        k=0,mid=0,j=n-1;
        while(k<=j){
            mid=(k+j)/2;
            if(mat[i][mid]==target)return true;
            else if(mat[i][mid]<target)k=mid+1;
            else j=mid-1;
        }
    }
    return false;
}

