template<typename Lambda>
double rungekuttaX(double dt, double t, double y, Lambda&& fprima){
    double k1 = fprima(t, y);
    double k2 = fprima(t+dt/2, y+dt*k1/2);
    double k3 = fprima(t+dt/2, y+dt*k2/2);
    double k4 = fprima(t+dt, y+dt*k3);
    
    return y+dt*(k1+2*k2+2*k3+k4)/6;
}
