object Solution extends App {
	def f(arr:List[Int]):List[Int] = {
	    if (arr.isEmpty) Nil
	    else {
	      if (arr.head >= 0) arr.head :: f(arr.tail)
	      else -arr.head :: f(arr.tail)
	    }
	  }
	println(f(io.Source.stdin.getLines.toList.map(_.trim).map(_.toInt)).map(_.toString).mkString("\n"))
}