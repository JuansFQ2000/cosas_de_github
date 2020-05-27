#include <iostream>
#include <vector>
#include <fstream>
#include "funciones.h"

using namespace std;

int main(){
    double t=0, dt = 0.01;
    double x = 8.5;
    double v = 20;
    
    std::vector<double> xList;
    std::vector<double> vList;
    std::vector<double> tList;
    
    xList.push_back(x);
    vList.push_back(v);
    tList.push_back(t);
    
    for(int i = 0; x>= 0; i++){
        cout << t << "," << x << endl;
        
        double v = rungekuttaX(dt/2,t,vList[vList.size()-1],[](double t, double v)->double{
            double g = -9.8;
            return g;
        });
        vList.push_back(v);
        
        v = rungekuttaX(dt,t,vList[vList.size()-2],[](double t, double v)->double{
            double g = -9.8;
            return g;
        });
        vList.push_back(v);
     
        x = rungekuttaX(dt,t,xList[xList.size()-1],[=](double t, double x)->double{
            return vList[(int)(t/(dt/2)+0.5)];
        });          
        xList.push_back(x);
        
        t += dt;
        tList.push_back(t);
    } 
    
    return 0;
}