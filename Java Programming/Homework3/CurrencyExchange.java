import java.util.Scanner;

public class CurrencyExchange{

	public static void ShowMenu(){
		Scanner input = new Scanner(System.in);
	
	   System.out.println("Hello, Welcome to the Currency Exchange Program");
	   System.out.println("Please select which currency you'd like to convert from");
	   System.out.println("1. USD ");
	   System.out.println("2. GBP ");
	   System.out.println("3. CHF");
	   System.out.println("4. INR");
	   
	   int convert_from_choice = input.nextInt();
	   Conversion(convert_from_choice);
	}

	public static int Conversion(int choice){
		Scanner read = new Scanner(System.in);

	   double USD_GBP = 0.772268;
	   double USD_CHF = 0.910585;
	   double USD_INR = 73.4772;
	   double GBP_USD = 1.29498;
	   double GBP_CHF = 1.17887;
	   double GBP_INR = 95.1467;
	   double CHF_USD = 1.09820;
	   double CHF_GBP = 0.848271;
      double CHF_INR = 80.7070;
	  double INR_USD = 0.0136097;
	  double INR_GBP = 0.0105101;
	  double INR_CHF = 0.0123905;
	
	   double converted_amount;
	   double amount_toconvert;
	   int convert_to_choice;
	   int quit;
	
		if(choice == 1 )
	   {
			amount_toconvert = GetAmount();
			System.out.println("Select which currency you'd like to convert to");
			System.out.println("1. GBP");
			System.out.println("2. CHF");
			System.out.println("3. INR");
			convert_to_choice = read.nextInt();
			if (convert_to_choice == 1){
				converted_amount = amount_toconvert * USD_GBP;
				System.out.println("When converting " + amount_toconvert + " from USD to GBP, you get: " + converted_amount);
				System.out.println("Process Completed. Enter 0 to quit, 1 to continue");
				quit = read.nextInt();
				if (quit == 0){
					System.out.println("Thank you for using our service!");
					return 0;
				}
				else{
					ShowMenu();
				} 
			}
			if (convert_to_choice == 2){
				converted_amount = amount_toconvert * USD_CHF;
				System.out.println("When converting " + amount_toconvert + " from USD to CHF, you get: " + converted_amount);
				System.out.println("Process Completed. Enter 0 to quit, 1 to continue");
				quit = read.nextInt();
				if (quit == 0){
					System.out.println("Thank you for using our service!");
					return 0;
				}
				else{
					ShowMenu();
				}
			}
			   
			if (convert_to_choice == 3){
				converted_amount = amount_toconvert * USD_INR; 
				System.out.println("When converting " + amount_toconvert + " from USD to INR, you get: " + converted_amount);
				System.out.println("Process Completed. Enter 0 to quit, 1 to continue");
				quit = read.nextInt();
				if (quit == 0){
					System.out.println("Thank you for using our service!");
					return 0;
				}
				else{
					ShowMenu();
				}
			}
	   }
	   if(choice == 2){
	   	
		    amount_toconvert = GetAmount();
			System.out.println("Select which currency you'd like to convert to");
			System.out.println("1. USD");
			System.out.println("2. CHF");
			System.out.println("3. INR");
			convert_to_choice = read.nextInt();
			if (convert_to_choice == 1){
				converted_amount = amount_toconvert * GBP_USD;
				System.out.println("When converting " + amount_toconvert + " from GBP TO USD, you get: " + converted_amount); 
				System.out.println("Process Completed. Enter 0 to quit, 1 to continue");
				quit = read.nextInt();
				if (quit == 0){
					System.out.println("Thank you for using our service!");
					return 0;
				}
				else{
					ShowMenu();
				}
			}
			if (convert_to_choice == 2){
				converted_amount = amount_toconvert * GBP_CHF;
				System.out.println("When converting " + amount_toconvert + " from GBP to CHF, you get: " + converted_amount);
				System.out.println("Process Completed. Enter 0 to quit, 1 to continue");
				quit = read.nextInt();
				if (quit == 0){
					System.out.println("Thank you for using our service!");
					return 0;
				}
				else{
					ShowMenu();
				}
			}
			   
			if (convert_to_choice == 3){
				converted_amount = amount_toconvert * GBP_INR; 
				System.out.println("When converting " + amount_toconvert + " from GBP to INR, you get: " + converted_amount);
				System.out.println("Process Completed. Enter 0 to quit, 1 to continue");
				quit = read.nextInt();
				if (quit == 0){
					System.out.println("Thank you for using our service!");
					return 0;
				}
				else{
					ShowMenu();
				}
			}
			
	   }
	   if (choice == 3){
	   	
		    amount_toconvert = GetAmount();
			System.out.println("Select which currency you'd like to convert to");
			System.out.println("1. USD");
			System.out.println("2. GBP");
			System.out.println("3. INR");
			convert_to_choice = read.nextInt();
			if ( convert_to_choice == 1){
				converted_amount = amount_toconvert * CHF_USD;
				System.out.println("When converting " + amount_toconvert + " from CHF to USD, you get: " + converted_amount); 
				System.out.println("Process Completed. Enter 0 to quit, 1 to continue");
				quit = read.nextInt();
				if (quit == 0){
					System.out.println("Thank you for using our service!");
					return 0;
				}
				else{
					ShowMenu();
				}
			}
			if (convert_to_choice == 2){
				converted_amount = amount_toconvert * CHF_GBP;
				System.out.println("When converting " + amount_toconvert + " from CHF to GBP, you get: " + converted_amount);
				System.out.println("Process Completed. Enter 0 to quit, 1 to continue");
				quit = read.nextInt();
				if (quit == 0){
					System.out.println("Thank you for using our service!");
					return 0;
				}
				else{
					ShowMenu();
				}
			}
			   
			if (convert_to_choice == 3){
				converted_amount = amount_toconvert * CHF_INR; 
				System.out.println("When converting " + amount_toconvert + " from CHF to INR, you get: " + converted_amount);
				System.out.println("Process Completed. Enter 0 to quit, 1 to continue");
				quit = read.nextInt();
				if (quit == 0){
					System.out.println("Thank you for using our service!");
					return 0;
				}
				else{
					ShowMenu();
				}
			}
			
	   }
	   if (choice == 4){
	   	
		    amount_toconvert = GetAmount();
			System.out.println("Select which currency you'd like to convert to");
			System.out.println("1. USD");
			System.out.println("2. CHF");
			System.out.println("3. GBP");
			convert_to_choice = read.nextInt();
			if ( convert_to_choice == 1){
				converted_amount = amount_toconvert * INR_USD;
				System.out.println("When converting " + amount_toconvert + " from INR to USD, you get: " + converted_amount); 
				System.out.println("Process Completed. Enter 0 to quit, 1 to continue");
				quit = read.nextInt();
				if (quit == 0){
					System.out.println("Thank you for using our service!");
					return 0;
				}
				else{
					ShowMenu();
				}
			}
			if (convert_to_choice == 2){
				converted_amount = amount_toconvert * INR_CHF;
				System.out.println("When converting " + amount_toconvert + " from INR to CHF, you get: " + converted_amount);
				System.out.println("Process Completed. Enter 0 to quit, 1 to continue");
				quit = read.nextInt();
				if (quit == 0){
					System.out.println("Thank you for using our service!");
					return 0;
				}
				else{
					ShowMenu();
				}
			}
			   
			if (convert_to_choice == 3){
				converted_amount = amount_toconvert * INR_GBP; 
				System.out.println("When converting " + amount_toconvert + " from INR to GBP, you get: " + converted_amount);
				System.out.println("Process Completed. Enter 0 to quit, 1 to continue");
				quit = read.nextInt();
				if (quit == 0){
					System.out.println("Thank you for using our service!");
					return 0;
				}
				else{
					ShowMenu();
				}
			}
			
	   }
	   System.out.println("Thank you for using our service!");
        return 0;
	}
	public static double GetAmount(){
		Scanner scan = new Scanner(System.in);
		try {
			String toconvert;
		    System.out.println("Please enter the amount you'd like to convert, Otherwise, enter Q to quit.");
		    toconvert = scan.nextLine();
		    if(toconvert == "Q")
			   {
			   	   System.out.println("Thank you for using our service!");
				   return 0;
			   }
		    double amount = Double.parseDouble(toconvert);
		    if(amount >= 1000000){
					System.out.println("You have entered a number that is too high, please try again");
					GetAmount();
			   }
	
			return amount;
			   	
		}
		catch(NumberFormatException e){
			System.out.println("You have entered an invalid character. Use numerical values only.");
			GetAmount();
		}
		
		return 0;
			  
	
	}


    public static void main(String args[]){
		Scanner reader = new Scanner(System.in);
	   int convert_to_choice;
	   System.out.println("Hello, Welcome to the Currency Exchange Program");
	   System.out.println("Please select which currency you'd like to convert from");
	   System.out.println("1. USD ");
	   System.out.println("2. GBP ");
	   System.out.println("3. CHF");
	   System.out.println("4. INR");
	   
	   int convert_from_choice = reader.nextInt();
	   
	   Conversion(convert_from_choice);
	  
    }
}

