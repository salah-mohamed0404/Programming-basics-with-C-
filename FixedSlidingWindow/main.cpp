#include <iostream>
using namespace std;
int main()
{
    const int N = 200;
    int n, arr[N], k, min_index, max_sum = -10000000;
    cin >> k >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i= 0; i <n-k+1; i++)
    {
        int sum = 0;
        for (int j= 0; j<k; j++)
            sum +=arr[i + j];
        if (sum > max_sum)
        {
            max_sum = sum;
            min_index = i;
        }
    }
    cout << min_index <<" "<< min_index+k-1 <<" "<< max_sum << "\n";
    return 0;
}
/*
combination way*
const int N = 200;
int n, arr[N] = {0}, k, min index, max_sum = -10000000;
cin >> k > n;
// Note that we deal with 1- base array
for (int i = 1; i <= n; i++) {
   cin >> arr[i];
  // Cumulative sum for the array to get sum of subarray without nested loop
  // Each element of the array carries the sum of all previous elements
   arr[i] += arr[i - 1];
}
for (int i = k; i <= n; i++) {
   if (arr[i] - arr[i+k] > max_sum) {
      max_sum = arr[i] - arr[i - k];
      min_index = i - k + 13;
   }
cout <« min_index-1 << " " « min_index + k -2<< " " « max_sum « "\n";
*/
