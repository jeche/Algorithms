#include <iostream>
#include <vector>
using namespace std;

int getInvCount(vector<int> &arr, int n)
{
  int inv_count = 0;
  int i, j;
 
  for(i = 0; i < n - 1; i++)
    for(j = i+1; j < n; j++)
      if(arr[i] > arr[j])
        inv_count++;
 
  return inv_count;
}

inline int leftChild(int i)
{
  return 2 * i + 1;
}

int percDown( vector<int> & a, int i, int n, int countPerc)
{
  int child;
  int tmp;
  for( tmp = a[i]; leftChild(i) < n; i = child)
  {
    child = leftChild(i);
    if(child != n-1 && a[child] < a[child +1])
      child++;
    if(tmp < a[child]){
      a[i] = a[child]; countPerc++;}
    else
      break;
    
  }
  //cout <<countPerc << " PERC" << endl;
  a[i] = tmp;
  return countPerc;
}

void heapSort( vector<int> & a )
{
  int countPerc=0;
 for( int i = 12 / 2; i>=0; i--){
   countPerc = percDown(a, i, 12, countPerc);
   cout<< a[0] <<"& " << a[1]<<"& " << a[2]<<"& " << a[3]<<"& " << a[4]<<"& "<< a[5]<<"& "<< a[6]<<"& "<< a[7]<<"& "<< a[8] <<"& "<< a[9]<<"& "<< a[10]<<"& "<< a[11]<< "& " << countPerc<< "&" << getInvCount(a, 12) << " \\"<< "\\" <<endl;
 }
 for( int j = 12 - 1; j > 0; j--)
 {
   swap(a[0], a[j]);countPerc++;
   //cout << "SWAP LOOP: "<< a[0] <<"& " << a[1]<<"& " << a[2]<<"& " << a[3]<<"& " << a[4]<<"& "<< a[5]<<"& "<< a[6]<<"& "<< a[7]<<"& "<< a[8] <<"& "<< a[9]<<"& "<< a[10]<<"& "<< a[11]<< endl;
   countPerc = percDown(a, 0, j, countPerc);
   cout << a[0] <<"& " << a[1]<<"& " << a[2]<<"& " << a[3]<<"& " << a[4]<<"& "<< a[5]<<"& "<< a[6]<<"& "<< a[7]<<"& "<< a[8] <<"& "<< a[9]<<"& "<< a[10]<<"& "<< a[11]<< "& " << countPerc << "&" << getInvCount(a, 12) << "\\"<< "\\"<<endl;
 }
    cout <<countPerc << " PERC" << endl;
    cout << a[0] <<" " << a[1]<<" " << a[2]<<" " << a[3]<<" " << a[4]<<" "<< a[5]<<" "<< a[6]<<" "<< a[7]<<" "<< a[8] <<" "<< a[9]<<" "<< a[10]<<" "<< a[11]<< endl;
}




int main()
{
vector<int> v(12);
v[0] = 42;
v[1] = 57;
v[2] = 7;
v[3] = 40;
v[4] = 83;
v[5] = 78;v[6] =  86; v[7] = 89; v[8] = 80; v[9] = 91; v[10] = 79; v[11] = 84 ;

heapSort(v);
cout << v[0] <<" " << v[1]<<" " << v[2]<<" " << v[3]<<" " << v[4]<<" "<< v[5]<<" "<< v[6]<<" "<< v[7]<<" "<< v[8] <<" "<< v[9]<<" "<< v[10]<<" "<< v[11]<< endl;
return 0;
}
