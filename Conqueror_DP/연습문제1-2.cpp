#include <iostream>
#include <vector>
using namespace std;

vector<int> input_vec;

int solution(int size)
{
	if (size <= 0)
		return 0;
	
	if (size == 1)
		return input_vec[0];

	return solution(size - 1) + input_vec[size-1];
}

int main()
{
	vector<int> result;
	int size;
	int input;
	cout << "Length size = ";
	cin >> size;

	for(auto i =1; i<=size; i++)
	{
		cin >> input;
		input_vec.push_back(input);
	}

	for(auto i=1; i<=size; i++)
	{
		input = solution(i);
		result.push_back(input);
	}

	for (const auto& i : result)
		cout << i << " ";


	cout << endl;
	
	return 0;
}