class Solution {
public
    bool canFinish(int numCourses, vectorpairint, int& prerequisites) {
        vectorunordered_setint  adj(numCourses);
        vectorint indegree(numCourses, 0);
        �洢����ͼ�����Ҽ���ÿ��������
        for(int i = 0; i  prerequisites.size(); i++)
        {
            adj[prerequisites[i].first].insert(prerequisites[i].second);
            indegree[prerequisites[i].second]++;
        }
        ���Ϊ0�Ķ������
        queueint q;
        for(int i = 0; i  numCourses; i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        int count = 0;
        while(!q.empty()){
            int v = q.front();
            q.pop();
            �����ǰ���Ϊ0�Ķ��㣬�������������1
            cout  v  endl;
            count ++;
            ���ж���v���ڽӶ�����ȼ�һ�����ҽ����Ϊ0�Ķ������
            for(unordered_setintiterator itr = adj[v].begin(); itr != adj[v].end(); itr++){
                indegree[itr]--;
                if(indegree[itr] == 0)
                    q.push(itr);
            }
        }
        ����Ķ���������ȫ�������������ʾͼ���л�·����������������������ж�����ͼ���޻�·
        if(count  numCourses)
            return false;
        else
            return true;
    }
};