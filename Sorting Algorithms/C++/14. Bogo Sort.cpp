// #BogoSort
// In computer science, bogosort (also permutation sort, stupid sort, slowsort, shotgun sort or monkey sort) 
// is a highly ineffective sorting function based on the generate and test paradigm. 
// The function successively generates permutations of its input until it finds one that is sorted. 
// It is not useful for sorting, but may be used for educational purposes, to contrast it with more efficient algorithms.

// href="https://en.wikipedia.org/wiki/Bogosort" --> Source: Wikipedia


#include<bits/stdc++.h> 
using namespace std; 
  
// To check if array is sorted or not 
bool isSorted(int a[], int n) 
{ 
    while ( --n > 1 ) 
        if (a[n] < a[n-1]) 
            return false; 
    return true; 
} 
  
// To generate permuatation of the array 
void shuffle(int a[], int n) 
{ 
    for (int i=0; i < n; i++) 
        swap(a[i], a[rand()%n]); 
} 
  
// Sorts array a[0..n-1] using Bogo sort 
void bogosort(int a[], int n) 
{ 
    // if array is not sorted then shuffle 
    // the array again 
    while ( !isSorted(a, n) ) 
        shuffle(a, n); 
} 
  
// prints the array 
void printArray(int a[], int n) 
{ 
    for (int i=0; i<n; i++) 
        printf("%d ", a[i]); 
    printf("\n"); 
} 
  
// Driver code 
int main() 
{ 
    int a[] = {3, 2, 5, 1, 0, 4}; 
    int n = sizeof a/sizeof a[0]; 
    bogosort(a, n); 
    printf("Sorted array :\n"); 
    printArray(a,n); 
    return 0; 
}

// Output:
// Sorted array :
// 0 1 2 3 4 5 


// Time Complexity:

// Worst Case : O(∞) (since this algorithm has no upper bound)
// Average Case: O(n*n!)
// Best Case : O(n)(when array given is already sorted)
// Auxiliary Space : O(1)