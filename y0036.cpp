#include<iostream>
#include<string>
#include<iomanip>
#include<time.h>
using namespace std;
void call_display(int num[5][6]);
void call_graph(string graph[5][6]);

int main()
{
	int num[5][6];
	string graph[5][6];
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			num[i][j] = rand() % 10;

			if (num[i][j] != 0)
			{
				graph[i][j] = "*";
			}
			else
			{
				graph[i][j] = " ";
			}
		}
	}
	call_display(num);
	call_graph(graph);
	return 0;
}

void call_display(int num[5][6])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << num[i][j] << "\t";
		}
		cout << endl;
	}
}

void call_graph(string graph[5][6])
{
	cout << "\n--------------------display graph------------------\n";
	cout << "\t0\t1\t2\t3\t4\t5";
	cout << "\n---------------------------------------------------\n";
	for (int i = 0; i < 5; i++)
	{
		cout << i << "|";
		for (int j = 0; j < 6; j++)
		{
			cout << "\t" << graph[i][j];
		}
		cout << endl;
	}
}