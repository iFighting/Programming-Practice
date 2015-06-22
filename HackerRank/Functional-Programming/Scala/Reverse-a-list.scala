object Solution extends App {
	def f(arr:List[Int]):List[Int] = {
	    if(arr.size == 1) List(arr.head)
    	else f(arr.tail):::List(arr.head)
	}

	println(f(io.Source.stdin.getLines.toList.map(_.trim).map(_.toInt)).mkString("\n"))
}