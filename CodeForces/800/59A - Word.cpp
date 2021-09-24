import java.util.Scanner;
 
public class Main {
    static Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        String str = scanner.next();
        int uppers = 0, lowers = 0;
        for (int i = 0; i < str.length(); i++){
            if (Character.isLowerCase(str.charAt(i))){
                lowers++;
            } else
                uppers++;
        }
 
        if (uppers <= lowers){
            System.out.println(str.toLowerCase());
        } else
            System.out.println(str.toUpperCase());
    }
}
