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
	GroupOfNumbers m;
	// long y = 100;
//	j = GroupOfNumbers(10);
	// j = GroupOfNumbers(0, y, y);
   // m = j;
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
    j = GroupOfNumbers(0, 250000, 250000);
    m = j;
	double start11 = user_time() + system_time();
    j.insertion_sort();
    double finish11 = user_time() + system_time();
    j = m;
    double start12 = user_time() + system_time();
    j.heapsort();
    double finish12 = user_time() + system_time();
    j = m;
    double start13 = user_time() + system_time();
    j.mergesort();
    double finish13 = user_time() + system_time();
    j = m;
    double start14 = user_time() + system_time();
    j.quicksort();
    double finish14 = user_time() + system_time();
    j = m;
    double start15 = user_time() + system_time();
    j.quick_choose_first();
    double finish15 = user_time() + system_time();
    j = m;
    double start16 = user_time() + system_time();
    j.quick_choose_middle();
    double finish16 = user_time() + system_time();
    j = m;
    double start17 = user_time() + system_time();
    j.quick_choose_last();
    double finish17 = user_time() + system_time();

    j = GroupOfNumbers(250000);
    for(long i = 0; i < 250000; i++)
        j.add(i);
    m = j;
	double start21 = user_time() + system_time();
    j.insertion_sort();
    double finish21 = user_time() + system_time();
    j = m;
    double start22 = user_time() + system_time();
    j.heapsort();
    double finish22 = user_time() + system_time();
    j = m;
    double start23 = user_time() + system_time();
    j.mergesort();
    double finish23 = user_time() + system_time();
    j = m;
    double start24 = user_time() + system_time();
    j.quicksort();
    double finish24 = user_time() + system_time();
    j = m;
    double start25 = user_time() + system_time();
    j.quick_choose_first();
    double finish25 = user_time() + system_time();
    j = m;
    double start26 = user_time() + system_time();
    j.quick_choose_middle();
    double finish26 = user_time() + system_time();
    j = m;
    double start27 = user_time() + system_time();
    j.quick_choose_last();
    double finish27 = user_time() + system_time();

    j = GroupOfNumbers(250000);
    for(long i = 250000; i > 0; i--)
        j.add(i);
    m = j;
	double start31 = user_time() + system_time();
    j.insertion_sort();
    double finish31 = user_time() + system_time();
    j = m;
    double start32 = user_time() + system_time();
    j.heapsort();
    double finish32 = user_time() + system_time();
    j = m;
    double start33 = user_time() + system_time();
    j.mergesort();
    double finish33 = user_time() + system_time();
    j = m;
    double start34 = user_time() + system_time();
    j.quicksort();
    double finish34 = user_time() + system_time();
    j = m;
    double start35 = user_time() + system_time();
    j.quick_choose_first();
    double finish35 = user_time() + system_time();
    j = m;
    double start36 = user_time() + system_time();
    j.quick_choose_middle();
    double finish36 = user_time() + system_time();
    j = m;
    double start37 = user_time() + system_time();
    j.quick_choose_last();
    double finish37 = user_time() + system_time();

    j = GroupOfNumbers(250000);
    for(long i = 0; i < 250000; i++)
        j.add(1);
    m = j;
    double start41 = user_time() + system_time();
    j.insertion_sort();
    double finish41 = user_time() + system_time();
    j = m;
    double start42 = user_time() + system_time();
    j.heapsort();
    double finish42 = user_time() + system_time();
    j = m;
    double start43 = user_time() + system_time();
    j.mergesort();
    double finish43 = user_time() + system_time();
    j = m;
    double start44 = user_time() + system_time();
    j.quicksort();
    double finish44 = user_time() + system_time();
    j = m;
    double start45 = user_time() + system_time();
    j.quick_choose_first();
    double finish45 = user_time() + system_time();
    j = m;
    double start46 = user_time() + system_time();
    j.quick_choose_middle();
    double finish46 = user_time() + system_time();
    j = m;
    double start47 = user_time() + system_time();
    j.quick_choose_last();
    double finish47 = user_time() + system_time();

cout << "-----------------------------------------------------------------------------"<< endl;
cout << "Sorting method              randomly     sorted       sorted       identical"<< endl;
cout << "(including pivot            generated    in order     in reverse   elements"<< endl;
cout <<  "rules for quicksort)                                                     "<< endl;
cout << "============================================================================="<< endl;
cout << "insertion sort                           "<<finish11 - start11<<"     "<< finish21 - start21 <<"     "<< finish31 - start31<<"     "<< finish41 - start41  <<endl;
cout << endl;
cout << "-----------------------------------------------------------------------------"<< endl;
cout << "heapsort                 "<<finish12 - start12<<"     "<< finish22 - start22 <<"     "<< finish32 - start32 <<"     "<< finish42 - start42  <<endl;
cout << endl;
cout << "-----------------------------------------------------------------------------"<< endl;
cout << "mergesort                  "<<finish13 - start13<<"     "<< finish23 - start23 <<"     "<< finish33 - start33<<"     "<< finish43 - start43  <<endl;
cout <<endl;
cout << "-----------------------------------------------------------------------------"<< endl;
cout << "quicksort with pivot rule:                 "<<finish14 - start14<<"     "<< finish24 - start24 <<"     "<< finish34 - start34 <<"     "<< finish44 - start44  <<endl;
cout << "choose median of 3"<<endl;
cout << "-----------------------------------------------------------------------------"<< endl;
cout << "quicksort with pivot rule:                 "<<finish15 - start15<<"     "<< finish25 - start25 <<"     "<< finish35 - start35 <<"     "<< finish45 - start45  <<endl;
cout << "choose first element"<< endl;
cout << "-----------------------------------------------------------------------------"<< endl;
cout << "quicksort with pivot rule:                   "<<finish16 - start16<<"     "<< finish26 - start26 <<"     "<< finish36 - start36 <<"     "<< finish46 - start46  <<endl;
cout << "choose middle element"<< endl;
cout << "-----------------------------------------------------------------------------"<< endl;
cout << "quicksort with pivot rule:                   "<<finish17 - start17<<"     "<< finish27 - start27 <<"     "<< finish37 - start37 <<"     "<< finish47 - start47  <<endl;
cout << "choose last element"<< endl;
cout << "-----------------------------------------------------------------------------"<< endl;

cout << "Table 1.  Timing results for the sorting algorithms with n = 250000."<< endl;


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

}
