def f(num:Int) : List[Int] = {
	if (num == 0) Nil
	else return num::f(num - 1)
}

def f(num:Int) : List[Int] = {
    import scala.collection.mutable.ListBuffer
    val buf = new ListBuffer[Int]
    for (i: Int <- 1 to num) {
        buf += 1
    }
    buf.toList
}