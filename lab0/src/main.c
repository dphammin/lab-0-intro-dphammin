#include <stdio.h>

int main(void) {
    int x = 0;  
    int y = 0;  

    while (1) { 
        x++;
        if (x >= 10) { 
            x = 0; 
            y++;   
        }
    }
    return 0; 
}
