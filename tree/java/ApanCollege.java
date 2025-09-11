import java.util.*;

public class ApanCollege {
    public static void main(String[] args) {
        byte a = 100;
        byte b = -50;
        byte[] byteArray = {10, 20, 30};

        System.out.println("Value of a: " + a);
        System.out.println("Value of b: " + b);

        System.out.println("Elements of byteArray:");
        for (byte val : byteArray) {
            System.out.println(val);
        }
    }
}