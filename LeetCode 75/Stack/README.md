# C++ Stack

This guide explains how to use stack in C++ with `stack` from the STL.

<img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" alt="C++ Logo" width="100"/>

## Package
Include these headers to use hash maps and sets:
```cpp
#include <stack>
```

### Data Structure
A stack is defined as a linear data structure that is open at one end and the operations follow the **Last-In-First-Out** (LIFO) order.

```cpp
std::stack<data_type> mystack;
```
This declares a stack to store data of data_type.

### Push data to stack
```cpp
mystack.push(value)
```

### Pop data from stack
```cpp
if(!mystack.empty()){
  mystack.pop( );
}
```
### Read first data from stack
```cpp
mystack.top( )
```

### Size of stack
```cpp
mystack.size( )
```
