class Solution {
public:
    string reverseWords(string s) {
        string ans="";

    int n=s.size();

    int i=n-1;

    string temp="";

    while(i>=0)
    {
        


        while(i>=0 && s[i]==' ')
        {
            i--;
        }

        while(i>=0 && s[i]!=' ')
        {
            temp=s[i]+temp;
            i--;
        }
         if(temp!="")
         {
         ans+=temp;
         ans+=' ';
         }

         temp="";

    }

    ans.pop_back();
   
   return ans;
    }
};
