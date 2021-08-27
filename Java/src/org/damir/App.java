package org.damir;
import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);


        int d = in.nextInt();
        NumConverter conv = new NumConverter(d);
        System.out.println(conv.Bin());
        System.out.println(conv.Hex());
        System.out.println(conv.Dec());

        /*
        System.out.println("Write time in that form: hh mm ss");
        Time t1 = new Time(in.nextInt(), in.nextInt(), in.nextInt());
        Time t2 = new Time(in.nextInt(), in.nextInt(), in.nextInt());
        t1.Difference(t2);*/
    }
}