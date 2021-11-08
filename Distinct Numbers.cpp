#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    set<int>v1;
    for (int i = 0; i < t; i++){
        int temp;
        cin >> temp;
        v1.insert(temp);
    }
    cout << v1.size() << endl;

    return 0;
}
  // string j, t;
    // char temp;
    // int count = 0;
    // vector<int>v1;
    // cin >> j;
    // for (int i = 0; i < j.size(); i++){
    //     t+='x';
    // }
    // sort(j.begin(), j.end());
    // temp = j[0];
    // for (int i = 0; i < j.size(); i++){
    //     if (j[i] == temp){count+=1;}
    //     else{temp = j[i];v1.push_back(count); count = 1;}
    // }
    // if (count != 1){v1.push_back(count);}
    // for (int i = 0; i < v1.size(); i++){
    //     cout << v1[i] << " ";
    // }