#include<bits/stdc++.h>

using namespace std;

string fractionToDecimal(int64_t numerator, int64_t denominator)
{
    if(!numerator)
    {
        return "0";
    }
    string ans;
    if(numerator > 0 ^ denominator > 0)
    {
        ans+='-';
    }
    long numAbs= labs(numerator), denAbs=labs(denominator); //Returns the absolute value of parameter
    long rem= numAbs % denAbs;
    ans +=to_string(numAbs/denAbs);
    if(!rem)
    {
        return ans;
    }
    ans +='.';
    unordered_map<long, int> rs;
    while(rem)
    {
        if(rs.find(rem) != rs.end())
        {
            ans.insert(rs[rem],"(");
            ans+=')';
            break;
        }
        rs[rem]=ans.size();
        rem*=10;
        ans+= to_string( rem / denAbs);
        rem %=denAbs;
    }
    return ans;



    // if(numerator == 0)
    // {
    //     return "0";
    // }
    // string fraction;
    // if(numerator < 0 ^ denominator < 0) 
    // {
    //     fraction+='-';
    // }
    // numerator= abs(numerator);
    // denominator= abs(denominator);
    // fraction+=to_string(numerator/denominator);
    // if(numerator % denominator == 0)
    // {
    //     return fraction;
    // }
    // fraction+='.';
    // unordered_map<int, int> map;
    // for(int64_t rem= numerator % denominator;rem; rem%=denominator)
    // {
    //     if(map.count(rem) >0)
    //     {
    //         fraction.insert(map[rem],1,'(');
    //         fraction+=')';
    //         break;
    //     }
    //     map[rem]= fraction.size();
    //     rem*=10;
    //     fraction+=to_string(rem/denominator);
    // }
    // return fraction;
}

int main()
{
    int numerator, denominator;
    cout<<"Enter the numerator and denominator: ";
    cin>>numerator>>denominator;
    string result=fractionToDecimal(numerator,denominator);
    cout<<"The output is: "<<result;
}

// int64_t -> https://stackoverflow.com/questions/13604137/definition-of-int64-t

//XOR Table
// 0 ^ 0 -> 0
// 0 ^ 1 -> 1
// 1 ^ 0 -> 1
// 1 ^ 1 -> 0
// Same number is zero, different number is 1.