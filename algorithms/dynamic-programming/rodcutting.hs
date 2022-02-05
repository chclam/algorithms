rodCuttingTb :: Int -> Int -> [Int] -> Int
rodCuttingTb 0 _ _ = 0
rodCuttingTb n i p = 
  if i == n then p !! n
  else max ((rodCuttingTb i 1 p) + (rodCuttingTb (n-i) 1 p)) (rodCuttingTb n (i+1) p)

main :: IO()
main = do
  -- todo: memoization
  let p = [0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30]
  print $ rodCuttingTb 10 1 p

