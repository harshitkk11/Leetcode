class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;


        while(low<=high){
            long long mid = (low+high)/2;
            
            if ((mid*mid) > x){
                high = mid - 1;
            }
            if ((mid*mid)<=x){
                if (((mid+1)*(mid+1)) > x){
                    return mid;
                }
                low = mid+1;
            }
        }
        return 0;
    }
};
