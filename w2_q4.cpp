#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    priority_queue<pair<int, int>> pq;  
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        pq.push({nums[i], i});  
        while (pq.top().second <= i - k)
            pq.pop();

        if (i >= k - 1)
            result.push_back(pq.top().first);
    }

    return result;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> result = maxSlidingWindow(nums, k);

    for (int num : result)
        cout << num << " ";

    return 0;
}
