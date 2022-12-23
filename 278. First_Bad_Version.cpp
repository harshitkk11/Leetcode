// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int first = 1;
        int last = n;

        while(first<=last){
            long version = first + (last - first)/2;

            if(isBadVersion(version) == true){
                if(isBadVersion(version-1) == false){
                    return version;
                }
                else last = version-1;
            }

            else if(isBadVersion(version) == false){
                first = version+1;
            }
        }
        return 0;
    }
};
