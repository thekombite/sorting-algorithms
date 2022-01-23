// https://www.youtube.com/watch?v=x0uUKWJzSO4&ab_channel=TheCherno
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;


int main()
{
    vector<int> values = {3,2,4,5,1};
    // sort(values.begin(), values.end()) by default ascending.
    sort(values.begin(), values.end(), [](int a, int b)
    {
        return a > b;  // < -> ascending || > -> descending
    });
    for(int value : values)
        cout << value << endl;  

    return 0;
}