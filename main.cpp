
#include<fstream>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<string> theData;
	ifstream inFile;
	string fileName;
	string word;
	int count = 0;
	ofstream outputFile;
	outputFile.open("output.txt");

	cout << "Please enter the file name " << endl;
	getline(cin, fileName);

	inFile.open(fileName.c_str());
	if (inFile.fail())
	{
		cout << "That file does not exist/is not placed in the project folder!" << endl;
	}

	if (!inFile.eof())
	{
		string temp;
		inFile >> temp;
		do
		{
			theData.push_back(temp);
			inFile >> temp;
		} while (inFile.is_open);

	}





	outputFile << count << endl;


	inFile.close();
	outputFile.close();
	cin.get();

	system("pause");
	return 0;
	
}

