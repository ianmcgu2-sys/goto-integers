#include <stdio.h>
#include <stdlib.h>
#include "C10.h"

void printNums(int m, int n){
    int arr[10];
    if (m == 0) ++m;
    
    start: 
    if (m<=n) goto LT1;
    goto LT0;


    LT1:
    arr[2] = m;
    if (m == 0) goto LN0;
    arr[4] = 0;
    L4: if(arr[2]) goto L5;
    goto L6;
    L5: arr[2] = arr[2] / 10;
    arr[4] = arr[4] + 1;
    goto L4;

    LN0: arr[4] = 1;    

    L6: arr[5] = 0;
    arr[6] = m;
    L7: if(arr[4]) goto L8;
    goto L9;
    L8: arr[5] = arr[5] * 10 + (arr[6] % 10);
    arr[6] = arr[6] / 10;
    arr[4] = arr[4] - 1;
    goto L7;
    L9:
    arr[7] = m == arr[5];

    if(arr[7]) goto LT3;
    ++m;
    goto start;

    LT3: arr[0] = 2;
    L0: if(arr[0]*arr[0] <= m) goto L1;
    goto L2;
    L1: if((m % (arr[0] * arr[0])) == 0) goto L3;
    arr[0] = arr[0] + 1;
    goto L0;
    L2: arr[1] = 1;
    goto LT2;
    L3: arr[1] = 0;

    LT2:
    if(arr[1]) printf("%d\n", m);
    ++m;
    goto start;

    LT0: ;
}