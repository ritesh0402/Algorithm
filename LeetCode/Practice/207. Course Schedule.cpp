class Solution
{
public:
   bool canFinish(int n, vector<vector<int>> &prerequisites)
   {
      vector<int> adj[n];
      vector<int> indegree(n, 0);
      // vector<int> ans;
      int cnt = 0;

      for (auto x : prerequisites)
      {
         adj[x[0]].push_back(x[1]);
         indegree[x[1]]++;
      }

      queue<int> q;
      for (int i = 0; i < n; i++)
      {
         if (indegree[i] == 0)
         {
            q.push(i);
         }
      }

      while (!q.empty())
      {
         auto t = q.front();
         // ans.push_back(t);
         cnt++;
         q.pop();

         for (auto x : adj[t])
         {
            indegree[x]--;
            if (indegree[x] == 0)
            {
               q.push(x);
            }
         }
      }
      // return ans.size() == n;
      return cnt == n;
   }
};

class Solution
{
public:
   bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
   {
      vector<vector<int>> adj(numCourses, vector<int>());
      for (auto &x : prerequisites)
      {
         adj[x[1]].push_back(x[0]);
      }

      vector<bool> vis(numCourses, false);
      vector<bool> pathVis(numCourses, false);
      for (int i = 0; i < numCourses; i++)
      {
         if (!vis[i])
         {
            if (checkCycleDfs(i, pathVis, vis, adj))
               return false;
         }
      }
      return true;
   }

   bool checkCycleDfs(int i, vector<bool> &pathVis, vector<bool> &vis, vector<vector<int>> &adj)
   {
      vis[i] = true;
      pathVis[i] = true;

      for (auto &adjNode : adj[i])
      {
         if (!vis[adjNode])
         {
            if (checkCycleDfs(adjNode, pathVis, vis, adj))
               return true;
         }
         else if (pathVis[adjNode])
         {
            return true;
         }
      }
      pathVis[i] = false;

      return false;
   }
};