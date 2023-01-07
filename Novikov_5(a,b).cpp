#include <iostream> 
using namespace std; 
 
void print(int arr[], const int size)  
{ 
    int k;  
    for (k = 0; k < size; k++) cout << arr[k] << " "; cout << endl; 
} 
 
int main() 
{ 
    #ifndef myTest 
    int k, a = 4, f[a]{3,2,4,1}, g[a]{4,2,1,3}, fg[a], gf[a]; 
    cout << "f = "; print(f, a); cout << "g = "; print(g, a); 
    #endif 
     
    #if (myTest) 
    int a, k; 
    cout << "size"; cin >> a;  
    int f[a], g[a], fg[a], gf[a]; 
    cout<< "permutation1"; for (k = 0; k < a; k++) cin >> f[k]; 
    cout<< "permutation2"; for (k = 0; k < a; k++) cin >> g[k]; 
    #endif 
     
    for (k = 0; k < a; k++) fg[k] = f[g[k] - 1]; 
    for (k = 0; k < a; k++) gf[k] = g[f[k] - 1]; 
    cout << "f * g = "; print(fg, a); 
    cout << "g * f = "; print(gf, a); 
    cout << "f*g!=g*f"<<" "; 
     
    for(k = 0; k < a; k++) g[f[k]-1] = k + 1; 
    cout << "Inverse permutation = "; print(g, a); 
    return 0; 
     
  
}