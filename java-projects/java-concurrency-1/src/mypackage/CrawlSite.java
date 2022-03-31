package mypackage;

import java.util.List;
import java.util.ArrayList; //Resides within Java Core Libraries

public class CrawlSite {
    private List<String> crawledSitesL = new ArrayList<String>();
    private List<String> linkedSitesL = new ArrayList<String>();

    volatile int longvar = 5;


    public void add(String site) {
        synchronized (this) {
            if (!crawledSitesL.contains(site)) {
                linkedSitesL.add(site);
            }
            System.out.println("Site: \"" + site + "\" has been added.");
            System.out.println("longvar: " + longvar);
        }
    }

    public String next() {
        if (linkedSitesL.size() == 0) {
            System.out.println("Empty linkedSitesL");
            return null;
        }

        synchronized (this) {
            if (linkedSitesL.size() > 0) {
                String s = linkedSitesL.get(0);
                linkedSitesL.remove(0);
                crawledSitesL.add(s);
                return s;
            }
            return null;
        }
    }
}