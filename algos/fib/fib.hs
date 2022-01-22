fib :: Int -> Int
fib n 
  | 0 = 0
  | 1 = 1
  | otherwise = fib (n - 1) + fib (n - 2)

main = do
  print $ fib 30
