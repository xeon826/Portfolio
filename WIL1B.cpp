////////////////////////////////////projb
// Joshua Wilkeson 2/17/14 Finds two smallest numbers in an array.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
void read_array(int argh[], int counter)
{
	for (counter = 0; counter < 100; counter++)
	{
		argh[counter] = (rand()%200) + 1;
	}
}
void print_array(int argh[], int ret)
{
	cout << argh[0] << " ";
	for (int counter = 1; counter < 100; counter++)
	{
		cout << argh[counter] << " ";
		
		if (counter%10 == 0)
			cout << endl;
	}
}
void Two_smallest(int argh[])
{
	int first = argh[0];
	int a, b, theindex, secondindex;
	int nargh[2][100] = {};
	for (int counter = 0; counter < 100; counter++)
	{
		if (argh[counter] < first)
		{
			first = argh[counter];
			a = first;
			theindex = counter;
		}

	}
	first = 201;
	for (int counter = 0; counter < 100; counter++)
	{
		if (counter == theindex)
			continue;
		if (argh[counter] < first)
		{
			first = argh[counter];
			secondindex = counter;
			b = first;
		}
	}
	cout << "\n\n" << a << " Index: " << ++theindex << endl << b << " Index: " << ++secondindex;
}
void Two_smallest(int[], int, int*, int*, int*, int*);
void read_array(int[], int);
void print_array(int[], int);
int main()
{
	srand(time(0));
	int arr[100] = {};
	string input = "def";
	int blah = 0, a;
	while (input != "-1")
	{
		read_array(arr, blah);
		print_array(arr, blah);
		Two_smallest(arr);
		cin >> input;
	}
	
	return 0;
}
