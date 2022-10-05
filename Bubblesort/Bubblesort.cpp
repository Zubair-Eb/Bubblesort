// Bubblesort.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> bubbleSort{ 5,7,6,0,1,2,4,9,8,3 };

int main()
{
	sort(bubbleSort.begin(), bubbleSort.end());
	for (auto elm:bubbleSort)
	{
		cout << elm << " ";
	}
	
}

