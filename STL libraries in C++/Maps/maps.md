# Ordered Maps

## Time Complexity of Map:

### For inserting values into a map like here below, the time complexity will be **O(log n)**. Where 'n' is the current size of the map.

map<int, string> m;
m[1] = "one";

### For accessing values in a map like here below, the time complexity will be **O(log n)**. Where 'n' is the current size of the map.

for(auto &pr: m)
{
cout<<pr.first<<" "<<pr.second<<endl;
}

> The time complexity of the above loop is **O(nlogn)**. 'n' is the size of the map. To access a value within the map, we are required a complexity of **O(log n)**.

> Time complexity of find() in map is O(log n).

Features:

1. The keys are in sorted order.
2. The keys are unique. If keys get repeated, the last value will be the one that is stored.
3. In-build implementation -> Trees(On comparison basis)
4. Complex data types like vectors, pair, etc. can also be used as keys because normal maps use trees.

# Unordered Maps

1. The order of the insertion is not maintained.
2. In-build implementation -> Hash tablesI(Hash values of the keys are created)
3. Time complexity for both insertion and accessing is **O(1) on average**.
4. Time complexity for find() and clear() are **O(1)**.
5. Basic data types like int, string, double, float, char, etc. can be used as keys as they have hash tables. Complex data types like vectors, pair, etc. cannot be used as keys as they don't have hash tables defined.

**_If ordering doesn't matter then go for unordered maps. _**
