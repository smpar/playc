# playc

## hello

1. https://dzone.com/articles/compiling-and-running-java

* Manual:
```
user@workstation:~/playc/hello$ javac --source-path src/ src/com/hello/*.java
user@workstation:~/playc/hello$ java --class-path src com.hello.Main
```
* Maven:
```
user@workstation:~/playc/hello$ mvn
user@workstation:~/playc/hello$ mvn exec:java -Dexec.mainClass=com.hello.Main
```
* Clean:
```
mvn clean
user@workstation:~/playc/hello$ rm -rf src/com/hello/*.class
```

## java-concurrency-1

1. https://www.vogella.com/tutorials/JavaConcurrency/article.html
2. http://tutorials.jenkov.com/java-concurrency/volatile.html

```
mvn
java --class-path target mypackage.Main
mvn clean
```

## demo

1. https://spring.io/quickstart

* Maven:
```
./mvnw spring-boot:run
```