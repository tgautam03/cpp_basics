#include <iostream>
using namespace std;

int main()
{
	int num_pods, peas_per_pod, total_peas;
	
	cout << "Enter the number of pods:\n";
	cin >> num_pods;

	cout << "Enter the number of peas in one pod:\n";
	cin >> peas_per_pod;

	total_peas = num_pods*peas_per_pod;

	cout << "Total number of peas are ";
	cout << total_peas;
	cout << "\n";

	return 0;
}
