
class Solution {
public:
    int mySqrt(int x) {
        long long st = 0, end = x, ans = 0;
        while (st <= end) {
            long long mid = st + (end - st) / 2;
            if (mid * mid == x) {
                return mid;
            } else if (mid * mid > x) {
                end = mid - 1;
            } else {
                ans = mid;
                st = mid + 1;
            }
        }

        return ans;
    }
};