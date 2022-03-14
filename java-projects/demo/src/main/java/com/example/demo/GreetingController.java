package com.example.demo;

import java.util.concurrent.atomic.AtomicLong;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

// @RestController: Marks the class as a controller. Every method returns a domain object instead of a view.
@RestController
public class GreetingController {

    // curl -s 'http://localhost:8080/greeting?name=Bob
    private static final String Template = "Hello, %s!";
    private final AtomicLong counter = new AtomicLong();
    //private long counter = 0; //use of AtomicLong variable to avoid sending same id to clients.

    @GetMapping("/greeting")
    public Greeting greeting(@RequestParam(value = "name", defaultValue  = "World" ) String inName) {
        return new Greeting(counter.incrementAndGet(), String.format(Template, inName));
    }

}