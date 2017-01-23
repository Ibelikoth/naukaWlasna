
package javaapplication3;
        import java.util.Calendar;
        import java.util.GregorianCalendar;
        import java.util.Scanner;
        import java.util.regex.Matcher;
        import java.util.regex.Pattern;
public class JavaApplication3 {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
         Scanner scanner = new Scanner(System.in);
 
                System.out.println("Podaj liczbę do sprawdzenia");
                String dzieńPodanyPrzezUżytkownika = scanner.nextLine();
 
                Pattern pattern = Pattern.compile("^[0-9]+$");
                Matcher matcher = pattern.matcher(dzieńPodanyPrzezUżytkownika.trim());
 
                if (!matcher.matches()) {
                    System.out.println("Prosze podać liczbę");
                    System.exit(0);
                }
 
                Calendar calendar = GregorianCalendar.getInstance();
                Integer dzień = calendar.get(Calendar.DAY_OF_WEEK);
                Integer dzieńPPUInteger = Integer.parseInt(dzieńPodanyPrzezUżytkownika);
 
                System.out.println("Czy dziś jest " + dzieńPodanyPrzezUżytkownika
                    + " dzień tygodnia? "
                    + (dzień.equals(dzieńPPUInteger) ? "tak" : "nie"));
            }
        }