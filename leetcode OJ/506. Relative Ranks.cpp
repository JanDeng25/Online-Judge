class Solution {
public:
    static bool cmp(pair<int, int> p1, pair<int, int> p2){
        return p1.first > p2.first;
    }
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<pair<int,int>> v;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            v.push_back(make_pair(nums[i], i));
        }
        sort(v.begin(), v.end(), cmp);
        vector<string> ans(size, "");
        for(int i = 0; i < size; i++)
        {
            if(i == 0)  ans[v[i].second] = "Gold Medal";
            if(i == 1)  ans[v[i].second] = "Silver Medal";
            if(i == 2)  ans[v[i].second] = "Bronze Medal";
            if(i > 2)   ans[v[i].second] = to_string(i+1);
        }
        return ans;
    }
};