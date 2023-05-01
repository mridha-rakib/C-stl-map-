#include<bits/stdc++.h>
using namespace std;

int findDuplicate( vector <int> &nums )
{
    int duplicate = -1;

    for ( int i = 0; i < nums.size(); i++ )
    {
        int val = abs ( nums[i] );

        if ( nums[val] >= 0 )
            nums[val] = -nums[val];
        else
        {
            duplicate = val;
            break;
        }
    }

    for ( int i = 0; i < nums.size(); i++ )
    {
        if ( nums[i] < 0 )
            nums[i] = -nums[i];
    }

    return duplicate;
}

int main()
{
    vector<int> nums = { 1, 2, 3, 4, 2 };

    cout << "The duplicate element is " << findDuplicate(nums);

    return 0;
}
