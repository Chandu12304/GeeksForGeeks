//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        long long int l=1;
        long long int h=n;
        long long int f=1;
        while(l<=h){
            long long int m=(h+l)/2;
            if((m*m)==n) return m;
            else if((m*m)<n){
                f=m;
                l=m+1;
            }
            else h=m-1;
        }
        return f;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends