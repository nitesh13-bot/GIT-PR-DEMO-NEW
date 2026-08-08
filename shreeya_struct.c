#include <stdio.h>

// Define a structure to hold your values
struct Results {
    int sum;
    float average;
};

struct Results calculate(int a, int b) {
    struct Results r;
    r.sum = a + b;
    r.average = (a + b) / 2.0;
    return r; // Returns both values packed inside the struct
}

int main() {
    struct Results res = calculate(10, 20);
    printf("Sum: %d, Avg: %.2f\n", res.sum, res.average);
    return 0;
}
