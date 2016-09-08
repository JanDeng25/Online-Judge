class Solution {
public:
    //solution3:Binary Search
    int countNum(vector<vector<int>>& matrix, int num){
        int n = matrix.size();
        int i = n - 1, j = 0, count = 0;
        while(i >= 0 && j <= n-1){
            if(matrix[i][j] <= num)
            {
                count += i+1;
                j ++;
            }
            else
                i --;
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        int n = matrix.size();
        /*
        //solution1: priority_queue with all elements
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < n; j++){
                     pq.push(matrix[i][j]);
            }
        }
        while(pq.size() > k){
            pq.pop();
        }
        return pq.top();
        */
        /*
        //solution2: optimized solution1
        for(int i = 0; i < k && i < n; i ++){
            for(int j = 0; j < k/(i+1) && j < n; j++){
                if(pq.size() < k)
                    pq.push(matrix[i][j]);
                else{
                    if(matrix[i][j] < pq.top())
                    {
                        pq.pop();
                        pq.push(matrix[i][j]);
                    }
                    
                }
            }
        }
        return pq.top();
        */
        //solution3:Binary Search
        int low = matrix[0][0], high = matrix[n-1][n-1], mid;
        while(low <= high){
        mid = low + (high - low) / 2;
        int count = countNum(matrix, mid);
        if(count < k)
            low = mid + 1;
        else
            high = mid - 1;
        }
        return low;
    }
};