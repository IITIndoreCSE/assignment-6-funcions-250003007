#include <iostream>
#include <vector>
using namespace std;

int sumArray(const vector<int>& arr) {
    // TODO: complete the function as per instructions
    int size=arr.size(),sum=0;
    for(int i=0; i<size; i++)
    sum=sum+arr[i];
    return sum;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++)
        cin >> arr[i];

    cout << sumArray(arr) << "\n";
    return 0;
}
