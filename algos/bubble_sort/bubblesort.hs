swap :: [Int] -> [Int]
swap [x] = [x]
swap (x:y:xs) = 
  if x < y then (swap $ x:xs) ++ [y]
  else (swap $ y:xs) ++ [x]

bSort :: [Int] -> [Int]
bSort [] = []
bSort a = [(head $ swapped)] ++ (bSort $ tail swapped)
  where swapped = swap a

main :: IO()
main = do
  let a = [5, 2, 3, 6, 1, 4, 7, 8, 4, 0, 9]
  print $ bSort a

