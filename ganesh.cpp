class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = 0, mx = 0;
        for(int i = 0; i < n; ++i){
            for(int j = i+1; j < n; ++j){
                if(nums[j] - nums[i] > nums[i]) break;
                mx = max(mx, (nums[i]^nums[j]));
            }
        }
        return mx;
    }
};

    int max_xor(vector<int>& arr , int start, int end)
    {
        int maxx = 0, mask = 0;
        set<int> se;
        for (int i = 21; i >= 0; i--) {
            mask |= (1 << i);
            for (int i = start; i < end; ++i) se.insert(arr[i] & mask);
            int newMaxx = maxx | (1 << i);
            for (int prefix : se) {
                if (se.count(newMaxx ^ prefix)) {
                    maxx = newMaxx;
                    break;
                }
            }
            se.clear();
        }
        return maxx;
    }

int maximumStrongPairXor(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size(), mx = 0;
        // cout << n << "\n";
        for(int i = 0; i < n; ++i){
            int lim = upper_bound(arr.begin(), arr.end(), arr[i]+arr[i]) - arr.begin();
            mx = max(mx, max_xor(arr, i, lim));
        }
        
        return mx;
    }


0010100101
1001001100
1010101011