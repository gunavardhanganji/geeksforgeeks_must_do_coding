#include <bits/stdc++.h>
using namespace std;
long long count(int x, int Y[], int n, int NoOfY[]) 
{ 
    // If x is 0, then there cannot be any value in Y such that 
    // x^Y[i] > Y[i]^x 
    if (x == 0) return 0; 
  
    // If x is 1, then the number of pais is equal to number of 
    // zeroes in Y[] 
    if (x == 1) return NoOfY[0]; 
  
    // Find number of elements in Y[] with values greater than x 
    // upper_bound() gets address of first greater element in Y[0..n-1] 
    int* idx = upper_bound(Y, Y + n, x); 
    int ans = (Y + n) - idx; 
  
    // If we have reached here, then x must be greater than 1, 
    // increase number of pairs for y=0 and y=1 
    ans += (NoOfY[0] + NoOfY[1]); 
  
    // Decrease number of pairs for x=2 and (y=4 or y=3) 
    if (x == 2)  ans -= (NoOfY[3] + NoOfY[4]); 
  
    // Increase number of pairs for x=3 and y=2 
    if (x == 3)  ans += NoOfY[2]; 
  
    return ans; 
} 
  
// Function to return count of pairs (x, y) such that 
// x belongs to X[], y belongs to Y[] and x^y > y^x 
long long countPairs(int X[], int Y[], int m, int n) 
{ 
    // To store counts of 0, 1, 2, 3 and 4 in array Y 
    int NoOfY[5] = {0}; 
    for (int i = 0; i < n; i++) 
        if (Y[i] < 5) 
            NoOfY[Y[i]]++; 
  
    // Sort Y[] so that we can do binary search in it 
    sort(Y, Y + n); 
  
    long long total_pairs = 0; // Initialize result 
  
    // Take every element of X and count pairs with it 
    for (int i=0; i<m; i++) 
        total_pairs += count(X[i], Y, n, NoOfY); 
  
    return total_pairs; 
} 
int main() {
	int t; cin>>t;
	while(t--){
	    int n, m;
	    cin>>n>>m;
	    int arr1[n], arr2[m];
	    int i, j, count=0;
	    for(i=0; i<n; i++)
	        cin>>arr1[i];
	    for(i=0; i<m; i++)
	        cin>>arr2[i];
	    /*
	    Brute force method
	    for(i=0; i<n; i++){
	        if(arr1[i] == 1)
	           continue;
	        for(j=0; j<m; j++){
	            if(powl(arr1[i], arr2[j]) > powl(arr2[j], arr1[i]))
	                count++;
	        }
	    }
	    cout<<count<<endl;
	    */
	    cout<<countPairs(arr1, arr2, n, m)<<endl;
	}
	return 0;
}