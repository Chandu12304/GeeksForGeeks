//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int l=1;
	    int h=m;
	    while(l<=h){
	        int mid=(h+l)/2;
	        long long result=1;
	        for(int i=1;i<=n;i++){
	            result*=mid;
	            if(result>m) break;
	        }
	        if(result==m) return mid;
	        else if(result<m) l=mid+1;
	        else h=mid-1;
	        
	    }     
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	
cout << "~" << "\n";
}  
	return 0;
}
// } Driver Code Ends