import java.util.*;

public class Test{

    // Aladdin will travel on his carpet on a circular path. 
    // He can start from any point and collect the magic. To move to the next stop,

    // he need to use the magic equals to amount of distance travelled. 
    // On reaching the new destination, he will be rewarded with some magic. 
    // Need to calculate the lowest index of the magic where he should start his journey from.

    // int[] magic = {2,5,4,2};
    // int[] dist = {4,3,1,3};

    // int[] magic1 = {3,2,5,4};
    //     int[] dist1 = {2,3,4,2};
    public static void main(String args[]){
        // System.out.println("Test");

        // int[] magic = {2,5,4,2};
        // int[] dist = {4,3,1,3};

        int[] magic = {3,2,5,4};
        int[] dist = {2,3,4,2};

        int noOfCarpets= magic.length;
        List<Integer> strength= new ArrayList<>();
        int curTotalMagic=0;
        int currentStart= 0;
        for(int i=0;i<noOfCarpets;i++){
            strength.add(magic[i]- dist[i]);
            curTotalMagic+= strength.get(i);
            if(curTotalMagic <0){
                currentStart= i+1;
                curTotalMagic= 0;
            }
        }

        boolean traversePossible= currentStart< noOfCarpets;

        for(int i=0;i<currentStart && traversePossible;i++){
            curTotalMagic+= strength.get(i);
            if(curTotalMagic <0){
                traversePossible= false;
            }
        }
        currentStart++;

        System.out.println("starting position "+ currentStart);


    }
}