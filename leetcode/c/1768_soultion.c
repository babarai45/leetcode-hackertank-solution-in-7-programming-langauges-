# include <stdio.h>
# include <stdlib.h>
# include <string.h>

char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int len = len1 + len2;
    char *res = (char *)malloc(sizeof(char) * (len + 1));
    int i = 0, j = 0, k = 0;
    while (i < len1 && j < len2) {
        res[k++] = word1[i++];
        res[k++] = word2[j++];
    }
    while (i < len1) {
        res[k++] = word1[i++];
    }
    while (j < len2) {
        res[k++] = word2[j++];
    }
    res[k] = '\0';
    return res;
}

int main() {
    char word1[] = "abc";
    char word2[] = "pqr";
    char *res = mergeAlternately(word1, word2);
    printf("%s\n", res);
    free(res);
    return 0;
}

// Output: apbqcr

// Complexity Analysis
// Time Complexity: O(N), where N is the length of the longest string among word1 and word2.
// Space Complexity: O(N), where N is the length of the longest string among word1 and word2.

// Testcase:
// $ gcc 1768_soultion.c -o 1768_soultion
// $ ./1768_soultion
// apbqcr

// LeetCode: https://leetcode.com/problems/merge-strings-alternately/
// Runtime: 0 ms, faster than 100.00% of C online submissions for Merge Strings Alternately.
// Memory Usage: 5.8 MB, less than 100.00% of C online submissions for Merge Strings Alternately.


// Approach 2: Using a single loop
// Algorithm:
// 1. Initialize two pointers i and j to 0.
// 2. Iterate over the characters of word1 and word2 simultaneously.


// char * mergeAlternately(char * word1, char * word2){
//     int len1 = strlen(word1);
//     int len2 = strlen(word2);
//     int len = len1 + len2;
//     char *res = (char *)malloc(sizeof(char) * (len + 1));
//     int i = 0, j = 0, k = 0;
//     while (i < len1 || j < len2) {
//         if (i < len1) {
//             res[k++] = word1[i++];
//         }
//         if (j < len2) {
//             res[k++] = word2[j++];
//         }
//     }
//     res[k] = '\0';
//     return res;
// }

// int main() {
//     char word1[] = "abc";
//     char word2[] = "pqr";
//     char *res = mergeAlternately(word1, word2);
//     printf("%s\n", res);
//     free(res);
//     return 0;
// }

// // Output: apbqcr

// // Complexity Analysis
// // Time Complexity: O(N), where N is the length of the longest string among word1 and word2.
// // Space Complexity: O(N), where N is the length of the longest string among word1 and word2.
