import java.util.Scanner;
 
public class Main {
    static Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
	    int n, h, roadWidth = 0;
	    n = scanner.nextInt();
        h = scanner.nextInt();
 
        int[] arr = new int[n];
        for (int i = 0; i < n; i++){
            arr[i] = scanner.nextInt();
 
            if (arr[i] > h){
                roadWidth += 2;
            } else {
                roadWidth++;
            }
        }
        System.out.println(roadWidth);
 
    }
}
