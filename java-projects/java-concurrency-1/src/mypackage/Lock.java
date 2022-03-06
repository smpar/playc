public class Lock {

    private boolean isLocked = false;

    public synchronized void lock()
        throws InterruptedException{
        while(isLocked){
          wait();
        }
        isLocked = true;
    }

    public synchronized void unlock(){
        isLocked = false;
        notify();
    }
}

class Counter{

    private Lock lock = new Lock();
    private int count = 0;

    public int inc(){
        try {
            lock.lock();
            int newCount = ++count;
            lock.unlock();
            return newCount;
        } catch(InterruptedException e) {
            return 0;
        }

    }
}