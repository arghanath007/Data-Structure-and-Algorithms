#include<bits/stdc++.h>

using namespace std;

int MaxSubArraySum(vector<int> array, int len, int k)
{
    if(k>len)
    {
        cout << "Invalid";
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += array[i];
    }
    int currSum = sum;
    for (int i = k; i < len;i++)
    {
        currSum += (array[i] - array[i - k]); // array[i] is the current element, array[i-k] is the last element of the Subarray. We are taking a difference from them and adding it up.
        sum = max(sum, currSum);
    }
    return sum;
}

int main()
{
    int len,k;
    cout << "Enter the length: ";
    cin >> len;
    cout << "Enter the size: ";
    cin >> k;
    vector<int> array;
    cout << "Enter the elements: ";
    for (int i = 0; i < len;i++)
    {
        int n;
        cin >> n;
        array.push_back(n);
    }
    cout << "The sum is: " << MaxSubArraySum(array, len, k);
}