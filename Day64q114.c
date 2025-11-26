#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    int freq[256] = {0};   // frequency of characters
    int left = 0, right = 0;
    int maxLen = 0;

    while (right < n) {
        char ch = s[right];
        freq[(unsigned char)ch]++;

        // If character repeated, shrink the window from left side
        while (freq[(unsigned char)ch] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }

        // Update maximum length
        int currentLen = right - left + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;

        right++;
    }

    printf("%d", maxLen);
    return 0;
}
