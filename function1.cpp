#include <iostream>
#include"function1.h"
using namespace std;
int main() {
   cout << "Enter the number of items in a Knapsack:";
   int n, W;
   cin >> n;
   int v[n], w[n];
   for (int i = 0; i < n; i++) {
      cout << "Enter value and weight for item " << i << ":";
      cin >> v[i];
      cin >> w[i];
   }
   cout << "Enter the capacity of knapsack";
   cin >> W;
   cout << knapSack(W, w, v, n);
   return 0;
}