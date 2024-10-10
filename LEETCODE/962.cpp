
// A ramp in an integer array nums is a pair (i, j) for which i < j and nums[i] <= nums[j]. The width of such a ramp is j - i.

// Given an integer array nums, return the maximum width of a ramp in nums. If there is no ramp in nums, return 0.

// Example 1:

// Input: nums = [6,0,8,2,1,5]
// Output: 4
// Explanation: The maximum width ramp is achieved at (i, j) = (1, 5): nums[1] = 0 and nums[5] = 5.
// Example 2:

// Input: nums = [9,8,1,0,1,9,4,0,4,1]
// Output: 7
// Explanation: The maximum width ramp is achieved at (i, j) = (2, 9): nums[2] = 1 and nums[9] = 1.
#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;
int maximum(vector<int> &v)
{
    stack<int> st;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (st.empty() || v[st.top()] > v[i])
        {
            st.push(i); // creating a motonic decreasing stack and pushing the indices from teh start of the vector
        }//0 1 2 3
    }
    int max_width = INT_MIN;
    for (int i = n - 1; i >= 0; i--)//traversing in reverse order
    {
        while (!st.empty() && v[st.top()] <= v[i])
        {
            max_width = max(max_width, i - st.top());//getting j-i value and updating accordingly
            st.pop();
        }
    }
    return max_width;
}
int main()
{
    int n = 9;
    vector<int> v;
    int x;
    for (int i = 0; i <=n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int max_width = maximum(v);
    cout << "Maximum width Ramp is :" << max_width << endl;
}