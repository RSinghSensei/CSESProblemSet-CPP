#include <iostream>
#include <climits>
#include <vector>
#include <map>
#include <cmath>
 
 
using namespace std;
 
 
int main()
{
    int n, target;
    cin >> n >> target;
    
    map<int, int>m1;
    
    vector<int>v1;
    
    bool found = false;
    
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        v1.push_back(temp);
        m1[temp] = i;
    }
    
    for (int i = 0; i < v1.size(); i++){
        if (found){break;}
        for(int j = i + 1; j < v1.size(); j++){
            if (found){break;}
            int t1 = target - v1[i] - v1[j];
            if (m1.count(t1) != 0 && m1.at(t1) > j){
                cout << i + 1 << " " << j + 1 << " " << m1[t1] + 1 << endl;
                found = true;
            }
        }
    }
    
    if (!found){cout << "IMPOSSIBLE" << endl;}
    
    
    return 0;
}