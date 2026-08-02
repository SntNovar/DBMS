import java.util.*;


public class exp1_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Eneter n: ");
        int n = sc.nextInt();

        System.out.print("enter choice :\n");
         System.out.print("1 : for recursive \n 2: for iterative");
         int choice = sc.nextInt();
        
        switch(choice) {
            case 1: int fibbb =fib(n);
                    System.out.print(fibbb);
                    break;
            case 2: iterative(n);
                   
                    break;
            default : System.out.print("Enter valid choice \n");
        }

    } 


        static int fib(int n) {
             if (n == 0)
                return 0;

            if (n == 1)
                return 1;

         return fib(n - 1) + fib(n - 2);
            
        }

        static void iterative(int n) {
    int a = 0;
    int b = 1;

    for (int i = 1; i <= n; i++) {
        System.out.print(a + " ");
        int c = a + b;
        a = b;
        b = c;
    }
}
    }
    

