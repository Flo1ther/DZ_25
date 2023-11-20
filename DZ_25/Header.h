#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Human
{
	string name;
	int age;
};
void askinfo(Human& human)
{
	ofstream fout("myFile.txt", ios::app);
	if (fout.is_open())
	{
		fout << "Enter user name:" << human.name << endl;
		fout << "Enter user age:" << human.age << endl;
	}
	else cout << "Unable to open the file" << endl;
	fout.close();
}