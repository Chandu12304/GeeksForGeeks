//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
 // code here
        sort(arr.begin(),arr.end());
        int l=0;
        int h=arr.size()-1;
        int f =-1;
        int c=-1;
        vector<int> ans;
        while(l<=h){
            int m=(l+h)/2;
            if(arr[m]==x){
                f=c=arr[m];
                break;
            }
            else if(arr[m]<x){
                f=arr[m];
                l= m+1;
            }
            else{
                c=arr[m];
                h=m-1;
            }
        }
        ans.push_back(f);
        ans.push_back(c);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends