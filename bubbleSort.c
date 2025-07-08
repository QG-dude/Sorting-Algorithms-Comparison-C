#include <stdlib.h>
#include <stdio.h>

int *bubbleSort(int *listElementsToSort, int numberElementsToSort)
{
    int i;
    // Copy listElementsToSort into listElementsToSortBubbleSort to preserve the original data before sorting
    int *listElementsToSortBubbleSort = malloc(numberElementsToSort * sizeof(int));
    for (i = 0; i < numberElementsToSort; i++)
    {
        listElementsToSortBubbleSort[i] = listElementsToSort[i];
    }

    // Variables for the outerLoop
    int i_outerLoop;
    int hasSwapped;

    // OUTERLOOP
    for (i_outerLoop = 0; i_outerLoop < numberElementsToSort - 1; i_outerLoop++)
    {
        hasSwapped = 0; // Initialize hasSwapped to 0 at the beginning of each iteration of the outerLoop

        // Variable for the innerLoop
        int i_innerLoop;
        int temp; // to swap elements

        // INNERLOOP
        for (i_innerLoop = 0; i_innerLoop < numberElementsToSort - 1 - i_outerLoop; i_innerLoop++)
        {
            if (listElementsToSortBubbleSort[i_innerLoop] > listElementsToSortBubbleSort[i_innerLoop + 1])
            {
                // If the current element is superior to the following element then the elements must be swapped
                temp = listElementsToSortBubbleSort[i_innerLoop];
                listElementsToSortBubbleSort[i_innerLoop] = listElementsToSortBubbleSort[i_innerLoop + 1];
                listElementsToSortBubbleSort[i_innerLoop + 1] = temp;
                hasSwapped = 1; // the hasSwapped variable is set to 1 (true)
            }
        }
        // END OF INNERLOOP

        if (hasSwapped == 0) // if hasSwapped still at 0 (false), then the list is sorted
        {
            // printf("\nEarly termination: no more swaps needed.");
            // printf("\nStopped at iteration # %d / %d\n", i_outerLoop + 1, numberElementsToSort);
            break;
        }
    }
    // END OF OUTERLOOP

    return listElementsToSortBubbleSort;
    // free(listElementsToSortBubbleSort); // memory related to listElementsToSortBubbleSort must be liberated in the main function.
}