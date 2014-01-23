//*******************************************************************
// A simple example program example.cc to show how to dynamically
// allocate---and deallocate!---an array of n long integers and
// initialize it with random integer variates.
//
// Note that this assumes the availability of the files rng.h and
// rng.c to create an executable.
//
// CS 303 Algorithms
// Fall 2012
// Programming Project 1, Part B
//*******************************************************************
#include<cstdlib>      // Contains exit().
#include<iostream>     // Contains cout and endl.
#include<iomanip>      // Contains setw().
#include<fstream>      // Contains file i/o members
#include<climits>      // Contains INT_MAX.
#include "group.h"
using namespace std;

extern double Random(void);
extern double user_time();
extern double system_time();

long Equilikely(long a, long b) { // use a < b
  return (a + (long) (( b - a + 1) * Random()) );
} // end Equilikely

int main() {
  char response;
  double start, finish;
  long i;
  long n = 1000000; // YOU should never hard-wire constants!
  long a = 1;
  long b = INT_MAX; // INT_MAX is the maximum integer
                    // representable on the system.
  GroupOfNumbers *A;
  try {
    A = GroupOfNumbers(n);    // Use the new operator to create an array.
  } // end try
  catch (bad_alloc) {
    // If the allocation fails, warn the user where and exit.
    cerr<<"example: bad_alloc" << endl;
    cerr<<"example: allocation of size " << n << " failed" << endl;
    cerr<<"example: line: " << (__LINE__ - 5) << endl;
    cerr<<"example: file: " << __FILE__ << endl;
    cerr<<"example: exit: " << 1 << endl;
    exit(1);
  } // end catch
  if ( (response == 'y') or (response == 'Y') ) {
    cout << "The array A contains the entries:\n";
    cout.setf(ios::right);
    start = user_time() + system_time();
    A.mergeSort();
    cout << endl;
    finish = user_time() + system_time();
    cout << "\nIt took approximately " << finish - start 
         << " second(s) to display the " << n << " entries in A.\n";
  } // end if

  cout << "\nDo you want to save the entries in a file 'output'?  Enter 'y' for 'yes': ";
  cin >> response;
  cout << endl;
  if ( (response == 'y') or (response == 'Y') ) {
    ofstream OutStream ("output");
    OutStream.setf(ios::right);
    start = user_time() + system_time();
    for (i = 0; i < n; i++) {
      OutStream << setw(12) << A[i];
      if (((i+1) % 5) == 0) {
        OutStream << '\n';
      } // end if
    } // end for
    OutStream << endl;
    OutStream.close();
    finish = user_time() + system_time();
    cout << "\nIt took approximately " << finish - start 
         << " second(s) to write the " << n << " entries to the file 'output'.\n";
  } // end if

  delete [] A;         // Be sure to deallocate the space allocated to A!
  return 0;

} // end main
