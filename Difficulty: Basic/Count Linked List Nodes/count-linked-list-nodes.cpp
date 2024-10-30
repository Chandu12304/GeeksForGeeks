//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */
class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        int count = 0;  // Initialize count to 0
        if(!head) return 0;
        Node* temp = head;  // Initialize temp to point to head
        // Traverse the linked list until the end
        while (temp != nullptr) {
            count++;  // Increment count for each node
            temp = temp->next;  // Move to the next node
        }

        return count;  // Return the total count of nodes
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.getCount(head) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends