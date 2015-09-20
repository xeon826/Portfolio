#include <iostream>
using namespace std;

 int *read_Array(const int *, int);
 void displayArray(const int *, int);
int main()
{
	// define array size
	const int SIZE = 20;

	// define the array
	int array1[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
		, 16, 17, 18, 19, 20};

	// define a pointer for the duplicate array
	int *dup;

	// duplicate the array
	dup = read_Array(array1, SIZE);

	// display the original array
	cout << "Here are the original arrays contents:\n";
	displayArray(array1, SIZE);

	// display the new array
	cout << "\nHere is the new array:\n";
	displayArray(dup, SIZE + 1);

	// free the dynamically allocated memory and
	// set the pointer to 0
	delete dup;
	dup = 0;
	system("pause");
	return 0;
}
int *read_Array(const int *arr, int size)
{
	int *newArray;

	//validate the size. if 0 or a negative
	// number was pass, return null
	if (size <= 0)
		return NULL;
	const int nsize = size + 1;
	// allocate a new array
	newArray = new int [nsize];
	// copy the array's contents to the 
	// new array
	for (int index = size; index > 0; --index)
		*(newArray + index) = *(arr + index - 1);
	*newArray = 0;

	// return a pointer to the new array
	return newArray;
}

void displayArray(const int *arr, int size)
{
	for (int index = 0; index < size; index++)
		cout << *(arr + index) << " ";
	cout << endl;
}
