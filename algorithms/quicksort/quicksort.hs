pivot :: Int -> [Int] -> [Int]
pivot p [] = [p]
pivot p (y:ys) = 
  if p > y then y:(pivot p ys)
  else (pivot p ys) ++ [y]

quickSort :: [Int] -> [Int]
quickSort [] = []
quickSort [x] = [x]
quickSort (x:xs) = pivot x (quickSort xs)

main :: IO()
main = do
  let a = [3, 2, 1, 4, 5, 8, 7, 6]
  print $ quickSort a

