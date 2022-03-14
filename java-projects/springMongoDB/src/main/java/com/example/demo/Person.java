package com.example.demo;

import org.springframework.data.annotation.Id;

//Domain Object
public class Person {

    // Automatically generated, no need to deal with it.
    @Id private String id;

    private String firstName;
    private String lastName;

    public String getFirstName() {
        return firstName;
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }
}