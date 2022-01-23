insert :: Int -> [Int] -> [Int]
insert x [] = [x]
insert x (y:ys) =
  if x < y then x:y:ys
  else y : insert x ys

insertionSort :: [Int] -> [Int]
insertionSort [] = []
insertionSort (x:xs) = insert x $ insertionSort xs

main :: IO()
main = do
  let a = [5, 2, 7, 4, 6, 9, 3, 4, 1, 8]
  print $ insertionSort a

