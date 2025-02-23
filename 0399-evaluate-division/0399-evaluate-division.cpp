class Solution {
public:
    unordered_map<string , vector<pair<string, double>>> adj; 
    unordered_map<string , int> vis;

    bool dfs(string src , string dest , double &prod) {
        if(src == dest) return true;
        vis[src] = 1 ; 

        for(auto [v,w] : adj[src]) {
            if(!vis[v] && dfs(v, dest, prod)) {
                prod *= w;
                return true;
            }
        }
        return false;
    }

    vector<double> calcEquation(vector<vector<string>>& e, vector<double>& values, vector<vector<string>>& queries) {
        adj.clear();
        for(int i = 0 ; i < e.size() ; i++) {
            adj[e[i][0]].push_back({e[i][1] , values[i]}); 
            adj[e[i][1]].push_back({e[i][0] , 1 / values[i]});
        }

        vector<double>ans;

        for(auto i : queries) {
            vis.clear();

            string src = i[0] , dest = i[1];
            double prod = 1 ; 

            if(adj.find(src) == adj.end() or adj.find(dest) == adj.end()) ans.push_back(-1);
            else if (dfs(src, dest, prod)) ans.push_back(prod);
            else ans.push_back(-1);
        }

        return ans;
    }
};