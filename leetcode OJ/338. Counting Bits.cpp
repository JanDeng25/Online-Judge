class Solution {
public:
    vector<int> countBits(int num) {
        /*vector<int> result(1,0);
        if(num == 0)
            return result;
        result.push_back(1);
        if(num == 1){
            return result;
        }
        int power = 1;
        int count = 1;
        int size;
        while(count <= num){
            size = result.size();
            for(int i = power; i > 0; i --){
                result.push_back(result[size-i]);
                count ++;
                if(count >= num)    break;
                //cout<<count<<endl;
            }
            //cout<<count<<endl;
            if(count >= num) break;
            size = result.size();
            for(int i = power; i > 0; i --){
                result.push_back(result[size-i] + 1);
                count ++;
                //cout << count <<endl;
                if(count >= num)    break;
                
            }
            if(count >= num) break;
            power *= 2;
        }
        //vector<int> result(num,0);
        return result;
        */
        vector<int> result(num+1,0);
        for(int i  = 1; i <= num; i ++){
            result[i] = result[i&(i-1)] + 1;
        }
        return result;
    }
};