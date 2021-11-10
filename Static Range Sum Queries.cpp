#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long>v1;
    vector<long long>v2{0};
    for (int i = 0; i < n; i++){
        long long temp;
        cin >> temp;
        v1.push_back(temp);
        v2.push_back(temp + v2[i]);
    }
    for (int j = 0; j < q; j++){
        int ptr1, ptr2;
        cin >> ptr1 >> ptr2;
        cout << v2[ptr2] - v2[ptr1 - 1] << endl;
    }
    

    return 0;
}
