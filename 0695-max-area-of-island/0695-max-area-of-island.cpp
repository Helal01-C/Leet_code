class Solution {
public:
    bool vis[55][55];
    vector<pair<int,int>> D ={{0,-1},{0,1},{-1,0},{1,0}};
    int n,m;
    int count , mx ;
    bool valid(int i,int j)
    {
        if(i < 0 || i >= n || j < 0 || j >= m)
               return false;
        return true;
    }
    void dfs(int si,int sj,vector<vector<int>>& grid)
    {
        vis[si][sj] = true;
        count++;
        for(int i=0;i<4;i++)
        {
            int ci = si + D[i].first;
            int cj = sj + D[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == 1)
            {
                dfs(ci,cj,grid);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size(); 
        mx = 0;
       memset(vis,false,sizeof(vis));
       for(int i=0;i<n;i++)
          for(int j=0;j<m;j++)
              if(!vis[i][j] && grid[i][j] == 1)
                {
                    count = 0;
                     dfs(i,j,grid);
                    mx = max(count , mx);
                }
                return mx;
    }
};