#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> memo; // memoization cache

int fib(int n) {
    // check if the result for n is already in the cache
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }
    
    // base cases
    if (n == 0) {
        memo[0] = 0;
        return 0;
    }
    if (n == 1) {
        memo[1] = 1;
        return 1;
    }
    
    // recursive case
    int result = fib(n-1) + fib(n-2);
    
    // store the result in the cache
    memo[n] = result;
    
    return result;
}

int main() {
    // test the fib function
    cout << fib(10) << endl; // output: 55
    cout << fib(20) << endl; // output: 6765
    cout << fib(30) << endl; // output: 832040
    cout << fib(40) << endl; // output: 
    
    return 0;
}
