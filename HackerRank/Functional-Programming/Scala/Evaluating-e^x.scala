object Solution {
  def factor(x: Int): Int = {
    if (x == 0) 1
    else factor(x - 1) * x
  }
  def compute(x: Float, y: Int) : Float = {
    var res = 1f
    for(i <- 1 to y)
      res = res * x
    res / factor(y)
  }
  def f(x: Float):Float = {
    // Compute and Return the value of e^x
    var res = 0f
    for(i <- 0 to 9)
      res += compute(x, i)
    res
  }
  def main(args: Array[String]) {
    var n = readInt
    (1 to n) foreach(x=> println(f(readFloat())))
  }
}