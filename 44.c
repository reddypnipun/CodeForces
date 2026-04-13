#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        char row[9];
        int found_R = 0;
        
        for (int i = 0; i < 8; i++) {
            scanf("%s", row);
            
            if (strcmp(row, "RRRRRRRR") == 0) {
                found_R = 1;
            }
        }
        
        if (found_R) {
            printf("R\n");
        } else {
            printf("B\n");
        }
    }
    return 0;
}