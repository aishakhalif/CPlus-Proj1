/**
* @class Time
* @brief Class that creates a dynamic array
*
*
*
* @author Aisha Khalif
* @version 04
* @date 22/06/2016
*
*
*/

#ifndef Vector_hpp
#define Vector_hpp

#include <iostream>


template <class T>
class Vector
{

public:

	/**
	*@brief default constructor creates a vector sized 0
	*/
	Vector();

	/**
	* @brief Copy constructor
	*/
	Vector(const Vector <T>& vector);

	/**
	*@brief default destructor
	*/
	~Vector();

	/**
	* @brief Determines if the vector is empty.
	* @return true if the vector is empty and has no elements.
	*/
	bool IsEmpty() const;


	/**
	*@brief returns the length of the vector
	@return The length of the vector as an unsigned int
	*/
	unsigned int Length() const;

	/**
	* @brief Overloaded subscript operator
	* @param The index of the vector to get the item at
	* @return Reference to the item at the specified index
	*/
	T& operator[](unsigned index);


	/**
	* @brief Returns the index of the given value
	* @param The item to find.
	* @return The index of the value. -1 will be returned if values is not found.
	*/

	int GetIndexOf(const T& value) const;

	/**
	* @brief Returns the values at a given index.
	* @param The index of the values we want to get.
	* @param The values at that index.
	* @return void
	*/
	void GetValueAt(unsigned index, T& value) const;



	/**
	*@brief function to insert objects into the end vector
	*@param The item being inserter
	*return void
	*/
	void Push_Back(const T& value);

private:

	unsigned int vector_length;
	unsigned int vector_capacity;
	static const unsigned int max_capacity = 10;
	T *internalArray; //the elements in the vector

	// Function to ensure the vector is never more than half full
	void CheckVectorCapacity();

	// Expands the size of the vector by copying into a new vector
	void ExpandVector();

};

//------------------------------------Class Definition------------------------------------

// Default constructor
template <class T>
Vector<T>::Vector()
{
	vector_length = 0;
	vector_capacity = max_capacity;
	internalArray = new T[vector_capacity];
}

//copy constructor
template <class T>
Vector<T>::Vector(const Vector& vector)
{
	vector_length = vector.vector_length;
	vector_capacity = vector.vector_capacity;

	if (internalArray != NULL) {
		delete[] internalArray;
	}

	internalArray = new T[vector_capacity];

	for (unsigned i = 0; i < vector_length; i++)
	{
		internalArray[i] = vector.internalArray[i];
	}
}

//destructor
template <class T>
Vector<T>::~Vector()
{
	delete[] internalArray;
	internalArray = NULL;
}

//check if vector is empty
template <class T>
bool Vector<T>::IsEmpty() const
{
	return (vector_length == 0 && vector_capacity == max_capacity);
}

//gets the length of class
template<class T>
inline unsigned int Vector<T>::Length() const
{
	return vector_length;
}

//over loaded [] operator
template <class T>
T& Vector<T>::operator[](unsigned index)
{
	return internalArray[index];
}


// get the index of a particular value. Returns -1 if that value doesn't exist.
template <class T>
int Vector<T>::GetIndexOf(const T& value) const
{
	for (unsigned i = 0; i < vector_length; i++)
	{
		if (internalArray[i] == value) {
			return i;
		}
	}
	return -1;		// not found
}

// get the value at a particular index
template <class T>
void Vector<T>::GetValueAt(unsigned index, T& value) const
{
	value = internalArray[index];
}


// Adds a new value to the vector
template <class T>
void Vector<T>::Push_Back(const T& value)
{
	CheckVectorCapacity();
	internalArray[vector_length++] = value;
}


//checks the vectors capacity before expanding
template <class T>
void Vector<T>::CheckVectorCapacity()
{
	if (vector_capacity - vector_length == 0) {
		vector_capacity += max_capacity; // if true, vector must expand
		ExpandVector();
	}
	else if (vector_capacity - vector_length > max_capacity) {

		vector_capacity -= max_capacity; //if true, must shrink
		ExpandVector();
	}
}


// copies values into a new array to expand the size
template <class T>
void Vector<T>::ExpandVector()
{
	T* tempInternalArray = new T[vector_capacity];

	for (unsigned i = 0; i < vector_length; i++) {
		tempInternalArray[i] = internalArray[i];
	}

	//For testing purposes. If file contains 10 or less, this line should not show up
	//std::cout << "Expanded to... " << vector_capacity << std::endl;

	//delete
	delete[] internalArray;
	internalArray = tempInternalArray;
	tempInternalArray = NULL;
}


#endif
