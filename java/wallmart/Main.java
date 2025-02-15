
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

// Total Number of rides completed
// Total number of active Drivers
// Total revenue

// driver - waiting, driving, booked, completedRide, inactive
//  driverId, currentFare, status, lat, long
//heartbeat time, driverId, status, lat, longitude



public class Main{
    public static void main(String args[]){
        List<DriverDetails> driverDetailsList= new ArrayList<DriverDetails>();
        Map<Long, Driver> lastHeartBeatOfDrivers= new HashMap<>();
        for(DriverDetails driverDetails: driverDetailsList){
            lastHeartBeatOfDrivers.put(driverDetails.getDriver().getDriverId(), driverDetails.getDriver());
        }

        for(Long driverId: lastHeartBeatOfDrivers.keySet()){
            Driver curDriver= lastHeartBeatOfDrivers.get(driverId);
            
        }

        
    }
}