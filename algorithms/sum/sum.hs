-- summate instead of sum because sum is included in prelude
sum' :: [Int] -> Int
sum' [] = 0
sum' [x] = x
sum' (x:xs) = x + sum'(xs)

main :: IO()
main = do
  let a = [5, 2, 6, 1, 7, 1, 10, 9, 3]
  print $ sum' a

