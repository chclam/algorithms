naive :: [Char] -> [Char] -> Int -> Int -> Int
naive t p i j =
  if i == length t || j == length p then
    if j == length p then i-j 
    else -1
  else 
    if t !! i == p !! j then naive t p (i+1) (j+1)
    else naive t p (i-j+1) 0

main :: IO()
main = do
  let t = "abcabaabcabac"
  let p = "abaa"
  print $ naive t p 0 0
