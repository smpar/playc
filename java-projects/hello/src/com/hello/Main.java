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

/*
https://dzone.com/articles/compiling-and-running-java

Manual:
user@workstation:~/playc/hello$ javac --source-path src/ src/com/hello/*.java
user@workstation:~/playc/hello$ java --class-path src com.hello.Main

Maven:
user@workstation:~/playc/hello$ mvn
user@workstation:~/playc/hello$ mvn exec:java -Dexec.mainClass=com.hello.Main

Clean:
user@workstation:~/playc/hello$ rm -rf src/com/hello/*.class
*/