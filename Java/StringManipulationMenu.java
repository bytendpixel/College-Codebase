import java.util.Scanner;

public class StringManipulationMenu {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input;
        String option;

        do {
            System.out.println("Choose an option:");
            System.out.println("a. String compare");
            System.out.println("b. String compare ignoring case");
            System.out.println("c. String reverse");
            System.out.println("d. Change to uppercase");
            System.out.println("e. Change to lowercase");
            System.out.println("f. END");

            option = scanner.nextLine();

            switch (option) {
                case "a":
                    System.out.println("Enter the first string:");
                    String str1 = scanner.nextLine();
                    System.out.println("Enter the second string:");
                    String str2 = scanner.nextLine();
                    int compareResult = str1.compareTo(str2);
                    if (compareResult == 0) {
                        System.out.println("Strings are equal.");
                    } else {
                        System.out.println("Strings are not equal.");
                    }
                    break;

                case "b":
                    System.out.println("Enter the first string:");
                    String str3 = scanner.nextLine();
                    System.out.println("Enter the second string:");
                    String str4 = scanner.nextLine();
                    int compareIgnoreCaseResult = str3.compareToIgnoreCase(str4);
                    if (compareIgnoreCaseResult == 0) {
                        System.out.println("Strings are equal ignoring case.");
                    } else {
                        System.out.println("Strings are not equal ignoring case.");
                    }
                    break;

                case "c":
                    System.out.println("Enter the string to reverse:");
                    input = scanner.nextLine();
                    String reversed = new StringBuilder(input).reverse().toString();
                    System.out.println("Reversed string: " + reversed);
                    break;

                case "d":
                    System.out.println("Enter the string to convert to uppercase:");
                    input = scanner.nextLine();
                    String uppercase = input.toUpperCase();
                    System.out.println("Uppercase string: " + uppercase);
                    break;

                case "e":
                    System.out.println("Enter the string to convert to lowercase:");
                    input = scanner.nextLine();
                    String lowercase = input.toLowerCase();
                    System.out.println("Lowercase string: " + lowercase);
                    break;

                case "f":
                    System.out.println("Exiting the program. Goodbye!");
                    break;

                default:
                    System.out.println("Invalid option. Please choose a valid option.");
                    break;
            }
        } while (!option.equals("f"));

        scanner.close();
    }
}
