class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for(int i = 0; i < s.length(); i++)
            m[s[i]]++;
        string ans = "";
        priority_queue<pair<int, char>> pq;
        for(auto itr = m.begin(); itr != m.end(); itr++)
            pq.push(pair<int, char>(itr->second, itr->first));
        while(!pq.empty()){
            for(int i = 0; i < pq.top().first; i ++)
                ans += pq.top().second;
            pq.pop();
        }
        return ans;
    }
};