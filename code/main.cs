using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
    double banana_width = 0.75;
    double banana_length = 7.5;
    double banana_area = banana_width * banana_length;
    
    double football_field_width = 1920.0;
    double football_field_length = 3600.0;
    double football_field_area = football_field_width * football_field_length;
    
    double bananas = football_field_area / banana_area;
    
    Console.WriteLine(Convert.ToString(bananas) + " bananas could fit in a football field");
    // roughly 480
    }
}