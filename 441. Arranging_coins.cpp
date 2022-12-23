class Solution {
public:
    int arrangeCoins(int n) {
        int first = 1, last = n;

        while(first<=last){
            long mid = first + (last - first)/2;
            long a = (mid*(mid+1))/2;

            if(a)
        }
    }
};
