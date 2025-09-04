#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int>& arr) {
    // TODO: complete the function as per instructions
    int largest,second,val;
    largest=INT_MIN;
    second=INT_MIN;
    int size=arr.size();
    for(int i=0; i<size; i++)
    {
        val=arr[i];
        if(val>largest)
        {
            second = largest;
            largest = val;
        }
        else if(val>second && val!=largest)
        second=val;
    }
    if(second==INT_MIN)
    return -1;
    else
    return second;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << secondLargest(arr) << "\n";
    return 0;
}
