#include <iostream>
//*******************************************************************
#include<cstdlib>      // Contains exit().
#include<iomanip>      // Contains setw().
#include<fstream>      // Contains file i/o members
#include<climits>      // Contains INT_MAX.
#include <assert.h>
#include "group.h"

using namespace std;

extern double user_time();
extern double system_time();

int main( int argc, const char* argv[] )
{
	GroupOfNumbers j;
//	GroupOfNumbers m;
	long y = 10000000;
	// j = GroupOfNumbers(15);
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

	long k1;
	long k2;
	long k3;
	long k4;
	long k5;
	long k6;
	long f1 = 1;
	long f2 = y/2;
	long f3 = y;
    /*for(long i = 1; i < 100; i++){
        j.sort_select(i, k1);
        j.linear_select(i, k2);
        cout << i << " k1:" << k1 << " k2:"<< k2 << endl;
       // j.linear_select(i - 1, k2);
        // cout << k2 << endl;
       // assert(k1 == k2);

    }*/
    // for(long i = 1; i < 15; i++){
    //     j.add(i);
    // }
    // for(long i = 50; i < y; i++){
    //     j.quick_select(i, k1);
    //     j.linear_select(i, k2);
    //     cout << i << " k1:" << k1 << " k2:"<< k2 << endl;
    //     assert(k1 == k2);
    // }
	double start11 = user_time() + system_time();
    j.sort_select(f1, k1);
    double finish11 = user_time() + system_time();
    double start12 = user_time() + system_time();
    j.partial_sort_select( f1, k2);
    double finish12 = user_time() + system_time();
    double start13 = user_time() + system_time();
    j.min_heap_select( f1, k3);
    double finish13 = user_time() + system_time();
    double start14 = user_time() + system_time();
    j.partial_max_heap_select( f1, k4);
    double finish14 = user_time() + system_time();
    double start15 = user_time() + system_time();
    j.quick_select( f1, k5);
    double finish15 = user_time() + system_time();
    double start16 = user_time() + system_time();
    j.linear_select( f1, k6);
    double finish16 = user_time() + system_time();
    k2 = k1;
    cout << k1 << k2 << k3 << k4 << k5 << k6 << endl;
    assert(k1 == k2 && k2 == k3 && k3 == k4 && k4 == k5 && k5 == k6);
    

	double start21 = user_time() + system_time();
    j.sort_select(f2, k1);
    double finish21 = user_time() + system_time();
    double start22 = user_time() + system_time();
    // j.partial_sort_select( f2, k2);
    double finish22 = user_time() + system_time();
    double start23 = user_time() + system_time();
    j.min_heap_select( f2, k3);
    double finish23 = user_time() + system_time();
    double start24 = user_time() + system_time();
    j.partial_max_heap_select( f2, k4);
    double finish24 = user_time() + system_time();
    double start25 = user_time() + system_time();
    j.quick_select( f2, k5);
    double finish25 = user_time() + system_time();
    double start26 = user_time() + system_time();
    j.linear_select( f2, k6);
    double finish26 = user_time() + system_time();
    k2 = k1;
    cout << k1 << k2 << k3 << k4 << k5 << k6 << endl;
    assert(k1 == k2 && k2 == k3 && k3 == k4 && k4 == k5 && k5 == k6);
    // cout << k1 << k2 << k3 << k4 << k5 << k6 << endl;

	double start31 = user_time() + system_time();
    j.sort_select(f3, k1);
    double finish31 = user_time() + system_time();
    double start32 = user_time() + system_time();
    j.partial_sort_select( f3, k2);
    double finish32 = user_time() + system_time();
    double start33 = user_time() + system_time();
    j.min_heap_select( f3, k3);
    double finish33 = user_time() + system_time();
    double start34 = user_time() + system_time();
    j.partial_max_heap_select( f3, k4);
    double finish34 = user_time() + system_time();
    double start35 = user_time() + system_time();
    j.quick_select( f3, k5);
    double finish35 = user_time() + system_time();
    double start36 = user_time() + system_time();
    j.linear_select( f3, k6);
    double finish36 = user_time() + system_time();
    k2 = k1;
    cout << k1 << k2 << k3 << k4 << k5 << k6 << endl;
    assert(k1 == k2 && k2 == k3 && k3 == k4 && k4 == k5 && k5 == k6);
    // cout << k1 << k2 << k3 << k4 << k5 << k6 << endl;
	// start = user_time() + system_time();
 //        j.partial_sort_select( f, k);
 //        finish = user_time() + system_time();
    
 //        start = user_time() + system_time();
 //        j.min_heap_select(f, k);
 //        finish = user_time() + system_time();

 //        start = user_time() + system_time();
 //        j.linear_select( f, k);
 //        finish = user_time() + system_time();

 //        start = user_time() + system_time();
 //        j.quick_select( f, k);
 //        finish = user_time() + system_time();
 //        cout << "\nIt took approximately " << finish - start
 //         << " to quick select where the kth smallest is "<< k << endl;

         cout << "-----------------------------------------------------------------------------"<< endl;
cout << "Selection algorithm                      k = 1       k is the       k = n"<< endl;
cout <<  "                                                     median"<< endl;
cout << "============================================================================="<< endl;
cout << "sort select                           "<<finish11 - start11<<"     "<< finish21 - start21 <<"     "<< finish31 - start31 <<endl;
cout << endl;
cout << "-----------------------------------------------------------------------------"<< endl;
cout << "partial sort select                  "<<finish12 - start12<<"     "<< finish22 - start22 <<"     "<< finish32 - start32 <<endl;
cout << endl;
cout << "-----------------------------------------------------------------------------"<< endl;
cout << "minimum binary heap select                  "<<finish13 - start13<<"     "<< finish23 - start23 <<"     "<< finish33 - start33 <<endl;
cout <<endl;
cout << "-----------------------------------------------------------------------------"<< endl;
cout << "partial maximum binary heap select                  "<<finish14 - start14<<"     "<< finish24 - start24 <<"     "<< finish34 - start34 <<endl;
cout << endl;
cout << "-----------------------------------------------------------------------------"<< endl;
cout << "quickselect (with median-of-three                  "<<finish15 - start15<<"     "<< finish25 - start25 <<"     "<< finish35 - start35 <<endl;
cout << "rule for choosing the pivot)"<< endl;
cout << "-----------------------------------------------------------------------------"<< endl;
cout << "linear select (with median-of-median                  "<<finish16 - start16<<"     "<< finish26 - start26 <<"     "<< finish36 - start36 <<endl;
cout << "of-five rule for choosing the pivot)"<< endl;
cout << "-----------------------------------------------------------------------------"<< endl;

cout << "Table 2.  Timing results for the selection algorithms with n = 10000000."<< endl;


cout << "[Replace this first block with a statement indicating whether the"<< endl;
cout << "results you are reporting are from a single run or the average over"<< endl;
cout << "multiple runs.  If the times are averaged over multiple runs, indicate"<< endl;
cout << "the number of runs.]"<< endl;

cout << "[Replace this second block with the name of the machine in the CS"<< endl;
cout << "system on which you ran your timing tests (e.g., bg1 or ...).  If your"<< endl;
cout << "tests were run on a machine not on the CS network, then say so and"<< endl;
cout << "indicate the features of the machine upon which your tests were run.]"<< endl;

cout << "[Replace this third block with the list of options you used to compile"<< endl;
cout << "and create the executable used to run your timing tests.  In"<< endl;
cout << "particular, it is useful to know if you used compiler optimizations.]"<< endl;

cout << "[Finally, if you elect to leave one of the entries as \"NA\" (as"<< endl;
cout << "discussed in the project specifications), then replace this last block"<< endl;
cout << "with a thorough, but succinct, explanation of why.]" << endl;

}
