//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    int lowerBound(int low, int high, vector<int>& nums,int target){
        int l=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                l=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return l;
    }
    int upperBound(int low, int high, vector<int>& nums,int target){
        int u=-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]<=target){
                u=mid;
                low=mid+1;
            } 
            else high=mid-1;
        }
        return u;
  }
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n=arr.size()-1;
        int l=lowerBound(0,n,arr,target);
        int u=upperBound(0,n,arr,target);
        if(l==-1) return 0;
        return (u-l+1);
    }

};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends