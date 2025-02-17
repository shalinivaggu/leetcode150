class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ans = 0;
        int size = flowerbed.size();
        
        for(int i = 0; i < size; i++) {
            // Check if the current position is empty and the adjacent positions are also empty
            if (flowerbed[i] == 0 && 
                (i == 0 || flowerbed[i - 1] == 0) && 
                (i == size - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1; // Place a flower
                ans++; // Increment the count of flowers placed
            }
        }
        
        return ans >= n; // Return true if we can place at least n flowers
    }
};