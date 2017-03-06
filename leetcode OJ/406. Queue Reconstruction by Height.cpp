class Solution {
public:
    static bool cmp(pair<int, int> p1, pair<int, int> p2){
        return (p1.first > p2.first) || ((p1.first == p2.first) && (p1.second < p2.second));
    }
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        vector<pair<int, int>> ans;
        sort(people.begin(), people.end(), cmp);
        for(auto p:people){
            ans.insert(ans.begin() + p.second, p);
        }
        return ans;
    }
};