#include <iostream>
#include <math.h>
using namespace std;

//Store the starting time
double duration;
clock_t startTime = clock();

//Code block

/**
 * iterative algorithm -- time complexity O(n)
 */
int iterativeFib( int n ) {
    int previous = 1, current = 1, next = 1;
    for ( int i = 3; i <= n; i++ ) {
        next = current + previous;
        previous = current;
        current = next;
    }
    return next;
}

/**
 * recursive algorithm -- time complexity O(2^n)
 */
int recursiveFib( int n ) {
    if ( n <= 2 )
        return 1;
    return recursiveFib(n - 1) + recursiveFib(n - 2);
}


int main() {
    int n;
    cout << "Enter the n value for nth fibonacci number: ";
    cin >> n;

    cout << recursiveFib(n) << endl;
    //cout << iterativeFib(n) << endl;
    cout << "Expected execution time: ";
    cout << pow(2,n) << endl; //recursive
    //cout << n << endl;


//Compute the number of seconds that passed since the starting time
    duration = 1000 * double(clock() - startTime) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration << " milliseconds." << endl;

    return 0;
}