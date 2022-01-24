merge :: [Int] -> [Int] -> [Int]
merge [] [] = []
merge [] x = x
merge x [] = x
merge (x:xs) (y:ys) = 
  if x <= y then x : (merge xs (y:ys))
  else y : (merge (x:xs) ys)

mergeSort :: [Int] -> [Int]
mergeSort [] = []
mergeSort [x] = [x]
mergeSort a = merge (mergeSort (take m a)) (mergeSort (drop m a))
  where m = div (length a) 2

main = do
  let a = [3, 2, 1, 4, 5, 8, 7, 6]
  print $ mergeSort a

