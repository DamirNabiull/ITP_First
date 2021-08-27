import java.io.*;
import java.util.Scanner;

public class codetest6 {
    public static void main(String[] args) throws IOException {
        FileReader In = new FileReader("input");
        FileWriter Out = new FileWriter("output");
        Scanner scanner = new Scanner(In);
        int a, ans = 0;
        a = scanner.nextInt();
        System.out.println(a);
        if(a==0){
            Out.write(-1);
        }else{
            for(int i = -1000; i <= 1000; i++){
                for(int j = -1000; j <= 1000; j++){
                    if(a+(i*j)==a*i+a*j){
                        ans++;
                        System.out.println(i + " " + j);
                    }
                }
            }
            System.out.println(ans);
            Out.write(""+ans);
        }
        In.close();
        Out.close();
        scanner.close();
    }
    
}
