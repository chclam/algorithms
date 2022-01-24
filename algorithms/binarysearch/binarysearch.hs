
bSearch :: [Int] -> Int -> Bool
bSearch [] _ = False
bSearch a k
  | k == (a !! m) = True
  | k < (a !! m) = bSearch (take (m) a) k
  | otherwise = bSearch (drop (m + 1) a) k
  where m = div (length a) 2

main = do
  let a = [1, 2, 3, 4, 5, 6, 7]
  print $ bSearch a 5
  
