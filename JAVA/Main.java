// Source code is decompiled from a .class file using FernFlower decompiler (from Intellij IDEA).
import java.util.Scanner;
public class Main {
   public Main() {
   }

   public static void main(String[] args) {
      Scanner in =new Scanner (System.in);
      double a,b,c,x1,x2;
      a=in.nextDouble();
      b=in.nextDouble();
      c=in.nextDouble();
      double d=(b*b)-(4*a*c);
      if(d>0)
      {
         x1=(-b+Math.sqrt(d))/(2*a);
         x2=(-b-Math.sqrt(d))/(2*a);
         System.out.println("Root ist is: "+ x1+ ", Root second is: "+x2);
      }
      else if (d==0)
      {
         x1=-b/(2*a);
         System.out.println(" Equal Root is: "+ x1);
      }
      else
      {
          System.out.println("No real solutions");
      }
      in.close();
   }
}
