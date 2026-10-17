#include <stdio.h>
long long sum(const int a[], int n) {
    long long total = 0;
    for (int i = 0; i < n; i++) total += a[i];
    return total;
}
void print_array(const int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    putchar('\n');
}
count_above(const int a[], int n, int limit){
    long long total = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > limit) total += 1;
    }
    return total;
}
int main(void) {
    int a[] = {4, -2, 7, 0};
    int n = (int)(sizeof a / sizeof a[0]);
    print_array(a, n);
    printf("Sum = %lld\n", sum(a, n));
    printf("Prefix = %lld\n", sum(a, 2));
    printf("Empty = %lld\n", sum(a, 0));
    printf("Over limit = %11d\n", count_above(a, 4, 0));
    return 0;
}
