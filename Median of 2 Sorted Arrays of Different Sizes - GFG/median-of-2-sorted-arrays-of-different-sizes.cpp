//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& arr1, vector<int>& arr2)
    {
        // Your code goes here
        int n1=arr1.size();
        int n2=arr2.size();
        int ansarr[n1+n2];
        
        for(int i=0;i<n1;i++){
            ansarr[i]=arr1[i];
        }
        
        int len=n1+n2;
        
        int a=0;
        for(int i=n1;i<len;i++){
          ansarr[i]=arr2[a++];
        }
        
        sort(ansarr,ansarr+len);
        
        if(len%2==0)
        {
            int l=len/2;
            double y=ansarr[l];
            double z=ansarr[l-1];
            double ans=(y+z)/2; // double is mandatory
            return ans;
        }
        else
        {
            int mod=len/2;
            return ansarr[mod];
        }
        
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends