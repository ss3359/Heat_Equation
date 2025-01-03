//
//  Scapula.cpp
//  SKELETON
//
//  Created by Owner on 1/2/25.
//


#include "Scapula.hpp"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <thread>
#include <random>
#include <complex>
#include <iomanip>

using namespace std;

double Heat::f(double x,double t){
    return sin(PI*x);
}

void Heat::PrintGrid(){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout<<u[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Heat::UpdateGrid(){
    for(int i=0; i<N; i++){
        double x=i*dx;
        u[i][0]=f(x,0); //Initial Condition at t=0.
    }
    
    for(int j=0;j<M-1;j++){
        for(int i=0;i<N;i++){
            if(i==0||i==N-1){
                u[i][j+1]=0; //Apply Left Boundary Condition
            }
           
            else{
                u[i][j+1]=u[i][j]+alpha*(u[i+1][j]-2*u[i][j]-u[i-1][j]);
            }
            PrintGrid();
        }
    }
}




//
//double Heat::Uxx(double x,double t){
//    return (u(x+dx,t)-2*u(x,t)-u(x-dx,t))/(dx*dx);
//}
//double Heat::Ut(double x, double t){
//    return(u(x,t+dt)-u(x,t))/(dt);
//}
