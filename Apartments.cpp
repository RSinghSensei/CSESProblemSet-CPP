#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int>v1;
    vector<int>v2;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    sort(v1.begin(), v1.end());
    for (int j = 0; j < m; j++){
        int temp;
        cin >> temp;
        v2.push_back(temp);
    }
    sort(v2.begin(), v2.end());
    int j = 0, count = 0;
    for (int i = 0; i < v1.size(); i++){
        int min = v1[i] - k, max = v1[i] + k;
        for (j; j < v2.size(); j++){
            if (v2[j] > max){break;}
            if (v2[j] >= min && v2[j] <= max){count++;j+=1;break;}
        }
    }
    
    cout << count << endl;
    
    

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