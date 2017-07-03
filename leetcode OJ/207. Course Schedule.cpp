class Solution {
public
    bool canFinish(int numCourses, vectorpairint, int& prerequisites) {
        vectorunordered_setint  adj(numCourses);
        vectorint indegree(numCourses, 0);
        存储有向图，并且计算每个点的入度
        for(int i = 0; i  prerequisites.size(); i++)
        {
            adj[prerequisites[i].first].insert(prerequisites[i].second);
            indegree[prerequisites[i].second]++;
        }
        入度为0的定点入队
        queueint q;
        for(int i = 0; i  numCourses; i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        int count = 0;
        while(!q.empty()){
            int v = q.front();
            q.pop();
            输出当前入度为0的定点，并且输出计数加1
            cout  v  endl;
            count ++;
            所有定点v的邻接定点入度减一，并且将入度为0的定点入队
            for(unordered_setintiterator itr = adj[v].begin(); itr != adj[v].end(); itr++){
                indegree[itr]--;
                if(indegree[itr] == 0)
                    q.push(itr);
            }
        }
        输出的定点数少于全部定点数，则表示图中有回路。所以拓扑排序可以用来判断有向图有无回路
        if(count  numCourses)
            return false;
        else
            return true;
    }
};