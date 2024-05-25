#include <stdio.h>
#include <string.h>

void concat(char dest[], const char src[]);

int main(void) {
    char dest[100] = "a"; // Make sure the destination has enough space
    const char src[] = "bc";
    
    concat(dest, src);
    printf("Result: %s\n", dest); // Print the concatenated result
    return 0;
}

void concat(char dest[], const char src[]) {
    int dp = 0, sp = 0;
    if (dest != NULL) {
        // Find the end of the destination string
        while (dest[dp] != '\0') {
            dp++;
        }

        if (src != NULL) {
            // Append the source string to the destination string
            while (src[sp] != '\0') {
                dest[dp++] = src[sp++];
            }
            dest[dp] = '\0'; // Null-terminate the concatenated string
        }
    }
}
