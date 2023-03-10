#include <iostream> 
using namespace std; 
 
void print(int arr[], const int size)  
{ 
    int k;  
    for (k = 0; k < size; k++) cout << arr[k] << " "; cout << endl; 
} 
 
void p(int k, int a, int b, int f[], int g[]) 
{ 
        int tmp = f[b]; 
        f[b] = f[a]; 
        f[a] = f[k]; 
        f[k] = tmp; 
 
        g[f[k]] = k; 
        g[f[a]] = a; 
        g[f[b]] = b; 
}; 
 
int main() 
{ 
    #ifndef myTest 
    int k, a, n = 4, s[4]{1,4,2,3}, f[n], g[n]; 
    print(s, n);  
    #endif 
     
    #if (myTest) 
    int n, k, a; 
    cout << "size"; cin >> n;  
    int s[n], f[n], g[n]; 
    cout<< "permutation"; for (k = 0; k < n; k++) cin >> s[b]; 
    #endif 
 
    for (k = 0; k < n; k++)  
    { s[k] = s[k] - 1; f[k] = k; g[k] = k;} 
     
    for (k = 0; k < n; k++) { 
        if (f[k] != s[k])  { 
            a = g[s[k]]; 
            if (a != n - 1) p(n - 1, a, k, f, g); 
            else p(n - 2, a, k, f, g); 
        } 
    } 
     
    if (f[n - 1] == s[n - 1]) cout << "Even"; 
    else cout << "Odd"; 
 
    return 0; 
}