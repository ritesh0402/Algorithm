class Solution
{
public:
   int findCircleNum(vector<vector<int>> &isConnected)
   {
      int n = isConnected.size(), provinces = 0;
      vector<bool> visited(n, false);
      for (int i = 0; i < n; i++)
      {
         if (!visited[i])
         {
            dfs(i, visited, isConnected);
            provinces++;
         }
      }
      return provinces;
   }

   void dfs(int node, vector<bool> &visited, vector<vector<int>> &isConnected)
   {
      // stack<int> st;
      // st.push(node);
      // visited[node] = true;
      // while(!st.empty()){
      //     node = st.top();
      //     st.pop();
      //     for(int i=0; i<isConnected.size(); i++){
      //         if(isConnected[node][i] && !visited[i]){
      //             st.push(i);
      //             visited[i] = true;
      //         }
      //     }
      // }

      visited[node] = true;
      for (int i = 0; i < isConnected.size(); i++)
      {
         if (isConnected[node][i] && !visited[i])
         {
            dfs(i, visited, isConnected);
            visited[i] = true;
         }
      }
   }
};