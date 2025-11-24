#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    
    int prev, curr;
    scanf("%d", &prev);
    
    int peaks = 0;
    int in_increasing = 0;
    
    for (int i = 1; i < n; i++) {
        scanf("%d", &curr);
        
        if (curr > prev) {
            in_increasing = 1;
        } else {

            if (in_increasing) {
                peaks++;  
                in_increasing = 0;
            }
        }
        
        prev = curr;
    }
    
    if (in_increasing) {
        peaks++;
    }
    
    printf("%d\n", peaks);
    
    return 0;
}

