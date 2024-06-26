// package Lab_Work_1;

import java.util.*;

public class Sixteen {
    public static void main(String[]args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("*****RESTAURANT MENU*****");
        System.out.println("1. Pizza");
        System.out.println("2. Momo");
        System.out.println("Waht do you want to order?[1-3]: ");
        int choice = sc.nextInt();
        switch (choice) {
            case 1:
                System.out.println("*****PIZZA VARIETIES*****");
                System.out.println("1.Chicken Pizza - Rs 660");
                System.out.println("2.Cheese Pizza - Rs 550");
                System.out.println("What do you want to order?[1-2]: ");
                choice = sc.nextInt();
                switch (choice) {
                    case 1:
                        System.out.println("You ordered chicken pizza");
                        break;
                    case 2:
                        System.out.println("You ordered Cheese Pizza");
                        break;
                    default:
                        System.out.println("Not available");
                }
                break;

            case 2:
                System.out.println("*****MOMO VARIETIES*****");
                System.out.println("1.Chicken MOMO - Rs 130");
                System.out.println("2.Buff MOMO - Rs 120");
                System.out.println("What do you want to order?[1-2]: ");
                choice = sc.nextInt();
                switch (choice) {
                    case 1:
                        System.out.println("You ordered chicken momo");
                        break;
                    case 2:
                        System.out.println("You ordered buff momo");
                        break;
                    default:
                        System.out.println("Not available");
                }
                break;
            default:
                System.out.println("Not available");
        }

    }
}
