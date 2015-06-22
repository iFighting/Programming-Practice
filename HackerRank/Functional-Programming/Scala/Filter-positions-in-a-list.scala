object Solution extends App {
 def f(arr:List[Int]):List[Int] = {
    def solve(arr: List[Int], index: Int): List[Int] = {
      if (index >= arr.length) Nil
      else{
        if (index % 2 == 0) solve(arr, index+1)
        else arr(index)::solve(arr, index+1)
      }
    }
    solve(arr, 0)
  }

println(f(io.Source.stdin.getLines.toList.map(_.trim).map(_.toInt)).mkString("\n"))
}