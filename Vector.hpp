#pragma once
//using namespace std;
template<typename T>
class Vector
{
private:
	T* m_elements;
	int m_nrOfElements = 0;
	int m_capacity = 0;
	

public:
	Vector() {
		this->m_capacity = 10;
		this->m_nrOfElements = 0;
		this->m_elements = new T[m_capacity];
	}
	~Vector() {
		delete[] m_elements;
	}

	T& front() const {
		if (m_nrOfElements == 0)
		{
			throw std::runtime_error("Could not retrieve the first entry from the vector.");
		}
		return m_elements[0];
	}
	//return index 0;

	T& back() const {
		if (m_nrOfElements == 0)
		{
			throw std::runtime_error("Could not retrieve the last entry from the vector.");
		}
		return m_elements[m_nrOfElements-1];
	}
	//return index last;

	const T* data() const {
		return m_elements;
	}
	//return const pointer to array;
	void increaser_of_cap() {
		//m_capacity *= 2;
		T* temp_array_capacity = new T[2 * m_capacity];
		for (int i = 0; i < m_nrOfElements; i++)
		{
			temp_array_capacity[i] = m_elements[i];
		}
		delete[] m_elements;
		m_capacity *= 2;
		m_elements = temp_array_capacity;	
	}

	int size() const {
		return m_nrOfElements;
	}
	int capacity() const {
		return m_capacity;
	}
	bool empty() const {
		if (m_nrOfElements == 0)
		{
			return true;
		}
		return false;
	}
	void clear() {
		m_nrOfElements = 0;
	}
	
	Vector(const Vector<T>& other) {
		this->m_nrOfElements = other.m_nrOfElements;
		this->m_capacity = other.m_capacity;
		this->m_elements = new T [other.m_capacity];
		for (int i = 0; i < other.m_nrOfElements; i++)
		{
			m_elements[i] = other.m_elements[i];
		}
	}
	Vector& operator=(const Vector<T>& other) {
		if (this != &other)
		{
			delete[] m_elements;

			this->m_elements = new T[other.m_capacity];
			this->m_capacity = other.m_capacity;
			this->m_nrOfElements = other.m_nrOfElements;

			for (int i = 0; i < other.m_nrOfElements; i++)
			{
				m_elements[i] = other.m_elements[i];
			}
			
		}
		return *this;
	}
	Vector(Vector<T>&& other) {
		this->m_capacity = other.m_capacity;
		this->m_nrOfElements = other.m_nrOfElements;
		this->m_elements = other.m_elements;
		//other.m_capacity = 0;
		other.m_nrOfElements = 0;
		other.m_elements = new T[m_capacity];
	}
	Vector& operator=(Vector<T>&& other) {
		if (this != &other)
		{
			this->m_capacity = other.m_capacity;
			this->m_nrOfElements = other.m_nrOfElements;
			this->m_elements = other.m_elements;
			other.m_capacity = 0;
			other.m_nrOfElements = 0;
			other.m_elements = nullptr;
		}
		return *this;
	}

	T& at(const int index) const {
		if (index >= m_nrOfElements || index < 0)
		{
			throw std::runtime_error("error");
		}
		return m_elements[index];
	}

	T& operator[](const int index) const {
		if (index >= m_nrOfElements || index < 0)
		{
			throw std::runtime_error("error");
		}
		return m_elements[index];
	}

	void insert(const int index, const T& element) {
		// check if the index is valid!
		if (index >= 0 && index <= m_nrOfElements) {
		    // Check if index is the last element!
		    if (index == m_nrOfElements) {
		        push_back(element);
		    }
		    else {
		        // Check if the array is full!
		        if (m_nrOfElements == m_capacity) {
		            T* temp = new T[2 * m_capacity];
		            // Copying old array elements to the new array
		            for (int i = 0; i < m_capacity; i++) {
		                temp[i] = m_elements[i];
		            }
		            delete[] m_elements;
		            m_capacity *= 2;
		            m_elements = temp;
		            // Add the element to the end of the array!
		            for (int i = (m_nrOfElements - 1); i >= index; i--) {
		                m_elements[i + 1] = m_elements[i];
		            }
		            m_elements[index] = element;
		            m_nrOfElements++;
		        }
		        // Check if the array is empty!
		        else if (m_nrOfElements == 0) {
		            m_elements[0] = element;
		            m_nrOfElements++;
		        }
		        else {
		            for (int i = (m_nrOfElements - 1); i >= index; i--) {
		                m_elements[i + 1] = m_elements[i];
		            }
		            m_elements[index] = element;
		            m_nrOfElements++;
		        }
		    }
		}
		// the index is not valid!
		else {
		    return;
		}
	}
	void erase(const int index) {
		if (index <= m_nrOfElements && index >= 0)
		{
			for (int i = index; i < (m_nrOfElements - 1); i++)
			{
				this->m_elements[i] = m_elements[i + 1];

			}

			m_nrOfElements--;
		}
	}
	void push_back(const T& element) {
		if (m_nrOfElements == m_capacity)
		{
			increaser_of_cap();
		}

		m_elements[m_nrOfElements] = element;
		m_nrOfElements++;
	}

	void pop_back() {
		if (m_nrOfElements > 0)
		{
			m_nrOfElements - 1;
			m_elements[m_nrOfElements] = T();
		}
	}
};

