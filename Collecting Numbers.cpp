#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <climits>
using namespace std;

int main()
{
    int n, m = 0;
    cin >> n;
    map<int, int>v1;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        m = max(m, temp);
        v1[temp] = i;
    }
    int rounds = 1;
    for (int j = 0; j < n - 1; j++){
        if (v1.at(m-1) > v1.at(m)){rounds+=1;}
        m-=1;
    }
    cout << rounds << endl;
    return 0;
}
