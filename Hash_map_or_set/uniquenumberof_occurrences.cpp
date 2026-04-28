class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int x : arr) {
            mp[x]++;
        }

        unordered_set<int> freqSet;

        for(auto it : mp) {
            if(freqSet.find(it.second) != freqSet.end()) {
                return false;
            }
            freqSet.insert(it.second);
        }

        return true;
    }
};
