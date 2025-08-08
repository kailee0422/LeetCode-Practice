# C++ Hash Table

This guide explains how to use hash tables in C++ with `unordered_map` and `unordered_set` from the STL.
<img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" alt="C++ Logo" width="100"/>

## Package
Include these headers to use hash maps and sets:
```cpp
#include <unordered_map>
#include <unordered_set>
```

## Hash Map `<unordered_map>`

### Data Structure
A hash map stores key-value pairs with unique keys.
```cpp
std::unordered_map<std::string, int> umap;
```
This declares a hash map from `std::string` to `int`.

### Initialize
You can assign values to keys like this:
```cpp
umap[key] = value;
// If the key does not exist, umap[key] is initialized to 0
```

### Erase
Remove an element by key:
```cpp
umap.erase("key");
```

### Loop
Iterate over all key-value pairs:
```cpp
for (const auto& n : umap) {
    std::cout << "key: " << n.first << ", value: " << n.second << "\n";
}
```

### Clear
Remove all elements:
```cpp
umap.clear();
```

### Condition
Check if a key exists:
```cpp
if (umap.find(value_you_want_to_search) == umap.end()) {
    // Key not found
}
```

## Hash Set `<unordered_set>`

### Declare
A hash set stores unique values:
```cpp
std::unordered_set<int> myunordered_set{1, 2, 3, 4, 5};
```

### Insert
Add a value to the set:
```cpp
myunordered_set.insert(value);
```

### Erase
Remove a value:
```cpp
myunordered_set.erase(value);
```

### Loop
Iterate through all values:
```cpp
for (const auto& n : myunordered_set) {
    std::cout << "value: " << n << "\n";
}
```

### Condition
Check if a value exists:
```cpp
if (myunordered_set.count(value)) {
    // Value exists in the set
}
```
