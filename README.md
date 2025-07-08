# Sorting Algorithms Comparison in C (Work In Progress)

This project compares sorting algorithms written in C. For now, only **Bubble Sort** is implemented, with execution time measurement using `clock()`.

## Implemented
- Bubble Sort

## Coming Soon
Other sorting algorithms like Merge Sort, Quick Sort, and Heap Sort will be added.

## Compilation
```bash
gcc main.c bubbleSort.c -o comparison
```

## Output
```text
List of elements to sort : 10000 random numbers between -100 and +100

List of 10000 elements to sort (preview, truncated for readability):
 77      -94     55      -26     22     ...      -32     5       47      -55     12

Sorting using the Bubble Sort Algorithm :
Sorted elements with the Bubble Sort Algorithm (preview, truncated for readability):
 -100    -100    -100    -100    -100   ...      100     100     100     100     100
Execution time : 0.1340 seconds.
```