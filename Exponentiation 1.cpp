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
        long long a, b;
        cin >> a >> b;
        
        long long n = 1;
        
        while (b > 0){
            if (b&1){n = (n*a)%1000000007;}
            a = (a * a)%1000000007;
            b/=2;
        }
        
        cout << n << endl;
    
    }
    
    return 0;
}
