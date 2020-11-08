/*
    Olivia Knight CSCI 2210-01 Homework 4 Account Class
 */
package com.company;

import java.util.*;

public class Account {
    private int id;
    private double balance;
    private double annualInterestRate = 4.5;
    private Date dateCreated;

    //Constructor method to create a default account
    public Account(){
        id = 0;
        balance = 0;
        dateCreated = new Date(0,0,1);

    }
    //Used to create a new account using information from main.
    public Account(int newid, double newbalance){
        id = newid;
        balance = newbalance;
        dateCreated = new Date();
    }
    public int getId(){
        return id;
    }
    public void setId(int newId){
        id = newId;
    }

    public double getBalance(){
        return balance;
    }
    public void setBalance(double newBalance){
        balance = newBalance;
    }

    public double getAnnualInterestRate(){
        return annualInterestRate;
    }
    public void setAnnualInterestRate(double annualInterestRate) {
        this.annualInterestRate = annualInterestRate;
    }

    public Date getDateCreated(){
        return dateCreated;
    }

    public double getMonthlyInterestRate(){
        double monthlyInterestRate = (annualInterestRate/100)/12;
        return monthlyInterestRate;
    }
    public double getMonthlyInterest(){
        double monthlyInterest = balance * getMonthlyInterestRate();
        return monthlyInterest;
    }

    public void withdraw(double withdrawAmt){
        balance -= withdrawAmt;
    }
    public void deposit(double depositAmt){
        balance += depositAmt;
    }
}
