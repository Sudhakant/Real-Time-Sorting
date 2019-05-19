#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

using namespace std;

class RealSort
{
	public:	
	vector <int> randn (int n=100)
{
	srand(time(0));
	vector <int> v;
	for(int i=0; i<n; i++)
	v.push_back(rand()%n);
	return v;
}
vector <int> selectionSort(vector <int> arr, int n)  
{  
    int i, j, min_idx;
	vector <int> v;  
    for (i = 0; i < n-1; i++)  
    {  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
     {
		  if (arr[j] < arr[min_idx])  
            min_idx = j;
			for (int k=0;k<n;k++)
			{
			line(k*5,0,k*5,arr[k]+50); 	
			}
			cleardevice();}
        iter_swap(arr.begin()+min_idx, arr.begin()+i);
     for (int k=0;k<n;k++)
			{
				line(k*5,0,k*5,arr[k]+50);   
					}
					

			cleardevice();
    }  
  cleardevice(); 
    return arr;
} 
};


  
int main()  
{
	RealSort r;
  vector <int> arr,sort;
arr=r.randn();
int n=arr.size();
int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
 
   sort= r.selectionSort(arr, n);
   cleardevice();
   for (int k=0;k<n;k++)
				line(k*5,0,k*5,sort[k]+50); 
				
    getch();
	closegraph();
    return 0; 
}  

//OUTPUT: For 100
// https://drive.google.com/file/d/1YnessbpwSWsVexRnKjLfzwtyo5VLC0tY/view
