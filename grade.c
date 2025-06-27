#include <stdio.h>
//binary search
float grade (int score){
    int grade_score[] = {50,55,60,65,70,75,80};
    float gpa[] = {1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0};
    if (score > 100 || score < 0) {printf("Error\n"); return -1.0;}
    if (score < 50) return 0.0;

    int left = 0, right = sizeof(grade_score)/sizeof(grade_score[0]);
    while (left < right) {
        int m = (left + right)/2;
        if (score < grade_score[m]) right = m;
        else left = m + 1;
    }
    return gpa[left-1];
}
int main()
{
    int score; 
    printf("Input Score: ");
    scanf("%d", &score);

    float result = grade(score);
    if (result != -1.0) printf("Grade: %.1f\n", result);

    return 0;
}