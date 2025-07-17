class Solution {
public:
    bool divby13(string &s) {
        int remainder = 0;
        for (char digit : s) {
            int num = digit - '0';
            remainder = (remainder * 10 + num) % 13;
        }
        return remainder == 0;
    }
};
