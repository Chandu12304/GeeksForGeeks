//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    bool possible(vector<int> &arr, int k, int m){
        int sum=arr[0];
        int cntStud=1;
        for(int i=1;i<arr.size();i++){
            if((sum+arr[i])>m){
                sum=arr[i];
                cntStud++;
            }else sum+=arr[i];
        }
        if(cntStud>k) return true;
        return false;
    }
  public:
    int findPages(vector<int> &arr, int k) {
        if(k==1) return accumulate(arr.begin(),arr.end(),0);
        if(k>arr.size()) return -1;
        int l= *max_element(arr.begin(),arr.end());
        int h= accumulate(arr.begin(),arr.end(),0);
        while(l<=h){
            int m=(l+h)/2;
            if(possible(arr,k,m)) l=m+1;
            else h=m-1;
        }
        return l;
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
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends