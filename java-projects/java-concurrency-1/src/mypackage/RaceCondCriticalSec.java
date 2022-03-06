package mypackage;

import java.util.concurrent.atomic.AtomicInteger;

public class RaceCondCriticalSec {

    public static void main(String[] args) {

        TwoSums t = new TwoSums();
        t.add1(1,2);
        System.out.println("getsum1(): " + t.getsum1());

        AtomicInteger i = new AtomicInteger(5);

        int value = i.get();
        System.out.println("Atomic integer value: " + value);

    }
}

class TwoSums {
    
    private int sum1 = 0;
    private int sum2 = 0;

    private Integer sum1Lock = new Integer(1);
    private Integer sum2Lock = new Integer(2);

    /*
    Notice how the add() method adds values to two different sum member variables.
    To prevent race conditions the summing is executed inside a Java synchronized block.
    With this implementation only a single thread can ever execute the summing at the same time.
    */
    public void add1(int val1, int val2) {
        synchronized (this) {
            this.sum1 += val1;
            this.sum2 += val2;
        }
    }

    /*
    However, since the two sum variables are independent of each other,
    you could split their summing up into two separate synchronized blocks.
    */
    public void add2(int val1, int val2){
        synchronized(this.sum1Lock){
            this.sum1 += val1;
        }
        synchronized(this.sum2Lock){
            this.sum2 += val2;
        }
    }

    public int getsum1() {
        return sum1;
    }

    public int getsum2() {
        return sum2;
    }
}
