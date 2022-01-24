#include <iostream>
#include <climits>

using namespace std;


int main()
{
    int n_Size;
    cin >> n_Size;
    
    long long n[n_Size];
    
    for (int i = 0; i < n_Size; i++){
        cin >> n[i];
    }
    
    long long tempSum = n[0], m_Sum = INT_MIN;
    
    for (int i = 1; i < n_Size; i++){
        tempSum = max(n[i], tempSum + n[i]);
        m_Sum = max(tempSum, m_Sum);
    }
    
    if (m_Sum == INT_MIN){m_Sum = tempSum;}
    
    cout << m_Sum << endl;  
    
    
    return 0;
}
