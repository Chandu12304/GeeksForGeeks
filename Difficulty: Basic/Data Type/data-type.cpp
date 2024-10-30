//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        if (str == "Character") {
            return sizeof(char);  // Character size
        }
        else if (str == "Integer") {
            return sizeof(int);   // Integer size
        }
        else if (str == "Long") {
            return sizeof(long);  // Long size
        }
        else if (str == "Float") {
            return sizeof(float); // Float size
        }
        else if (str == "Double") {
            return sizeof(double); // Double size
        }
        else {
            return -1;  // Invalid data type
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends