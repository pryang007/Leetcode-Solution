//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int max_sum=INT_MIN;
        int min_sum =INT_MAX;
        int maxsum=0;
        int minsum=0;
        int total_sum=0;
        for(int i=0;i<num;i++) {
            total_sum += arr[i];
            maxsum = max(arr[i] + maxsum, arr[i]);
            minsum = min(minsum + arr[i], arr[i]);
            
            max_sum = max(max_sum, maxsum);
            min_sum = min(min_sum, minsum);
        }
        
        if(min_sum == total_sum)
            return max_sum;
        
        return max(max_sum, total_sum - min_sum);
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends