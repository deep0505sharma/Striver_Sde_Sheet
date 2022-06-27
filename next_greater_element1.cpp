class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size(),-1);
        vector<int>v(nums2.size(),-1);
        int n = nums1.size();
        int m=nums2.size();
        stack<int>st;
        for(int i=m-1;i>=0;i--){
            while(!st.empty() && nums2[i]>=st.top())st.pop();
            if(!st.empty()) v[i] = st.top();
            st.push(nums2[i]);
        }
        for(int i=0;i<n;i++){
            for(int j= 0;j<nums2.size();j++){
                if(nums1[i] == nums2[j]){
                    ans[i] = v[j];
                    break;
                }
            }
        }
        return ans;
    }
};
