class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        /*对每一个格子的情况考虑，在边缘的周长先加1，否则判断上下左右是否为0
        int perimeter = 0;
        if(grid.size() == 0)
            return perimeter;
        int w = grid.size();
        int d = grid[0].size();
        for(int i = 0; i < w; i++){
            for(int j = 0; j < d; j++){
                if(grid[i][j]){
                    if(i == 0 || i == w - 1){
                        //perimeter ++;
                        if(i == 0){ 
                            perimeter ++;
                            if(i + 1 < w && !grid[i+1][j])
                                perimeter++;
                        }
                        if(i == w - 1){
                            perimeter ++;
                            if(i - 1 >= 0 && !grid[i-1][j])
                                perimeter++;
                        }
                    }
                    else{
                        if(!grid[i-1][j])
                            perimeter++;
                        if(!grid[i+1][j])
                            perimeter++;
                    }
                    if(j == 0 || j == d - 1){
                        //perimeter ++;
                        if(j == 0){  
                            perimeter++;
                            if(j + 1 < d && !grid[i][j+1])
                                perimeter++;
                        }
                        if(j == d - 1){ 
                            perimeter++;
                            if(j - 1 >= 0 && !grid[i][j-1])
                                perimeter++;
                        }
                    }
                    else{
                        if(!grid[i][j+1])
                            perimeter++;
                        if(!grid[i][j-1])
                            perimeter++;
                    }
                }
                //cout << perimeter << endl;
            }
        }
        return perimeter;*/
        int count = 0, next = 0;
        for(int i = 0; i < grid.size();i ++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j]){
                    count++;
                    if(i != 0 && grid[i-1][j])  next++;
                    if(j != 0 && grid[i][j-1])  next++;
                }
            }
        }
        return 4 * count - 2 * next;
    }
};