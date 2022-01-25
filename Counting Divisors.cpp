#include <iostream>
#include <climits>
#include <vector>
#include <map>
#include <cmath>


using namespace std;


int main()
{
    
    int t;
    cin >> t;
    
    while (t--){
        int n, count = 0;
        cin >> n;
        for (int i = 1; i * i <= n; i++){
            if (n%i == 0){
                if (n/i != i){count+=2;}
                else{count+=1;}
            }
            
        }
        cout << count << endl;
    
    }
    
    return 0;
}
