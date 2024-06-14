open System

let banana_width = 0.75
let banana_length = 7.5 
let football_width = 1920.0
let football_length = 3600.0

let bananas = (banana_width * banana_length) / (football_width * football_length)

printfn "%f bananas could fit in a football field" bananas
