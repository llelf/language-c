void foo() {
  /* conditional <-> assignment */
  int u  = ( y = 2 ? 3 : 0 );  
  int u_ = ( (y = 2) ? 3 : 0 );
  int v = ( y = (2 ? 3 : 0));
  int w = ( (2 ? x : y) = x);   // Warning (not really an lvalue)
  int s = ( 2 ? 3 : (y = x));
}