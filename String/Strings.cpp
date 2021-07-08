#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    string str1(5,'n'); // -> If we want to have '5' times 'n' within the string variable. 1st parameter is the count or number of times the 2nd parameter will be present. 2nd parameter is the 
    // cout<<str1<<endl;

    // string str2="ArghaNath";
    // cout<<str2<<endl;

    // string str3;
    // getline(cin, str3); //-> To input a string including spaces between strings. It takes input of the whole sentence whereas in cin it stops after encountering a space(" ").
    // cout<<str3<<endl;

    // string str4;
    // cin>>str4;
    // cout<<str4<<endl;

    string s1,s2;
    s1="fam", s2="ily";
    // s1.append(s2);
    // cout<<s1<<endl;
    s1=s1+ s2;
    cout<<s1<<endl;
    // cout<<s1 + s2<<endl;

    cout<<s1[1]<<endl;

    string abc="fnkvjnfginsrihtf0wreh9ufnxv";
    abc.clear();
    cout<<abc<<endl; 

    s1="abc", s2="xyz";
    cout<<s2.compare(s1)<<endl;
    if(!s1.compare(s2))  
    {
        cout<<"String are equal!!";
    }
    cout<<s1<<endl;
    s1.clear();
    if(s1.empty())
    {
        cout<<"String is empty!!"<<endl;
    }
    s1="nincompoop";
    // s1.erase(3,3); // 1st parameter is the number from which deletion should start(0,1,2,3) and the 2nd parameter is the count of the numbers that are to be deleted.
    // cout<<s1<<endl;
    // s1.erase(3,3);
    // cout<<s1<<endl;

    // cout<<s1.find("com")<<endl;
    // cout<<s1.find("oo")<<endl;

    s1.insert(2,"lol"); // 1st parameter is the position where we want to insert the 2nd parameter. The 2nd parameter is the string which we want to insert.
    cout<<s1<<endl;
    cout<<s1.length()<<endl<<s1.size()<<endl;
    // s1="nincompoop"; 
    string s= s1.substr(6 ,4); // 1st parameter tells from which position we want and the 2nd parameter tells how many we want from the 1st parameter.
    cout<<s<<endl;

    s1="786";
    int x= stoi(s1); // Converts the numbric string into an integer type.
    cout<<x+2<<endl;
    cout<<to_string(x) + "2"<<endl; // Working like append function.

    string random="sdfmgindgiowrjntionsrfgnds";
    sort(random.begin(), random.end()); // 'random.begin()' gives us the starting iterator and 'random.end()' gives us the ending operator.
    cout<<random<<endl;
}
