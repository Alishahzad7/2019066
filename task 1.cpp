#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int i;
	int array[5] = { 1,2,3,4,5 };
	cout << "Enter Array Elements:";
	ofstream fout;
	fout.open("file.txt", ios::out);

	if (fout)
	{
		cout << "File Successfully Created";
		for (int i = 0; i < 5; i++);
		{
			fout << array[i];

		}
	}

	else cout << "Error";
	fout.close();
}


