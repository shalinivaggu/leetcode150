class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> visited(n , 0 );
        stack<int> s; 
        visited[0] = 1;
        for(int i : rooms[0]) {
            s.push(i);
        }

        while(!s.empty()) {
            int key = s.top(); 
            s.pop();
            if(!visited[key]) {
                visited[key] = 1 ;
                for(int i : rooms[key]) {
                    if(!visited[i])s.push(i);
                }
            }
        }

        for(auto i  : visited) {
            if (i == 0) return false;
        }

        return true;
    }
};