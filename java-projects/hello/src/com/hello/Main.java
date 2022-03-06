package com.hello;

public class Main {

    public static void main(String[] args) {
        Car c = new Car();
        c.setWheelSize(15);
        System.out.println(c.getWheelSize());
        increment(c.getWheelSize());
        System.out.println(c.getWheelSize());
    }

    public static void increment(int a) {
        a++;
    }

    /* Error as java is pass-by-value.
    public void increment(Car c) {
        c.setWheelSize(c.getWheelSize()++);
    }*/
}