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
	GroupOfNumbers m;
	
//	j = GroupOfNumbers(2500);
	j = GroupOfNumbers(0, 100, 100);
	//j = GroupOfNumbers(7);	
	//cout << j.total();
//	for(int i =0; i < 2500; i++)
//	{
	  //j.add(3);
	  //j.add(7);
	  //j.add(9);
	  //j.add(4);
	  //j.add(5);
	  //j.add(1);
//	  j.add(5);
//	}
	m = GroupOfNumbers(j);
	//j.displayGroupOfNumbers();
	//j.remove(1);j.displayGroupOfNumbers();
	//j.remove(2);j.displayGroupOfNumbers();
	//j.remove(4);j.displayGroupOfNumbers();
	//j.remove(3);
	//j.displayGroupOfNumbers();
	//j.writeGroupOfNumbersTo("text2.txt");
	//j.displayGroupOfNumbers();
	
	double start = user_time() + system_time();
	j.insertion_sort();
	double finish = user_time() + system_time();
	cout << "\nIt took approximately " << finish - start 
         << " to insertion sort" << endl;
	//j.displayGroupOfNumbers();
	j = m;
	//j.displayGroupOfNumbers();
	start = user_time() + system_time();
	j.quick_choose_middle();
	finish = user_time() + system_time();
	cout << "\nIt took approximately " << finish - start 
         << " to quick choose middle sort" << endl;
	//j.displayGroupOfNumbers();

	j = m;
	//j.displayGroupOfNumbers();
	start = user_time() + system_time();
	j.quick_choose_last();
	finish = user_time() + system_time();
	cout << "\nIt took approximately " << finish - start 
         << " to quick choose last sort" << endl;
	//j.displayGroupOfNumbers();	
		j.displayGroupOfNumbers();
	j = m;
	//j.displayGroupOfNumbers();
	start = user_time() + system_time();
	j.quick_choose_first();
	finish = user_time() + system_time();
	cout << "\nIt took approximately " << finish - start 
         << " to quick choose first sort" << endl;
	//j.displayGroupOfNumbers(); 
	 	j.displayGroupOfNumbers();
	j = m;
	start = user_time() + system_time();
	j.mergesort();
	finish = user_time() + system_time();
	 cout << "\nIt took approximately " << finish - start 
         << " to merge sort" << endl;
	 
	 j = m;
	 start = user_time() + system_time();
	j.heapsort();
	finish = user_time() + system_time();
	 cout << "\nIt took approximately " << finish - start 
         << " to heap sort" << endl;
	 
	 j = m;
	 start = user_time() + system_time();
	j.quicksort();
	finish = user_time() + system_time();
	 cout << "\nIt took approximately " << finish - start 
         << " to quick sort" << endl;
	//GroupOfNumbers m;
	//m = GroupOfNumbers(j);
	//m.displayGroupOfNumbers();
	//j.displayGroupOfNumbers();
	//cout << j.total();
	//if(j.isEmpty()==1){
	//cout << "Oheyder";	
	//}
	//j.displayGroupOfNumbers();
}
