quickSort :: [Int] -> [Int]
quickSort [] = []
quickSort [x] = [x]
quickSort (x:xs) = 
  let lower = [y | y <- xs, y <= x]
      upper = [y | y <- xs, y > x]
  in quickSort(lower) ++ [x] ++ quickSort(upper)

main :: IO()
main = do
  let a = [3, 2, 1, 4, 5, 8, 7, 6, 10, 3]
  print $ quickSort a
