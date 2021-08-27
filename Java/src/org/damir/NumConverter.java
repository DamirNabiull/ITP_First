package org.damir;

public class NumConverter {

    int a, dec;

    public NumConverter(int d){
        dec = d;
        a = d;
    }


    public String Bin(){
        String ans = "";
        while(a>0){
            if(a%2==0){
                ans = '0' + ans;
            }else{
                ans = '1' + ans;
            }
            a/=2;
        }
        a = dec;
        return ans;
    }

    public String Hex(){
        String ans = "";
        while(a>0){
            if(a%16<10){
                ans = (char)(a%16+48) + ans;
            }else{
                ans = (char)(a%16+55) + ans;
            }
            a/=16;
        }
        a = dec;
        return ans;
    }

    public int Dec(){
        return dec;
    }

}
