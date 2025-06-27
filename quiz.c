#include <stdio.h> 

void odd_or_even(int num){
    if (num % 2 == 0) printf("%d is Even\n", num);
    else if (num % 2 != 0) printf("%d is Odd\n", num);
}
int main(){;
    float num;
    printf("input your number: ");
    scanf("%f", &num);
    if (num >= 100) {
        printf("%.1f is exceed the limit\n", num);
        return 0;}
    else odd_or_even(num);

    return 0;
}