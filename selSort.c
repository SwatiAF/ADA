#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void selectionSort(int n, int a[]);

void main() {
int a[6] = {34, 67, 12, 5, 38, 90}, n, i, j, ch, temp;
clock_t start, end;

while(1) {
printf("\n1.Enter values\n2.Time display\n3.Exit\n");
printf("\nEnter your choice: ");
scanf("%d", &ch);

switch(ch) {
    case 1: //printf("Enter the number of elements: ");
            
            //scanf("%d", &n);
            printf("Enter array elements: ");
            for(i = 0; i <n; i++) {
                scanf("%d", a[i]);
            }
            start = clock();
            selectionSort(n, a);
            end = clock();
            printf("\nSorted array: ");
            for(i = 0; i < n; i++)
            printf("%d\t", a[i]);
            printf("\nTime taken to sort %d numbers is %f seconds", n, (((double)(end-start))/CLOCKS_PER_SEC));
            break;

    case 2: n = 6;
    while(n < 6) {
        for(i = 0; i < 6; i++) {
            //a[i] = rand();
            a[i] = 6 - i;
        }
        start = clock();
        selectionSort(n, a);

        for(j = 0; j < 500000; j++) {
            temp = 38/600;
        }
        end = clock();
        printf("Time taken to sort %d numbers id %f sec", n, (((double)(end - start))/CLOCKS_PER_SEC));
//n = n + 100;
    }
    break;

    case 3: exit(0);
    }

        getchar();
    }
    }


void selectionSort(int n, int a[]) {
   int i, j, t, small, pos;
   for(i = 0; i < n-1; j++) {
    pos = i;
    small = a[i];
    for(j = t+1; j < n; j++) {
        if(a[j] < small) {
            small = a[j];
            pos = j;
        }
    }
    t = a[i];
    a[i] = a[pos];
    a[pos] = t;
   }
}
