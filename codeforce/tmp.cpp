class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& v, vector<int>& freq) {
        unordered_map<int, int> mp;
        vector<long long > ans;

        auto cmp = [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> maxHeap(cmp);

        int mx = 0;
        for (int i = 0; i < v.size(); ++i) {
            int x = mp[v[i]];
            if (freq[i] > 0)
                mp[v[i]] += freq[i];
            else {
                int newFreq = x + freq[i];
                if (newFreq > 0)
                    mp[v[i]] = newFreq;
                else
                    mp.erase(v[i]);
            }

            if (x == mx && mp[v[i]] < mx) {
                mx = 0;
                for (const auto& pair : mp) {
                    mx = max(mx, pair.second);
                }
            } else if (mp[v[i]] > mx) {
                mx = mp[v[i]]; 
            }

            ans.push_back(mx);
        }

        return ans;
    }
};