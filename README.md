# CustomVector

A C++ implementation of a dynamic array (vector) data structure.


## Overview
This is a C++ implementation of a dynamic array (vector) data structure that can hold a collection of elements of any data type. The data structure is dynamically resizable, meaning that its capacity grows or shrinks as elements are added or removed from it. The data structure has a similar interface to that of the standard std::vector class in the C++ Standard Library.

## Usage
To use this implementation of a dynamic array, simply include the vector.h header file in your C++ code and instantiate the Vector class template with the desired data type. For example, to create a vector of integers, you can do:

```cpp
Copy code
#include "vector.h"

int main() {
    Vector<int> v;
    v.push_back(42);
    v.push_back(17);
    return 0;
}
```

Methods
Vector()
Constructs an empty vector.

~Vector()
Destroys the vector and releases any memory allocated by it.

T& front() const
Returns a reference to the first element in the vector.

T& back() const
Returns a reference to the last element in the vector.

const T* data() const
Returns a const pointer to the underlying array.

void increaser_of_cap()
Doubles the capacity of the vector.

int size() const
Returns the number of elements in the vector.

int capacity() const
Returns the current capacity of the vector.

bool empty() const
Returns true if the vector is empty, false otherwise.

void clear()
Removes all elements from the vector.

Vector(const Vector<T>& other)
Constructs a vector that is a copy of the other vector.

Vector& operator=(const Vector<T>& other)
Assigns the contents of the other vector to this vector.

Vector(Vector<T>&& other)
Constructs a vector that is a move of the other vector.

Vector& operator=(Vector<T>&& other)
Assigns the contents of the other vector to this vector by move.

T& at(const int index) const
Returns a reference to the element at the specified index.

T& operator[](const int index) const
Returns a reference to the element at the specified index.

void insert(const int index, const T& element)
Inserts the specified element at the specified index.

Contributing
Contributions to this project are welcome. If you find a bug or want to suggest an improvement, please open an issue or submit a pull request.

License
This project is licensed under the MIT License - see the LICENSE file for details.
