//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string a, string b)
        {
            // code here
         string ans="";
         
         unordered_set<char>seta(a.begin(),a.end());
         unordered_set<char>setb(b.begin(),b.end());
         
         for(auto ch:seta){
             if(setb.find(ch)==setb.end()){
                 ans+=ch;
             }
         }
          for(auto ch:setb){
             if(seta.find(ch)==seta.end()){
                 ans+=ch;
             }
         }
         sort(ans.begin(),ans.end());
         if(ans.length()==0){
             return "-1";
         }
         return ans;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends