//
//  Scapula.hpp
//  SKELETON
//
//  Created by Owner on 1/2/25.
//

#ifndef Scapula_hpp
#define Scapula_hpp

#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <thread>
#include <random>
#include <complex>
#include <iomanip>

using namespace std;

/*
 Let's First write up the Solution for the Heat Equation using central differences
 */

const double PI=3.14159256358;

class Heat{
    
private:
    
    double L=1;
    double N=10;
    double M=50;
    double T=0.1;
    double k=1;

    double dx=L/N;
    double dt=T/M;
    double alpha=k*(dt/(dx*dx));
public:
  
    double t=0.0;
   
    vector<vector<double>> u; //Grid
//    double Uxx(double x,double t);
//    double Ut(double x, double t);
    Heat():u(N,vector<double>(M,0)){
        
    }
    double f(double x,double t);
    void UpdateGrid();
    void PrintGrid(); 

};


#endif /* Scapula_hpp */
