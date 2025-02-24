class Solution {
public:
    int canEatInTime(vector<int>& piles , int mid ) {
        int hours = 0 ; 
        for(auto i : piles) {
            hours += (i / mid) ;
            if(i % mid != 0) hours++;
        }
        return hours ;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1 ; 
        int right = *max_element(piles.begin() , piles.end());

        while(left < right) {
            int mid = (left + right) / 2;
            if(canEatInTime(piles , mid ) <= h) right = mid  ;
            else left = mid + 1;
        }
        return left;
    }
};