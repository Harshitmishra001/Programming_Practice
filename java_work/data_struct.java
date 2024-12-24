import java.util.*;
class DataStruct {
    public static void main(String[] args) {
        Queue<String> que = new LinkedList<>();
        que.add("tv off");
        que.add("Ransom");
        que.add("Blinding Lights");
        Scanner scanner = new Scanner(System.in); 
        System.out.println("Your playlist: " + que);
        while (!que.isEmpty()) {
            System.out.println("Currently Listening to: " + que.remove());
            System.out.println("Your Playlist: " + que);
            try {
                Thread.sleep(10000);
            } catch (InterruptedException e) {
                System.out.println("Encountered an error: " + e.getMessage());
            }
            System.out.println("Do you want to add a new song?");
            System.out.println("Enter 'y' for yes:");
            String choice = scanner.nextLine();
            if (choice.equals("y")) { 
                System.out.println("Enter the name of the song:");
                String songName = scanner.nextLine(); 
                que.add(songName);
            }
        }
        System.out.println("Queue is now empty.");
        scanner.close(); 
    }
}