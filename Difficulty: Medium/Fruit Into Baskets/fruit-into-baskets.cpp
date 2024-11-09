//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(vector<int> &arr) {
        if(arr.size()==1) return 1;
        vector<int> basket;
        int i=0; int j=0;
        int maxi=0;
        while(j<arr.size()){
            if(basket.size()==0) basket.push_back(arr[j]);
            if(basket.size()<2 && basket[0]!=arr[j]) basket.push_back(arr[j]);
            if(count(basket.begin(), basket.end(), arr[j])<=0){
                if(j>0){
                    i=j-1;
                    while(i>=0 && arr[i]==arr[j-1]){
                        i--;
                    }
                    i++;
                    basket[0]=arr[i];
                    basket[1]=arr[j];
                }
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ans = ob.totalFruits(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends