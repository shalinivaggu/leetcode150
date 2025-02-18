class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt = 0 , maxAlt = 0 ; 

        for(int i = 0 ; i < gain.size() ; i++) {
            alt += gain[i] ;
            maxAlt = max(alt , maxAlt);
        }
        return maxAlt;
    }
};