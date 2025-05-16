#include <stdio.h>
#include <string.h>

void string_matching(char* pat, char* txt) {
    int m = strlen(pat); 
    int n = strlen(txt); 
    int i, j;
    
   
    for(i = 0; i <= n - m; i++) {  
        for(j = 0; j < m; j++) {
            if(txt[i + j] != pat[j]) {
                break;  
            }
        }
        if (j == m) {  
            printf("Pattern found at index %d\n", i);
        }
    }
}

int main() {
    char txt1[] = "AABAACAADAABAABA";
    char pat1[] = "AABA";
    printf("Example 1:\n");
    string_matching(pat1, txt1);
    
    char txt2[] = "agd";
    char pat2[] = "g";
    printf("\nExample 2:\n");
    string_matching(pat2, txt2);

    return 0;
}

