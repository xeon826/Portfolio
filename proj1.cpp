#include <iostream> // cin cout
#include <iomanip> // stream formatting
#include <fstream> // all of your file handling needs
using namespace std;
 

int main()
{
	//string filename("file1.txt");
	string filename;
	cin >> filename;
	filename = "file1.txt";
	ifstream inputFile(filename.c_str());

	const char* pStr = filename.c_str();
	printf("%s\n", pStr);
#if 0
	inputFile.open(filename.c_str());
	//inputFile.open("1file1.txt");
	//inputFile.open();
#endif
	system("pause");
	return 0;
}
