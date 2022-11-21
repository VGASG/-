#include<iostream>
#include<ctime>
#include<Windows.h>
using namespace std;
int main()
{
	int start = -1;
	while (1)
	{
		start = start++;
		cout << "ÒÑ°ÚÀÃ£º" << start << "Ãë" << endl;
		Sleep(1000);
		system("cls");
	}
}