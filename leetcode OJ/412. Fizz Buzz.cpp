class Solution {
public:
    vector<string> fizzBuzz(int n) {
        /*
        //solution 1:6ms
        vector<string> ans;
        for(int i = 1; i <= n; i ++){
            if(i % 3 == 0 && i % 5 == 0)
                ans.push_back("FizzBuzz");
            else if(i % 3 == 0)
                ans.push_back("Fizz");
            else if(i % 5 == 0)
                ans.push_back("Buzz");
            else
                ans.push_back(to_string(i));
            
        }
        return ans;
        */
        vector<string> ans(n);
        for(int i = 1; i <= n; i ++){
            if(i % 3 == 0)
                ans[i-1] += "Fizz";
            if(i % 5 == 0)
                ans[i-1] += "Buzz";
            if(ans[i-1] == "")
                ans[i-1] += to_string(i);
            
        }
        return ans;
    }
};