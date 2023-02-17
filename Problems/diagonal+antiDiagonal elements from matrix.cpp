#include <iostream>
using namespace std;

int main() {
   int m, n;
   cout << "Enter the number of rows and columns of the matrix: ";
   cin >> m >> n;
   int mat[m][n];
   int sum = 0;

   cout << "Enter the elements of the matrix: " << endl;
   for(int i=0; i<m; i++) {
      for(int j=0; j<n; j++) {
         cin >> mat[i][j];
      }
   }

   for(int i=0; i<m; i++) {
      for(int j=0; j<n; j++) {
         if(i==j||i+j==n-1) {
            sum += mat[i][j];
         }
      }
   }

   cout << "Sum of boundary elements = " << sum << endl;
   return 0;
}
