# CustomVector

A C++ implementation of a dynamic array (vector) data structure.


## Overview
This is a C++ implementation of a dynamic array (vector) data structure that can hold a collection of elements of any data type. The data structure is dynamically resizable, meaning that its capacity grows or shrinks as elements are added or removed from it. The data structure has a similar interface to that of the standard std::vector class in the C++ Standard Library.

To use this implementation of a dynamic array, simply include the vector.h header file in your C++ code and instantiate the Vector class template with the desired data type. For example, to create a vector of integers, you can do:

The follwing operations can be performed on a vector:
- `push_back()`: This method allows the user to add an element to the end of the vector.
- `pop_back()`: This method allows the user to remove the last element from the vecotr.
- `insert()`: This method allows the user to add an element at a specific index in the vector.
- `front()`: This method retrieves the first element of the vector.
- `back()`: This method retrieves the last element of the vector.
- `at()` : : This method returns a specific element at valid index.
- `operator[]`: Returns a specific element at valid index
- `size()`: This method returns the size of the vector. 
- `capacity()`: This method returns the capacity of the underlying array. Note that the array may contain unused locations.
- `empty()`: This method returns `true` if the vector contains no objects, `false` otherwise.
- `clear()`: This method empties the vector of all objects.
- `erase()`:  This method removes an object from a valid index.
- `data()`: This method returns a constant pointer to the underlying array.

## Usage
You can use the `main.cpp` to create you own vector OR you can create your own file.
In the file you have to include `Vector.hpp`:

```cpp
#include "Vector.hpp"

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
