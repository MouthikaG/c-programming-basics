#include <stdio.h>
int main() {
    int cans[4] = {50, 100, 200, 300};  // Types of cans
    int count[4] = {4, 5, 3, 1};        // Available count of each type
    // Iterate through all possible combinations
    for (int i = 0; i <= count[0]; i++) {       // 50-litre cans
        for (int j = 0; j <= count[1]; j++) {   // 100-litre cans
            for (int k = 0; k <= count[2]; k++) { // 200-litre cans
                for (int l = 0; l <= count[3]; l++) { // 300-litre cans
                    int total = i * cans[0] + j * cans[1] + k * cans[2] + l * cans[3];
                    // Check if total is 500 or 250
                    if (total == 500) {
                        printf("Combination for 500 litres: %d x 50L, %d x 100L, %d x 200L, %d x 300L\n", i, j, k, l);
                    } else if (total == 250) {
                        printf("Combination for 250 litres: %d x 50L, %d x 100L, %d x 200L, %d x 300L\n", i, j, k, l);
                    }
                }
            }
        }
    }
    return 0;
}
