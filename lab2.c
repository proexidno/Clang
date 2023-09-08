#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int lab2()
{
    float a1, a2, a3, a4, a5, a6, a7, a8, numsSum, numsProd, positiveNumsSum, buffer, localMax, localMin;
    short positiveCount, zeroCount;

    // 1
//    printf("\n\nInput #1:");
//    scanf("%f%f%f%f%f%f", &a1, &a2, &a3, &a4, &a5, &a6);
//    numsSum = a1 + a2 + a3 + a4 + a5 + a6;
//    numsProd = a1 * a2 * a3 * a4 * a5 * a6;
//    printf("The sum of nums is %s than the product of nums by %.2f", numsSum > numsProd ? "greater" : "less", numsSum > numsProd ? numsSum - numsProd : numsProd - numsSum);

    // 2
//    printf("\n\nInput #2:");
//    scanf("%f%f%f%f", &a1, &a2, &a3, &a4, &a5);
//    positiveNumsSum = (a1 > 0 ? a1 : 0) + (a2 > 0 ? a2 : 0) + (a3 > 0 ? a3 : 0) + (a4 > 0 ? a4 : 0) + (a5 > 0 ? a5 : 0);
//    printf("%.2f", positiveNumsSum);

    // 3
//    printf("\n\nInput #3:");
//    scanf("%f%f%f%f", &a1, &a2, &a3, &a4);
//    if (a1 < 0) a1 = 0;
//    if (a2 < 0) a2 = 0;
//    if (a3 < 0) a3 = 0;
//    if (a4 < 0) a4 = 0;
//    printf("%.2f, %.2f, %.2f, %.2f", a1, a2, a3, a4);

    // 4
//    printf("\n\nInput #4:");
//    scanf("%f%f%f%f%f%f%f%f", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8);
//    positiveCount = 0;
//    zeroCount = 0;
//    a1 == 0 ? zeroCount++ : (a1 > 0 ? positiveCount++ : 0);
//    a2 == 0 ? zeroCount++ : (a2 > 0 ? positiveCount++ : 0);
//    a3 == 0 ? zeroCount++ : (a3 > 0 ? positiveCount++ : 0);
//    a4 == 0 ? zeroCount++ : (a4 > 0 ? positiveCount++ : 0);
//    a5 == 0 ? zeroCount++ : (a5 > 0 ? positiveCount++ : 0);
//    a6 == 0 ? zeroCount++ : (a6 > 0 ? positiveCount++ : 0);
//    a7 == 0 ? zeroCount++ : (a7 > 0 ? positiveCount++ : 0);
//    a8 == 0 ? zeroCount++ : (a8 > 0 ? positiveCount++ : 0);
//    printf("Amount of positive: %d, amount of negative: %d", positiveCount, 8 - positiveCount - zeroCount);


    // 5
    // w/ arrays
//    short firstCompare, secondCompare;
//    printf("\n\nInput #5:");
//    float numbers[4];
//    scanf("%f%f%f%f", &numbers[0], &numbers[1], &numbers[2], &numbers[3]);
//    if (numbers[0] <= numbers[1]) firstCompare = 0;
//    else firstCompare = 1;
//    if (numbers[2] <= numbers[3]) secondCompare = 2;
//    else secondCompare = 3;
//    if (numbers[firstCompare] <= numbers[secondCompare]) printf("%d", firstCompare + 1);
//    else printf("%d", secondCompare + 1);


    // w/o arrays
//    printf("\n\nInput #5:");
//    scanf("%f%f%f%f", &a1, &a2, &a3, &a4);
//    if (a1 > a2) {
//        if (a2 > a3) {
//            if (a3 > a4) printf("4");
//            else printf("3");
//        } else {
//            if (a2 > a4) printf("4");
//            else printf("2");
//        }
//    } else {
//        if (a1 > a3) {
//            if (a3 > a4) printf("4");
//            else printf("3");
//        } else {
//            if (a1 > a4) printf("4");
//            else printf("1");
//        }
//    }

    // 6
//    printf("\n\nInput #6:");
//    scanf("%f%f%f%f", &a1, &a2, &a3, &a4);
//    printf("%.2f", fmax(fmax(a1, a2), fmax(a3, a4)) - fmin(fmin(a1, a2), fmin(a3, a4)));

    // 7
//    float K, M, N;
//    printf("\n\nInput #7:");
//    scanf("%f%f%f", &K, &M, &N);
//    if (K > M) {
//        buffer = K;
//        K = M;
//        M = buffer;
//    }
//    if (M > N) {
//        buffer = M;
//        M = N;
//        N = buffer;
//    }
//    if (K > M) {
//        buffer = K;
//        K = M;
//        M = buffer;
//    }
//    printf("%.2f, %.2f, %.2f", K, M, N);

    // 8
//    printf("\n\nInput #8:");
//    float localMax;
//    scanf("%f%f%f%f", &a1, &a2, &a3, &a4);
//    localMax = fmax(fmax(a1, a2), fmax(a3, a4));
//    if (a1 == localMax) buffer = fmax(fmax(a2, a3), a4);
//    if (a2 == localMax) buffer = fmax(fmax(a1, a3), a4);
//    if (a3 == localMax) buffer = fmax(fmax(a1, a2), a4);
//    if (a4 == localMax) buffer = fmax(fmax(a1, a2), a3);
//    printf("1st max: %.2f \t 2nd max: %.2f", localMax, buffer);


    // 9
//    printf("\n\nInput #9:");
//    scanf("%f%f%f", &a1, &a2, &a3);
//    float *ptrMax, *ptrMin;
//    if (a3 == fmax(fmax(a1, a2), a3)) ptrMax = &a3;
//    if (a2 == fmax(fmax(a1, a2), a3)) ptrMax = &a2;
//    if (a1 == fmax(fmax(a1, a2), a3)) ptrMax = &a1;
//
//    if (a3 == fmin(fmin(a1, a2), a3)) ptrMin = &a3;
//    if (a2 == fmin(fmin(a1, a2), a3)) ptrMin = &a2;
//    if (a1 == fmin(fmin(a1, a2), a3)) ptrMin = &a1;
//
//    buffer = *ptrMax;
//    *ptrMax = *ptrMin;
//    *ptrMin = buffer;
//    printf("%.2f, %.2f, %.2f", a1, a2, a3);

    return 0;
}
