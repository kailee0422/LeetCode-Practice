# Solution

## Recursive Function

The recurrence relation for Pascal's Triangle is:

- T(i, j) = T(i - 1, j) + T(i - 1, j - 1), for j > 0 and j < i  
- T(i, j) = 1, if j == 0 or j == i
 
Schematic diagram:
<br>
<img src="https://github.com/kailee0422/LeetCode-Practice/blob/main/Dynamic%20Programming/118.%20Pascal's%20Triangle/schematic%20diagram.png?raw=true" alt="schematic diagram" width="400"/>




## Tips

### Allocate Dynamic Array

#### Declare

**1-D array:**
```c
int* array = (int*)malloc(sizeof(int) * numOfSize);
```
**2-D array:**
```c
int** array = (int**)malloc(sizeof(int*) * numOfRow);
for (int i = 0; i < numOfRow; i++) {
    array[i] = (int*)malloc(sizeof(int) * numOfCol);
}
```
#### Free 
**1-D array:**
```c
free(array);
```
**2-D array:**
```c
for (int i = 0; i < numOfRow; i++) {
    free(array[i]);
}
free(array);
```
