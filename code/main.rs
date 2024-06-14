fn main(){
    // Dimensions of Banana
    let bananaWidth = 0.75;
    let bananaLength = 7.5;
    let bananaArea = bananaWidth * bananaLength;

    // Dimensions of Football field
    let footballFieldWidth = 1920.0;
    let footballFieldLength = 3600.0;
    let footballFieldArea = footballFieldWidth * footballFieldLength;

    let bananasFit = footballFieldArea / bananaArea;
    println!("{bananasFit} bananas could fit in a football field"); // roughly 480
}
