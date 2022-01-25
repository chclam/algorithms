-- summate instead of sum because sum is included in prelude
summate :: [Int] -> Int
summate [] = 0
summate [x] = x
summate (x:xs) = x + summate(xs)

main :: IO()
main = do
  let a = [5, 2, 6, 1, 7, 1, 10, 9, 3]
  print $ summate a

