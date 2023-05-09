#include <iostream>

using namespace std;

int main()
{
    const int TIME_SIZE = 5;
    float time[TIME_SIZE];
	int number_index = 0;

	for (int i = 0; i < TIME_SIZE; i++)
	{
		cin >> time[i];

		if (time[number_index] < time[i]) {
			number_index = i;
		}
	}
	
	int first = number_index, second = number_index, third = number_index;

	for (int i = 0; i < TIME_SIZE; i++)
	{
		if (time[first] > time[i]) {
			third = second;
			second = first;
			first = i;
		}
		else if (time[second] > time[i]) {
			third = second;
			second = i;
		}
		else if (time[third] > time[i]) {
			third = i;
		}
	}

	cout << "Gold medal number " << first << " time " << time[first] << '\n';
	cout << "Silver medal number " << second << " time " << time[second] << '\n';
	cout << "Bronze medal number " << third << " time " << time[third] << '\n';
}

