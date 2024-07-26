#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    clock_t t_start=clock();
    int i,n,j,temp,min,mj;
    printf("Enter the element in an array :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        a[i]=rand()%999;

    }
    for(j=0;j<n;j++){
        min = a[j];
        mj=j;
        for(i=j+1;i<n;i++){
            if(a[i]<min){
                min=a[i];
                mj=i;
            }
        }
        temp=a[j];
        a[j]=a[mj];
        a[mj]=temp;

    }
    printf("Sorted array is : ");
    for(i=0;i<n;i++){
        printf("Sorted array is : ");
        printf("%d\n ",a[i]);
    }
    clock_t t_end=clock();
    double time_taken = (double)(t_end - t_start) / (double)CLOCKS_PER_SEC;
    printf("Time taken is %f seconds\n", time_taken);
    return 0;

}

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// void selectionSort(int arr[], int n)
// {
//     int i, j, min_idx, temp;
//     // One by one move boundary of unsorted subarray
//     for (i = 0; i < n - 1; i++)
//     {
//         // Find the minimum element in unsorted array
//         min_idx = i;
//         for (j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[min_idx])
//                 min_idx = j;
//         }
//         // Swap the found minimum element with the first element
//         if (min_idx != i)
//         {
//             temp = arr[min_idx];
//             arr[min_idx] = arr[i];
//             arr[i] = temp;
//         }
//     }
// }
// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }
// // program to test above functions
// int main()
// {
//     int i, n;
//     clock_t start, end;
//     double cpu_time_used;
//     printf("Enter the value of n:");
//     scanf("%d", &n);
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {

//         arr[i] = rand() % 1000;
//         printf("%d ", arr[i]);
//     }
//     start = clock();
//     selectionSort(arr, n);
//     end = clock();
//     cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     printf("Execution time: %f seconds\n", cpu_time_used);
//     return 0;
// }
