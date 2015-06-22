def f(arr:List[Int]):Int = {
    if (arr.isEmpty) 0
    else {
      if (arr.head % 2 != 0) arr.head + f(arr.tail)
      else f(arr.tail)
    }
}

def f(arr:List[Int]):Int = {
	var res: Int = 0
	for (i <- arr) {
		if (i % 2 == 1) res += i;
	}
	return res
}