#Solution

## Recursive Function

The recurrence relation for Pascal's Triangle is:

- T(i, j) = T(i - 1, j) + T(i - 1, j - 1), for j > 0 and j < i  
- T(i, j) = 1, if j == 0 or j == i

![Uploading 螢幕擷取畫面 2025-07-17 092209.png…]()
<img width="406" height="402" alt="螢幕擷取畫面 2025-07-17 092209" src="https://github.com/user-attachments/assets/9cec70a6-0fc6-4fec-b4a8-a4cce0cb4235" />


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
