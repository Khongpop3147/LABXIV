#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[],int N,double B[]){
    double Ans = 0,Ans2 = 0, Ans3 =1 ;
    for(int n=0;n<N; n++){
        Ans+=A[n];
        
    }B[0]=Ans/N;

    for(int n=0;n<N; n++){
        Ans2+=pow(A[n]-B[0],2);
        B[1]=sqrt(Ans2/N);

    }

   for(int n=0;n<N; n++){
        Ans3*=A[n];
        
    }B[2]=pow(Ans3,1.0/N);
    
    Ans =0;
    for(int n=0;n<N; n++){
        Ans+=1.0/A[n];
        }B[3]=N/Ans;
        
    B[4]=*max_element(A,A+N);
    B[5]=*min_element(A,A+N);
    


}

