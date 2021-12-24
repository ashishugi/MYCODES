class Solution {
public:
    vector<int> getAns(vector<vector<int> > &edges, vector<int>& indegree, int nodes){
        vector<int> res;
        queue<int> q;
        for(int i=0;i<nodes;i++){
            if(indegree[i] == 0) {
                q.push(i);
            }
            cout<<indegree[i]<< " ";
        }
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            res.push_back(curr);
            for(int i=0;i<edges[curr].size();i++){
                indegree[edges[curr][i]]--;
                if(indegree[edges[curr][i]] == 0) {
                    q.push(edges[curr][i]);
                }
            }
        }
        if(res.size() != nodes) {
            return {};
        }
        return res;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int> > edges(numCourses);
        vector<int> indegree(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            int u = prerequisites[i][0];
            int v =prerequisites[i][1];
            edges[v].push_back(u);
            indegree[u]++;
        }
        vector<int> res = getAns(edges,indegree,numCourses);
        return res;
    }
};