class Solution {
public:
    /*int Pow(int a, int b){
        if(b == 0)    return 1;
        if(b == 1)    return a % 1337;
        return Pow(a % 1337, b / 2) * Pow(a % 1337 ,b - b / 2) % 1337;
    }
    int superPow(int a, vector<int>& b) {
        int size = b.size();
        long res = 1;
        //abc = (10a + b) * 10 + c;
        for(int i = 0; i < b.size(); i++){
            res = Pow(res, 10) * Pow(a, b[i]) % 1337;
        }
        return res;
    }*/
    int superPow(int a, int k)  
    {  
        if(k ==0) return 1;  
        int ans = 1;  
        for(int i = 1; i <= k; i++) ans = (ans*a) %1337;  
        return ans;  
    }  
      
    int superPow(int a, vector<int>& b) {  
        if(b.empty()) return 1;  
        a = a%1337;  
        int lastBit = b.back();  
        b.pop_back();  
        return (superPow(superPow(a, b), 10) * superPow(a, lastBit))%1337;  
    }
};