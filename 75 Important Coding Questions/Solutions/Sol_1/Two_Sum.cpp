#include<bits/stdc++.h>

using namespace std;


vector<int> two_sum(vector<int> &numbers, int target)
{
    vector<int> result;
    unordered_map<int, int> m;
    for (int i = 0; i < numbers.size();i++)
    {
        int number= target - numbers[i];
        if(m.find(number) !=m.end()) // We will get the iterator of the number in the map with the find().
        {
            result.push_back(m[number]); // Future number in the map which sums to give the target.
            result.push_back(i); // Current Number in the ith position
            return result;
        }
        m[numbers[i]] = i;
    }
    return result;
}

int main()
{
    int len;
    cout << "Enter the length: ";
    cin >> len;
    vector<int> numbers(len);
    cout << "Enter the elements: ";
    for (int i = 0; i < len;i++)
    {
        cin >> numbers[i];
    }
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    vector<int> result = two_sum(numbers, target);
    cout << "\nThe result is: \n";
    for (int i = 0;i< result.size();i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}