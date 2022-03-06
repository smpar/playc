package mypackage.threadex;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

public class ThreadMain {

    private static final int NTHREADS = 10;

    public static void main(String[] args) throws InterruptedException {

        ExecutorService executor = Executors.newFixedThreadPool(NTHREADS);

        for (int i = 0; i < 500; i++) {
            Runnable task = new MyRunnable(100000000L + i);

            executor.execute(task);
        }

        executor.shutdown();
        executor.awaitTermination(60, TimeUnit.SECONDS);
        System.out.println("Finished all threads");

        /* Using a list of Threads. (CPU consuming, performance overhead, no control OoM errors).

        List<Thread> threads = new ArrayList<Thread>();

        // We will create 500 threads
        for (int i = 0; i < 500; i++) {
            Runnable task = new MyRunnable(100000000L + i);  
            Thread worker = new Thread(task);

            worker.setName(String.valueOf(i));
            System.out.println("Thread: " + worker.getName());
            worker.start();

            threads.add(worker);
        }

        int running = 0;
        do {
            running = 0;
            for (Thread thread:threads) {
                if (thread.isAlive()) {
                    System.out.println("Thread: " + thread.getName() + " is alive");
                    running++;
                }
            }
            System.out.println("we have: " + running +" running threads.");
        } while (running > 0);
        */
    }
}