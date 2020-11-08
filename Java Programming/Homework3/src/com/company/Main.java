/*
    Olivia Knight CSCI 2210-01 Homework 4
    Write a test program that creates an Account object with an account ID of 1122, a
    balance of $20,000, and an annual interest rate of 4.5%. Use the withdraw method
    to withdraw $2,500, use the deposit method to deposit $3,000, and print the balance,
    the monthly interest, and the date when this account was created.
 */
package com.company;

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Account account1 = new Account(1122,20000);
        account1.withdraw(2500);
        account1.deposit(3000);

        System.out.println("Balance: " + account1.getBalance());
        System.out.println("Monthly interest: $" + account1.getMonthlyInterest());
        System.out.println("Date Created: "+ account1.getDateCreated());

    }
}
