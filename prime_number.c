#include <stdio.h>
//#include <stdbool.h>
int isnumberprime(int num){
    if (num <= 1) return 0;
    int test[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int test_size = sizeof(test)/sizeof(test[0]);
    for (int i = 0; i < test_size; i++){
        if (num == test[i]) return 1;
        if (num % test[i]) return 0;
        }
    return 1;
}

int main(){
    float num;
    int num1;
    printf("Input your number: ");
    scanf("%f", &num);
    num1 = num;
    printf("Half of your number is %.2f\n", num/2);
    if (isnumberprime(num1)) printf("%d is a prime number", num1);
    else printf("%d is not a prime number", num1);
    return 0;
}