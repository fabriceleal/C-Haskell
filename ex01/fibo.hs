{-# LANGUAGE ForeignFunctionInterface #-}

module Safe where

import Foreign.C.Types

{-# fibo Haskell definition #-}
fibonacci :: Int -> Int
fibonacci n = fibs !! n
  where fibs = 0 : 1 : zipWith (+) fibs (tail fibs)

{-# fibo Haskell C interface to fibo Haskell definition #-}
fibonacci_hs :: CInt -> CInt
fibonacci_hs = fromIntegral . fibonacci . fromIntegral

{-# export the Haskell C interface #-}
foreign export ccall fibonacci_hs :: CInt -> CInt
