# CustomVector

A C++ implementation of a dynamic array (vector) data structure.


## Overview
This is a C++ implementation of a dynamic array (vector) data structure that can hold a collection of elements of any data type. The data structure is dynamically resizable, meaning that its capacity grows or shrinks as elements are added or removed from it. The data structure has a similar interface to that of the standard std::vector class in the C++ Standard Library.

## Usage
To use this implementation of a dynamic array, simply include the vector.h header file in your C++ code and instantiate the Vector class template with the desired data type. For example, to create a vector of integers, you can do:

The follwing operations can be performed on a vector:
- `append()`: This method allows the user to add an element to the end of the list.
- `extend()`: This method allows the user to add multiple elements to the end of the list.
- `insert()`: This method allows the user to add an element at a specific index in the list.
- `remove()`: This method allows the user to remove the first occurrence of an element from the list.
- `pop()`: This method allows the user to remove an element from a specific index in the list, and returns the removed element.
- `index()`: This method allows the user to find the first occurrence of an element in the list, and returns its index.
- `count()`: This method allows the user to count the number of times an element appears in the list.
- `sort()`: This method allows the user to sort the elements in the list in ascending order.
- `reverse()`: This method allows the user to reverse the order of the elements in the list.

```cpp
#include "vector.h"

int main() {
    Vector<int> v;
    v.push_back(42);
    v.push_back(17);
    return 0;
}
```

Contributing
Contributions to this project are welcome. If you find a bug or want to suggest an improvement, please open an issue or submit a pull request.

License
This project is licensed under the MIT License - see the LICENSE file for details.
