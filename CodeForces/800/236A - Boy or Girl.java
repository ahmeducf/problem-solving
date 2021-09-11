
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    static Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
	    String str = scanner.next();
        String temp = "";
        int cnt = 0;
        
        for (int i = 0; i < str.length(); i++){
            if (!temp.contains(String.valueOf(str.charAt(i)))){
                cnt++;
                temp += str.charAt(i);
            }
        }

        if (cnt % 2 == 0){
            System.out.println("CHAT WITH HER!");
        } else {
            System.out.println("IGNORE HIM!");
        }

    }
}

