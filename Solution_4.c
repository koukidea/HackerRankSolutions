#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int temp=0,sum,diff;
    if (*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    
    sum = *a + *b;
    diff = *a - *b;
    
    *a = sum;
    *b = diff;
     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}