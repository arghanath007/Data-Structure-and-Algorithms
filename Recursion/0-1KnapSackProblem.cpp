#include<bits/stdc++.h>

using namespace std;

int knapSackProblem0_1(vector<int> value, vector<int> weight, int number, int capacity)
{
    if(number ==0 || capacity ==0)
    {
        return 0;
    }
    if(weight[number-1] > capacity)
    {
        return knapSackProblem0_1(value, weight, number-1, capacity);
    }

    return (max(knapSackProblem0_1(value, weight, number-1,capacity- weight[number-1]) + value[number-1],knapSackProblem0_1(value, weight, number-1, capacity)));

}
int main()
{
    int values,weights,capacity,number;
    cout<<"Enter the number of elements: ";
    cin>>number;
    cout<<"Enter the capacity of the KnapSack of the thief: ";
    cin>>capacity;
    vector<int> value, weight;
    cout<<"Enter the weight and the values: ";
    for(int i=0;i<number;i++)
    {
        cin>>weights>>values;
        weight.push_back(weights);
        value.push_back(values);
    }
    int result= knapSackProblem0_1(value, weight, number, capacity);
    cout<<"The value is: "<<result<<endl;
}

