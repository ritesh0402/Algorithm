class Solution
{
public:
   bool possibleBipartition(int n, vector<vector<int>> &dislikes)
   {
      vector<int> color(n + 1, 0);
      vector<vector<int>> graph(n + 1, vector<int>());
      for (auto &x : dislikes)
      {
         graph[x[0]].push_back(x[1]);
         graph[x[1]].push_back(x[0]);
      }

      // // bfs
      // queue<int> q;
      // for(int i=1; i<=n; i++){
      //     if(color[i]!=0) continue;
      //     q.push(i);
      //     color[i]=1;
      //     int parentNode;
      //     while(!q.empty()){
      //         parentNode = q.front();
      //         q.pop();
      //         for(auto& adjNode: graph[parentNode]){
      //             if(color[adjNode] == 0){
      //                 color[adjNode] = -color[parentNode];
      //                 q.push(adjNode);
      //             }else if(color[adjNode] == color[parentNode]){
      //                 return false;
      //             }
      //         }
      //     }
      // }

      // dfs
      stack<int> st;
      for (int i = 1; i <= n; i++)
      {
         if (color[i] != 0)
            continue;
         st.push(i);
         color[i] = 1;
         int parentNode;

         while (!st.empty())
         {
            parentNode = st.top();
            st.pop();
            for (auto &adjNode : graph[parentNode])
            {
               if (color[adjNode] == 0)
               {
                  color[adjNode] = -color[parentNode];
                  st.push(adjNode);
               }
               else if (color[adjNode] == color[parentNode])
               {
                  return false;
               }
            }
         }
      }

      return true;
   }
};
