# C++ Hash Table

## Package
```cpp
#include <unordered_map>
#include <unordered_set>
```

## Hash Map `<unordered_map>`

### Data Structure
A hash map stores key-value pairs. In C++:
```cpp
std::unordered_map<std::string, int> umap;
```
This means a `std::string` key mapped to an `int` value.

### Initialize
```cpp
umap[key] = value;
// If key does not exist, umap[key] is initialized to 0
```

### Erase
```cpp
umap.erase("key");
```

### Loop
```cpp
for (const auto& n : umap) {
    std::cout << "key: " << n.first << ", value: " << n.second << "\n";
}
```

### Clear
```cpp
umap.clear();
```

### Condition
```cpp
if (umap.find(value_you_want_to_search) == umap.end()) {
    // Value not found
}
```

## Hash Set `<unordered_set>`

### Declare
```cpp
std::unordered_set<int> myunordered_set{1, 2, 3, 4, 5};
```

### Insert
```cpp
myunordered_set.insert(value);
```

### Erase
```cpp
myunordered_set.erase(value);
```

### Loop
```cpp
for (const auto& n : myunordered_set) {
    std::cout << "value: " << n << "\n";
}
```

### Condition
```cpp
if (myunordered_set.count(value)) {
    // Value exists in set
}
```
