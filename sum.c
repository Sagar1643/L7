#include <stdio.h>

int main() {
    int numbers[5], sum = 0;
    
    // Input five numbers
    printf("Enter five numbers: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    // Display the result
    printf("Sum: %d\n", sum);
    
    return 0;
}

