#include <stdio.h>

#define NO 3

int main()
{
    int point[][2] = {
        {80,80}, // ei, suu
        {100,98},
        {60, 80},
    };

    int i,j,sum;
    int psum[NO];
    double av;

    sum = 0;
    for(i=0;i<NO;i++)  sum += point[i][0];
    av = (double) sum / NO;
    printf("average suugaku = %5.1f\n", av);

    sum = 0;
    for(i=0;i<NO;i++) sum += point[i][1];
    av = (double) sum / NO;
    printf("average english = %5.1f\n", av);

    printf("\n");

    for(i=0;i<NO;i++) {
        psum[i] = 0;
        for(j=0;j<2;j++) {
            psum[i] += point[i][j];
        }

        printf("ID [%d] Total Point = %d\n" , i+1, psum[i]);
    }    

    return 0;
}