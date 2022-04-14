package com.example.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
public class DemoApplication {

    public static void main(String[] args) {
        SpringApplication.run(DemoApplication.class, args);
    }
}

/*
curl -i -X POST -H "Content-Type:application/json" -d "{  \"firstName\" : \"Frodo\",  \"lastName\" : \"Baggins\" }" http://localhost:8080/people
HTTP/1.1 201 
Vary: Origin
Vary: Access-Control-Request-Method
Vary: Access-Control-Request-Headers
Location: http://localhost:8080/people/622f6a042ff43529e1dded52
Content-Type: application/hal+json
Transfer-Encoding: chunked
Date: Mon, 14 Mar 2022 16:15:00 GMT

{
  "firstName" : "Frodo",
  "lastName" : "Baggins",
  "_links" : {
    "self" : {
      "href" : "http://localhost:8080/people/622f6a042ff43529e1dded52"
    },
    "person" : {
      "href" : "http://localhost:8080/people/622f6a042ff43529e1dded52"
    }
  }
}


curl -X GET http://localhost:8080/people/search/findByLastName?name=Baggins
{
  "_embedded" : {
    "people" : [ {
      "firstName" : "Frodo",
      "lastName" : "Baggins",
      "_links" : {
        "self" : {
          "href" : "http://localhost:8080/people/622f6a042ff43529e1dded52"
        },
        "person" : {
          "href" : "http://localhost:8080/people/622f6a042ff43529e1dded52"
        }
      }
    } ]
  },
  "_links" : {
    "self" : {
      "href" : "http://localhost:8080/people/search/findByLastName?name=Baggins"
    }
  }
}


curl -X PUT -H "Content-Type:application/json" -d "{ \"firstName\": \"Bilbo\", \"lastName\": \"Baggins\" }" http://localhost:8080/people/622f6a042ff43529e1dded52
{
  "firstName" : "Bilbo",
  "lastName" : "Baggins",
  "_links" : {
    "self" : {
      "href" : "http://localhost:8080/people/622f6a042ff43529e1dded52"
    },
    "person" : {
      "href" : "http://localhost:8080/people/622f6a042ff43529e1dded52"
    }
  }
}

curl -X PATCH -H "Content-Type:application/json" -d "{ \"firstName\": \"Bilbo Jr.\" }" http://localhost:8080/people/622f6a042ff43529e1dded52

PUT replaces an entire record. Fields not supplied will be replaced with null. You can use PATCH to update a subset of items

*/