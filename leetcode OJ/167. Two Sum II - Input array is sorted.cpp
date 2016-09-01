class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int n = numbers.size();
        /*map<int,int> m;
        for(int i = 0; i < n; i++){
            map<int,int>::iterator itr = m.find(target - numbers[i]);
            if(itr != m.end()){
                res.push_back(itr->second);
                res.push_back(i+1);
                return res;
            }
            m[numbers[i]] = i+1;
        }
        return res;*/
        int low = 0,high = n-1;
        while(low < high){
            int temp = numbers[low] + numbers[high];
            if(temp == target){
                res.push_back(low+1);
                res.push_back(high+1);
                return res;
            }
            else if(temp < target)
                low ++;
            else
                high --;
        }
        return res;
    }
};