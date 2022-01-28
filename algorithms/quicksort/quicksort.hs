partitionLower :: Int -> [Int] -> [Int]
partitionLower _ [] = []
partitionLower p (x:xs) =
  if x > p then (partitionLower p xs)
  else x:(partitionLower p xs)

partitionUpper :: Int -> [Int] -> [Int]
partitionUpper _ [] = []
partitionUpper p (x:xs) =
  if x > p then x:(partitionUpper p xs)
  else (partitionUpper p xs)

quickSort :: [Int] -> [Int]
quickSort [] = []
quickSort [x] = [x]
quickSort (x:xs) = quickSort(partitionLower x xs) ++ [x] ++ quickSort(partitionUpper x xs)

main :: IO()
main = do
  let a = [3, 2, 1, 4, 5, 8, 7, 6, 10, 3]
  print $ quickSort a
