public class Banana {
    public static void main(String[] args) {
        // Dimensions of Banana
        double bananaWidth = 0.75;
        double bananaLength = 7.5;
        double bananaArea = bananaWidth * bananaLength;

        // Dimensions of Football field
        int footballFieldWidth = 1920;
        int footballFieldLength = 3600;
        int footballFieldArea = footballFieldWidth * footballFieldLength;

        double bananasFit = footballFieldArea / bananaArea;

        System.out.println(bananasFit + " bananas could fit in a football field");
        // prints: 1228800.0 bananas could fit in a football field
        // rouhgly 480
    }
}
