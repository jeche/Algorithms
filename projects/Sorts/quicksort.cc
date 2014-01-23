#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> & a, int left, int right)
{
  int j;
  for(int p = left + 1; p < right + 1; p++)
  {
    int count = 0;
    int tmp = a[p];
    for(j = p; j > 0 && tmp < a[j-1]; j--)
    {a[j] = a[j-1]; count++;}
    a[j] = tmp;
    cout<< "InsertionSort p = " <<p <<" &"<<a[0] <<"& " << a[1]<<"& " << a[2]<<"& " << a[3]<<"& " << a[4]<<"& "<< a[5]<<"& "<< a[6]<<"& "<< a[7]<<"& "<< a[8] <<"& "<< a[9]<<"& "<< a[10]<<"& "<< a[11]<<"&&" << count<< "\\" << "\\"<<  endl;
  }
}

const int & median3( vector<int> & a, int left, int right )
{
  int center = ( left + right) / 2;
  if( a[center] < a[left])
  {swap( a[left], a[center]);
    cout << "1" << endl;
  }
  if( a[right] < a[left])
  { swap( a[left], a[right]);
    cout << "1" << endl;
  }
  if(a[right] < a[center])
  {swap(a[center], a[right]);
    cout << "1" << endl;
  }
  cout << "1" << endl;
  swap(a[center], a[right - 1]);
  return a[right-1];
}
/*
const int & middle( vector<int> & a, int left, int right )
{
int center = ( left + right ) / 2;
// Place pivot at position right
swap( a[ center ], a[ right ] );
return a[ right ];
}*/

void quicksort( vector<int> & a, int left, int right)
{
  cout<<"Quicksort("<< left << ", " << right<< ")"<< "&"<<a[0] <<"& " << a[1]<<"& " << a[2]<<"& " << a[3]<<"& " << a[4]<<"& "<< a[5]<<"& "<< a[6]<<"& "<< a[7]<<"& "<< a[8] <<"& "<< a[9]<<"& "<< a[10]<<"& "<< a[11]<<"&" <<"9" <<"\\" << "\\"<<  endl;
  if( left + 2 <= right)
  {
    //int pivot = median3(a, left, right);
    //int pivot =middle( a, left, right );
    int pivot = a[left];
    cout<<"Quicksort("<< left << ", " << right<< ")"<< "&"<<a[0] <<"& " << a[1]<<"& " << a[2]<<"& " << a[3]<<"& " << a[4]<<"& "<< a[5]<<"& "<< a[6]<<"& "<< a[7]<<"& "<< a[8] <<"& "<< a[9]<<"& "<< a[10]<<"& "<< a[11]<<"&" <<"13"<< "\\" << "\\"<<  endl;
    //int i = left, j = right - 1;
    int i = left, j = right - 1;
    for( ; ;)
    {
      while(a[++i] < pivot ) { }
      while(pivot < a[--j]) { }
      //while(j > left && pivot < a[ --j ] ) { }
      if( i < j)
      {
	swap( a[i], a[j]);
	cout << "1" << endl;
      }
      else
	break;
    }
    //swap(a[i],a[right-1]);
    swap( a[ i ], a[ right ] ); // Restore pivot
    cout << "1" << endl;
    cout<<"Quicksort("<< left << ", " << right<< ")"<< "&"<<a[0] <<"& " << a[1]<<"& " << a[2]<<"& " << a[3]<<"& " << a[4]<<"& "<< a[5]<<"& "<< a[6]<<"& "<< a[7]<<"& "<< a[8] <<"& "<< a[9]<<"& "<< a[10]<<"& "<< a[11]<<"&" << "27"<< "\\" << "\\"<<  endl;
    quicksort(a, left, i-1);
    quicksort(a, i+1 , right);
    
  }
  else
    insertionSort(a, left, right);
  }

void quicksort( vector<int> & a)
{
 quicksort(a, 0, 12 - 1); 
}

int main()
{
vector<int> v(12);
vector<int> tmpArray(12);
v[0] = 42;
v[1] = 57;
v[2] = 7;
v[3] = 40;
v[4] = 83;
v[5] = 78;v[6] =  86; v[7] = 89; v[8] = 80; v[9] = 91; v[10] = 79; v[11] = 84 ;

quicksort(v);
cout << v[0] <<" " << v[1]<<" " << v[2]<<" " << v[3]<<" " << v[4]<<" "<< v[5]<<" "<< v[6]<<" "<< v[7]<<" "<< v[8] <<" "<< v[9]<<" "<< v[10]<<" "<< v[11]<< endl;
return 0;
}
