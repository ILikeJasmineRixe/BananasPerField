package main

import "fmt"

func main() {
	// dimensions of banana
	bananaWidth := 0.75
	bananaLength := 7.5
	bananaArea := bananaWidth * bananaLength

	// Dimensions of football field
	footballFieldWidth := 1920
	footballFieldLength := 3600
	footballFieldArea := footballFieldWidth * footballFieldLength

	bananasFit := footballFieldArea / bananaArea

	fmt.Printf("%g bananas could fit in a football field\n", bananasFit)
  // rouhgly 480
}
