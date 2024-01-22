# 非正規化数(subnormal number)
IEEE754において，浮動小数点数は仮数部(significand) × 指数部(exponent)で表現されるが，通常その仮数部の整数部分は1になっており，そのような浮動小数点数を正規化数(normal number)と呼ぶ．
対して，非正規仮数(subnormal number)とは、値が非常に小さくなり正規化数の範囲で表現できなくなった際に，仮数部の整数部分が0となる浮動小数点数のことを言う．
非正規仮数の指数部は全てのビットが0になっている．

浮動小数点数の演算の結果，値が小さくなりすぎて表現できなくなる場合をアンダーフローと呼ぶが，特に，演算結果が正規化数では表現できないが非正規化数で表現できる場合はgradual underflowと呼ばれる．

## 参考
- http://ocw.kyushu-u.ac.jp/menu/faculty/09/4/4.pdf
- https://en.wikipedia.org/wiki/IEEE_754
