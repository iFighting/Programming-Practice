object Solution extends App {
 def f(num:Int,arr:List[Int]):List[Int] = {
    import scala.collection.mutable.ListBuffer
    val buf = new ListBuffer[Int]
    for(item :Int <- arr){
        for(i :Int <- 1 to num){
            buf += item
        }
    }
    buf.toList
 }
def displayResult(arr:List[Int]) = println(f(arr(0).toInt,arr.drop(1)).map(_.toString).mkString("\n"))

  displayResult(io.Source.stdin.getLines.toList.map(_.trim).map(_.toInt))


}