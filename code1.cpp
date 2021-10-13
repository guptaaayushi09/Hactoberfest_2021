package com.company;

import java.util.Scanner;

class UserVerySmallNumException extends Exception{
    public double a;
    UserVerySmallNumException(double p)
    {
        a=p;
    }
    public String toString()
    {
        return "My Exception"+a+"is very less than 0.00001 ";
    }
};
public class Main {
public static void divide( double a,double b) throws Exception
{
    if(b<0.0001){
        throw new UserVerySmallNumException(a);
    }
    else {
        System.out.println("Divide of two number is:"+a/b);
    }
}
    public static void main(String[] args) throws Exception {
    double a,b;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the first value:");
        a=sc.nextDouble();
        System.out.println("Enter the second value:");
        b= sc.nextDouble();
        try{
            divide(a,b);
        }
        catch (UserVerySmallNumException e)
        {
            System.out.println(e);
        }
    }
}
