#include <iostream>
//*******************************************************************
#include<cstdlib>      // Contains exit().
#include<iomanip>      // Contains setw().
#include<fstream>      // Contains file i/o members
#include<climits>      // Contains INT_MAX.
#include "group.h"

using namespace std;

extern double user_time();
extern double system_time();

int main( int argc, const char* argv[] )
{
	GroupOfNumbers j;
//	GroupOfNumbers m;
	long y = 100;
//	j = GroupOfNumbers(10);
	j = GroupOfNumbers(-100, y, y);
//	j = GroupOfNumbers(0,20,20);	
	//cout << j.total();
//	for(int i =1; i < 7; i++)
//	{
	  //j.add(3);
	  //j.add(7);
	  //j.add(9);
	  //j.add(4);
	  //j.add(5);
	  //j.add(1);
//	  j.add(i);
//	}
	long k;
	long f = y/2;
	//m = GroupOfNumbers(j);
	//j.displayGroupOfNumbers();
	//j.remove(1);j.displayGroupOfNumbers();
	//j.remove(2);j.displayGroupOfNumbers();
	//j.remove(4);j.displayGroupOfNumbers();
	//j.remove(3);
	//j.displayGroupOfNumbers();
	//j.writeGroupOfNumbersTo("text2.txt");
	//j.displayGroupOfNumbers();
	//j.displayGroupOfNumbers();
	double start = user_time() + system_time();
        j.sort_select( f, k);
        double finish = user_time() + system_time();
        cout << "\nIt took approximately " << finish - start
         << " to sort select where the kth smallest is "<< k << endl;
//j.displayGroupOfNumbers();	
	start = user_time() + system_time();
        j.partial_sort_select( f, k);
        finish = user_time() + system_time();
        cout << "\nIt took approximately " << finish - start
         << " to partial sort select where the kth smallest is "<< k << endl;

        start = user_time() + system_time();
        j.min_heap_select(f, k);
//	j.quick_select( f, k);
        finish = user_time() + system_time();
        cout << "\nIt took approximately " << finish - start
         << " to min heap select where the kth smallest is "<< k << endl;

	// j.displayGroupOfNumbers();
	// cout << "ORIGINAL GROUP OF NUMBERS ABOVE" << endl;
//	cout << "J is above" << endl;
        start = user_time() + system_time();
        j.linear_select( f, k);
        finish = user_time() + system_time();
        cout << "\nIt took approximately " << finish - start
         << " to linear select where the kth smallest is "<< k << endl;
        //j.displayGroupOfNumbers();
        start = user_time() + system_time();
        j.quick_select( f, k);
        finish = user_time() + system_time();
        cout << "\nIt took approximately " << finish - start
         << " to quick select where the kth smallest is "<< k << endl;
         //j.displayGroupOfNumbers();

}
