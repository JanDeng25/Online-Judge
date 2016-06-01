class Solution {
public:
    /*static bool cmp(pair<int,int> p1,pair<int,int> p2){
        return p1.second > p2.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> topKF;
        int size = nums.size();
        if(size == 0)
            return topKF;
        map<int,int> m;
        vector<pair<int, int>> v;
        for(int i = 0; i < size; i++)
            m[nums[i]]++;
        map<int,int>::iterator itr = m.begin();
        for(; itr != m.end(); itr++)
            v.push_back(*itr);
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < k; i++){
            topKF.push_back(v[i].first);
        }
        return topKF;
    }*/
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int num : nums)
            m[num]++;
        vector<int> res;
        priority_queue<pair<int,int>> pq;
        for(auto itr = m.begin(); itr != m.end(); itr++){
            pq.push(pair<int,int>(itr->second, itr->first));
            if(pq.size() > m.size() - k){
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};