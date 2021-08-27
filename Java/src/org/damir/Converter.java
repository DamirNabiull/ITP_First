package org.damir;

public class Converter {
    double f;
    double c;

    public Converter(double a){
        f = a;
    }

    public double convert(){
        c = ((f-32)/1.8);
        return c;
    }
}
