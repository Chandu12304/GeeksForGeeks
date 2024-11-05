//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
    bool canWePlace(vector<int> &stalls, int k, int m){
        int cowCnt=1;
        int lastCowPos=stalls[0];
        for(int pos: stalls){
            if((pos-lastCowPos)>=m){
                cowCnt++;
                lastCowPos=pos;
            }
            if(cowCnt>=k) return true;
        }
        return false;
    }
  public:
    int aggresiveCows(vector<int> &stalls, int k) {
        // sorting because we dont have to check distances other than adjacent cows
        sort(stalls.begin(),stalls.end());
        /* Brute force , we've to find all the possible placements of cows. 
        Optimal, We try to decrese the factors, 
        (1) By 'Greediness' we can tell that, if we start placing the cow from 1st coordinate 
            we can get the maximum of minimum distance,
        (2) we dont have to check the positions where the minimum is already calculated, by
            checking 1 value after another, previous values need not to be calculated 
        - 2nd point gives us the range of consecutive nnumbers, here we can employ 
          'Binary search' concept. */
          
        int l=1;
        int h= (*max_element(stalls.begin(),stalls.end())-*min_element(stalls.begin(),stalls.end()));
        while(l<=h){
            int m=(l+h)/2;
            if(canWePlace(stalls,k,m)) l=m+1;
            else h=m-1;
        }
        return h;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggresiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Endshttps://media.geeksforgeeks.org/img-practice/chatIcon-1653561581.svg