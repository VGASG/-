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
		cout << "�Ѱ��ã�" << start << "��" << endl;
		Sleep(1000);
		system("cls");
	}
}