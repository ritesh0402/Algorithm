class Solution
{
public:
   vector<int> findOrder(int n, vector<vector<int>> &prerequisites)
   {
      vector<int> adj[n];
      vector<int> indegree(n, 0);
      vector<int> ans;

      for (auto x : prerequisites)
      {
         adj[x[1]].push_back(x[0]);
         indegree[x[0]]++;
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
         ans.push_back(t);
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
      if (ans.size() == n)
         return ans;
      return {};
   }
};

class Solution
{
public:
   vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
   {
      vector<vector<int>> adj(numCourses, vector<int>());
      for (auto &x : prerequisites)
      {
         adj[x[1]].push_back(x[0]);
      }

      vector<bool> vis(numCourses, false);
      vector<bool> pathVis(numCourses, false);
      vector<int> ans;

      for (int i = 0; i < numCourses; i++)
      {
         if (!vis[i])
         {
            if (checkCycleDfs(i, pathVis, vis, adj, ans))
               return {};
         }
      }
      reverse(ans.begin(), ans.end());
      return ans;
   }

   bool checkCycleDfs(int i, vector<bool> &pathVis, vector<bool> &vis, vector<vector<int>> &adj, vector<int> &ans)
   {
      vis[i] = true;
      pathVis[i] = true;

      for (auto &adjNode : adj[i])
      {
         if (!vis[adjNode])
         {
            if (checkCycleDfs(adjNode, pathVis, vis, adj, ans))
               return true;
         }
         else if (pathVis[adjNode])
         {
            return true;
         }
      }
      pathVis[i] = false;
      ans.push_back(i);

      return false;
   }
};
