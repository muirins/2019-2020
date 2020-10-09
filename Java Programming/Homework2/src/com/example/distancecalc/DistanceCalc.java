/*  University of New Haven
    CSCI 2210-01 Fall 2020
    Java Programming
    Olivia Knight oknig1@unh.newhaven.edu
    Instructor: Sheehan
    distancecalc.java
    This class takes 2 user inputs and calculates the distance traveled by a falling object
*/
package com.example.distancecalc;

import java.util.Scanner;

public class DistanceCalc {
    public static void main(String[]args){
        Scanner input = new Scanner(System.in);
        final double gravForce = 32.17405;//Constant that will represent that gravitational force in the distance formula

        //These variables will store the user inputs for the velocity and fall time
        System.out.println("Please enter the initial velocity of the object in feet/second");
        double velocity = input.nextDouble();
        System.out.println("Please enter the time of the fall in seconds");
        double falling_time = input.nextDouble();

        //This is the calculation of the falling distance.
        double distance = (velocity * falling_time)+(gravForce * (0.5) * Math.pow(falling_time,2));

        //Prints the results with a precision of 2 decimal places.
        System.out.println("The distance traveled by a falling at an initial velocity of " + velocity + " feet/second over a time of " + falling_time + " seconds is " +  ((int)(distance * 100) / 100.0) + " feet.");
    }
}

