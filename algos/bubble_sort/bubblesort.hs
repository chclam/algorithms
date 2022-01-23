
bSort :: [Int] -> [Int]
bSort [] = []
bSort a = [(head $ swap a)] ++ (bSort $ tail (swap a))
  where
    swap [x] = [x]
    swap (x:y:xs) = 
      if x < y then (swap $ x:xs) ++ [y]
      else (swap $ y:xs) ++ [x]

main = do
  let a = [5, 2, 3, 6, 1, 4, 7, 8, 4, 0, 9]
  print $ bSort a

