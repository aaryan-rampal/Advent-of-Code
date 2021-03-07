package day.pkg21;

import java.util.regex.Pattern;

public class Day21 {

    public static void main(String[] args) {

        String [] newLines = Day2.input().split("\n");
        
        int [] min = new int [1000];
        int [] max = new int [1000];
        char [] letter = new char [1000];
        String [] password = new String [1000];
        
        for (int i = 0; i < 1000; i++) {
            
            String[] bro = Day2.everything(Day2.input());
            
            System.out.println(bro[0]);
            System.out.println(bro[1]);
            System.out.println(bro[2]);
            
        }
          
        
    
    }

}
