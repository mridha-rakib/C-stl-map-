#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[], int arrSize) {

    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < arrSize; i++) {
        max_ending_here = max_ending_here + arr[i];

        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }

        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }

    return max_so_far;
}



int main()
{
    int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int n = sizeof(a) / sizeof(a[0]);

    // Function Call
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
