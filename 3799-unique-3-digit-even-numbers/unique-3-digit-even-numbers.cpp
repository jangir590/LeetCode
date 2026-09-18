class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {0};
        for (int digit : digits) {
            freq[digit]++;
        }
        int count = 0;
        for (int num = 100; num <= 999; num += 2) {
            int n = num;
            int a = n % 10;
            n /= 10;
            int b = n % 10;
            n /= 10;
            int c = n % 10;
            int need[10] = {0};
            need[a]++;
            need[b]++;
            need[c]++;
            bool possible = true;
            for (int j = 0; j <= 9; j++) {
                if (need[j] > freq[j]) {
                    possible = false;
                    break;
                }
            }
            if (possible) {
                count++;
            }
        }
        return count;
    }
};