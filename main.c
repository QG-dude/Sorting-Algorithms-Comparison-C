/* Import dependencies */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// // Define prototypes
// int *bubbleSort(int *listElementsToSort, int numberElementsToSort);
#include "bubbleSort.h"

int main(int argc, char const *argv[])
{
    // Variables for listElementsToSort definition
    int i;
    time_t t;
    srand(time(&t));
    int numberElementsToSort = 10000;

    // Allocate memory and store listElementsToSort in the heap depending on the number of elements that must be sorted
    int *listElementsToSort = malloc(numberElementsToSort * sizeof(int));
    if (!listElementsToSort) // Check memory allocation success
    {
        printf("\nError memory allocation\n");
        return 1;
    }
    // Generate random numbers from -100 to 100
    printf("\nList of elements to sort : %d random numbers between -100 and +100 \n", numberElementsToSort);
    // printf("\nList of elements to sort (%d elements): \n", numberElementsToSort);
    for (i = 0; i < numberElementsToSort; i++)
    {
        listElementsToSort[i] = (rand() % 201) - 100;
        // printf(" %d\t", listElementsToSort[i]);
    }
    printf("\nList of %d elements to sort (preview, truncated for readability):\n", numberElementsToSort);
    for (i = 0; i < 5; i++)
        printf(" %d\t", listElementsToSort[i]);
    printf("...\t");
    for (i = numberElementsToSort - 5; i < numberElementsToSort; i++)
        printf(" %d\t", listElementsToSort[i]);

    printf("\n\nSorting using the Bubble Sort Algorithm : \n");
    // BUBBLE SORT START **********************************************************************************************
    clock_t start = clock();
    int *listElementsToSortBubbleSort = bubbleSort(listElementsToSort, numberElementsToSort);
    if (!listElementsToSortBubbleSort)
    {
        fprintf(stderr, "\nBubbleSort failed to allocate memory.\n");
        free(listElementsToSort);
        return 1;
    }
    printf("Sorted elements with the Bubble Sort Algorithm (preview, truncated for readability):\n");
    for (i = 0; i < 5; i++)
    {
        printf(" %d\t", listElementsToSortBubbleSort[i]);
    }
    printf("...\t");
    for (i = numberElementsToSort - 5; i < numberElementsToSort; i++)
    {
        printf(" %d\t", listElementsToSortBubbleSort[i]);
    }
    free(listElementsToSortBubbleSort);
    clock_t end = clock();
    double execution_time_bubbleSort = (end - start);
    printf("\nExecution time : %.4f seconds.\n", (double)(execution_time_bubbleSort) / CLOCKS_PER_SEC);
    // END OF BUBBLE SORT *********************************************************************************************

    free(listElementsToSort);
    return 0;
}
