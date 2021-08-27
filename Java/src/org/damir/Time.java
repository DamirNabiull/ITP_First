package org.damir;

public class Time {
    int hour;
    int min;
    int sec;
    public Time(int a, int b, int c){
        hour = a;
        min = b;
        sec = c;
    }

    public void Difference(Time t2){
        int seconds1 = hour*3600 + min*60 + sec;
        int seconds2 = t2.hour*3600 + t2.min*60 + t2.sec;
        seconds1 = Math.abs(seconds1-seconds2);
        System.out.print(seconds1/3600 + " " + (seconds1/60)%60 + " " + seconds1%60);
    }
}
