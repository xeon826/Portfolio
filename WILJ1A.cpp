// Joshua Wilkeson CS2250 
#include <iostream>
#include <cstdlib>
#include <ctime>
void Mode(int[], int);
void read_array(int[], int);
void print_array(int[], int);
int main()
{
	srand(time(0));
	const int SIZE = 101;
	int numbers[SIZE];
	read_array(numbers, SIZE);
	print_array(numbers, SIZE);
	Mode(numbers, SIZE);
	system("pause");
	return 0;
}
void read_array(int numArray[], int SIZE)
{
	for (int counter = 1; counter < SIZE; counter++)
	{
		numArray[counter] = (rand() % 30) + 1;
	}
}
void print_array(int numArray[], int SIZE)
{
	for (int counter = 1; counter < SIZE; counter++)
	{
		std::cout << numArray[counter] << " ";
		if (counter%10 == 0)
			std::cout << std::endl;
	}
}
void Mode(int numArray[], int SIZE)
{
	int possibleModes[31];
	// setting modes elements to 0
	for (int counter = 1; counter <= 30; counter++)
		possibleModes[counter] = 0;
	/*creating the list that says how many of each number there are, the index of
	the number being the number itself and the value of the array at this index/number
	being the amount of times said number appears in the array*/
	for (int value = 1; value <= 30; value++)
		for (int index = 1; index < SIZE; index++)
		if (numArray[index] == value)
			possibleModes[value]++;
	//array to store the index of the modes
	int modes[31];
	//setting modesArray elements to 0
	for (int counter = 0; counter <= 30; counter++)
		modes[counter] = 0;
	//setting the original element for the modes checking for loop
	int mode = possibleModes[1];
	//the modes checking for loop
	for (int counter = 2; counter <= 30; counter++)
	{
		if (possibleModes[counter] > mode)
		{
			mode = possibleModes[counter];
		}
	}
	for (int counter = 1; counter <= 30; counter++)
	{
		if (possibleModes[counter] == mode)
			modes[counter] = 1;
	}
	/* Displays whether or not the number is a mode, the first number 
	being true/false and the second being the corresponding number
	for (int counter = 1; counter <= 30; counter++)
	{
		std::cout << modes[counter] << " " << counter << std::endl;
	}
	*/
}
