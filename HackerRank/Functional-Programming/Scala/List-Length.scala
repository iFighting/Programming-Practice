 def f(arr:List[Int]):Int = {
 	if (arr == Nil) 0
 	else f(arr.tail) + 1
 }

 def f(arr:List[Int]):Int = arr.length