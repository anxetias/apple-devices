// name: FUN_100363868
// address: 100363868

void FUN_100363868(undefined8 param_1,uint param_2)

{
  if (param_2 != 0) {
    if ((*(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008 != (double)param_2) ||
       (NAN(*(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008) || NAN((double)param_2))) {
      FUN_1001e2489(param_1,param_2,0x33);
      return;
    }
  }
  FUN_1001b7a44();
  return;
}

