 #include <stack>
int largestRectangle(vector < int > & heights) {
   // Write your code here.
    stack<int>st;
    int maxa=0;
    int n=heights.size();
    for(int i=0;i<=n;i++){
        while(!st.empty() && (i==n||heights[st.top()]>=heights[i])){
            int height =heights[st.top()];
            st.pop();
            int width;
            if(st.empty())width =i;
            else width = i-st.top()-1;
            maxa = max(maxa,width*height);
        }
        st.push(i);
    }
    return maxa;
 }

