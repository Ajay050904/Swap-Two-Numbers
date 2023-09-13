import java.util.Scanner;

class Swapping_In_Java {
    public static void main(String[] args) {
        int a, b;
        Scanner sc = new Scanner(System.in);
        System.out.print("\t\t <- To Swap Two Numbers -> \n  \t\t ************************* \n");
        System.out.print("Enter 1 number : ");
        a = sc.nextInt();
        System.out.print("Enter 2 number : ");
        b = sc.nextInt();
        System.out.println("Before Swapping : \n" + "\t\ta = " + a + "\t\tb = " + b);
        System.out.println("\t\tAddress of variable a = " + System.identityHashCode(a) + "\n\t\tAddress of variable b = " + System.identityHashCode(b));
        int temp = a;
        a = b;
        b = temp;
        System.out.println("After Swapping : \n" + "\t\ta = " + a + "\t\tb = " + b);
        System.out.println("\t\tAddress of variable a = " + System.identityHashCode(a) + "\n\t\tAddress of variable b = " + System.identityHashCode(b));
        sc.close();
    }
}

/*
 * Java does not provide a direct way to obtain the memory addresses of variables like C or C++.
 * This is because Java handles memory management and garbage collection automatically, abstracting away the need for explicit memory management.
 * If you want to print out some sort of identifier for the variables, you can use their hash codes:
 * The 'System.identityHashCode()' method returns a hash code for an object.
 * It's not a memory address, but it provides a unique identifier for the object during its lifetime. 
 * Keep in mind that this identifier may change if the object is moved around in memory due to garbage collection.
 */