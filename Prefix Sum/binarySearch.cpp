#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int binarysearch(int arr[], int n, int k)
    {

        sort( arr, arr + n );

        int left = 0;
        int right = n - 1;


        while( left <= right )
        {
            int mid = left + ( right - left ) / 2;

            if( arr[mid] == k )
                return mid;
            else if( arr[mid] < k )
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends
