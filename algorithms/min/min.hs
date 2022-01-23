
minim :: [Int] -> Int
minim [x] = x
minim (x:y:xs) =
  if x < y then minim (x:xs)
  else minim (y:xs)
