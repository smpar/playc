package mypackage;

public class CrawlSiteMain {

    public static void main(String[] args) {

        CrawlSite cs = new CrawlSite();
        cs.add("test.com");

        System.out.println("next(): " + cs.next());

        // This will not work from static context.
        /* System.out.println("longvar: " + longvar);*/
    }
}