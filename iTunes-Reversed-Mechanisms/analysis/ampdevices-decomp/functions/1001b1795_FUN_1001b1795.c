// name: FUN_1001b1795
// address: 1001b1795

bool FUN_1001b1795(double param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((int)DAT_1008c52a0 < 1) && ((int)DAT_1008c5278 < 1)) && (bVar1 = DAT_1008c52c8 != 0, !bVar1)
     ) {
    if ((DAT_1008c52d0 != DAT_100700af8) || (NAN(DAT_1008c52d0) || NAN(DAT_100700af8))) {
      if ((param_1 == 0.0) && (!NAN(param_1))) {
        param_1 = (double)FUN_1001ebd46();
      }
      if (DAT_1008c52d0 <= param_1) {
        return true;
      }
      bVar1 = false;
    }
  }
  return bVar1;
}

