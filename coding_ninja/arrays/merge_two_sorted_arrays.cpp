#include<vector>
#include<algorithm> // for sort
using namespace std;

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &arr1, vector<long long> &arr2){
	int n = arr1.size(); // Define n
	int m = arr2.size(); // Define m

	int left = n-1;
	int right = 0;

	while(left >= 0 && right < m){
		if(arr1[left] > arr2[right]){
			swap(arr1[left], arr2[right]);
			left--, right++;
		}
		else{
			break;
		}
	}
	sort(arr1.begin(), arr1.end()); // Corrected usage of sort for vectors
	sort(arr2.begin(), arr2.end()); // Corrected usage of sort for vectors
}

