class Solution {
public:
    double dfs(vector<vector<pair<int, double> > >& graph, int a, int b){
        int size = graph.size();
        vector<double> dist(size, 1.0);
        queue<int> q;
        q.push(a);
        vector<int> visit(size, 0);
        while(!q.empty()){
            int tmp = q.front();
            cout << "tmp1:" << tmp << endl;
            q.pop();
            cout << "graph[tmp].size()" << graph[tmp].size() << endl;
            for(int i = 0; i < graph[tmp].size(); i++){
                int next = graph[tmp][i].first;
                double value = graph[tmp][i].second;
                if(visit[next])
                    continue;
                cout << "tmp2:" << tmp << endl;
                dist[next] = dist[tmp] * value;
                cout << "tmp:" << dist[tmp] << endl;
                cout << next << tmp << ' ' << dist[next] << endl;
                if(next == b)
                    return  dist[next];
                visit[next] = 1;
                q.push(next);
            }
        }
        return -1.0;
    }
    vector<double> calcEquation(vector<pair<string, string>> equations, vector<double>& values, vector<pair<string, string>> queries) {
        vector<double> ans;
        vector<vector<pair<int, double> > > graph;  //每一行存的是一个节点的所有邻接节点和距离
        map<string, int> m;                 //存储字符串和整数的对应关系
        for(int i = 0; i < equations.size(); i++){
            string x = equations[i].first;
            string y = equations[i].second;
            if(m.count(x) == 0){
                m[x] = graph.size();
                vector<pair<int,double> > v;
                graph.push_back(v);
            }
            if(m.count(y) == 0){
                m[y] = graph.size();
                vector<pair<int,double> > v;
                graph.push_back(v);
            }
            int a = m[x], b = m[y];
            graph[a].push_back(pair<int, double>(b, values[i]));
            //cout << graph[a][graph[a].size() - 1].second << endl;
            graph[b].push_back(pair<int, double>(a, 1.0 / values[i]));
            //cout << graph[b][graph[b].size() - 1].second << endl;
        }
        
        for(int i = 0; i < queries.size(); i++){
            string x = queries[i].first;
            string y = queries[i].second;
            if(m.count(x) == 0 || m.count(y) == 0)
                ans.push_back(-1.0);
            else if(x == y)
                ans.push_back(1.0);
            else{
                
                int a = m[x], b = m[y];
                //cout << "a:" << a << " b:" << b << endl; 
                ans.push_back(dfs(graph, a, b));
            }
        }
        return ans;
    }
};