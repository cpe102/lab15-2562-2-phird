#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
}

//Write definition of randData(), showData() and findColSum()

void randData(double *x,int N ,int M){
	for (int i = 0; i < N*M; i++)
	{
		*(x+i) = (rand()%100)*0.01; 
	}
	}


void findColSum(const double *d,double *r,int N,int M){
	int t=0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			*(r+j) += *(d+((i*M)+j));	
			t++;
		}	
	}}

void showData(double *x,int y,int z){
	int t=0;
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < z; j++)
		{
			cout << setw(5) << *(x+t) << " " ;
			t++;
		}
		cout << endl;
		} }