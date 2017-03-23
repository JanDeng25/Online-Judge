class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        /*
        //Solution 1: 13 ms
        vector<int> ans;
        if(findNums.size() == 0 || nums.size() == 0)
            return ans;
        for(int i = 0 ; i < findNums.size(); i++){
            auto itr = find(nums.begin(), nums.end(), findNums[i]);
            if(itr == nums.end())
                ans.push_back(-1);
            else{
                for(itr;itr != nums.end(); itr++){
                    if(*itr > findNums[i]){
                        ans.push_back(*itr);
                        break;
                    }
                }
                if(itr == nums.end())
                    ans.push_back(-1);
            }
        }
        return ans;
        */
        vector<int> ans;
        stack<int> s;
        unordered_map<int,int> m;
        for(int num: nums){
            while(!s.empty() && s.top() < num){
                m[s.top()] = num;
                s.pop();            //这一步很关键
            }
            s.push(num);
        }
        for(int num: findNums){
            if(m.count(num))    ans.push_back(m[num]);
            else    ans.push_back(-1);
        }
        return ans;
    }
};