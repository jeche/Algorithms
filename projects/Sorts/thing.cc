#include <iostream>
#include <vector>
using namespace std;

int main()
{
//vector<int> v(55);
//vector<int> tmpArray(55);
int v [55] = {26, 33, 88, 49, 102, 58, 78, 115, 101, 66, 59, 68, 67, 54, 83, 27, 98, 28, 94, 32, 71, 22, 42, 37, 105, 39, 44, 45, 81, 93, 24, 50, 95, 61, 41, 74, 99, 96, 70, 85, 69, 110, 104, 89, 79, 77, 57, 63, 60, 62, 43, 53, 51, 56, 55};
int j[28];
int k[28];
int jc = 0;
int kc = 0;
for(int m = 0; m <28; m++){
 j[m] = 0;
 k[m] = 0;
}
//mergeSort(v, tmpArray, 0, 12 -1);
for(int i = 0; i < 55; i++){
//cout << v[i] <<"& " << v[i+5]<<"& " << v[i+10]<<"& " << v[i+15]<<"& " << v[i+20]<<"& "<< v[i+25]<<"& "<< v[i+30]<<"& "<< v[i+35]<<"& "<< v[i+40] <<"& "<< v[i+45]<<"& "<< v[i +50]<<"\\\\ "<< endl;
if(v[i] < 53)
{
  j[jc] = v[i];
  jc++;
}
if(v[i] > 53)
{
  k[kc] = v[i];
  kc++;
}
}

for(int u = 0; u < 25; u= u + 5){
 cout << k[u] <<"& " << k[u+1]<<"& " << k[u+2]<<"& " << k[u+3]<<"& " << k[u+4]<<"\\\\ "<< endl;
}
return 0;
}