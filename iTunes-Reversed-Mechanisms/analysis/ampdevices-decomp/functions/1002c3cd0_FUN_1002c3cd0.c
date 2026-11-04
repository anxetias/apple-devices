// name: FUN_1002c3cd0
// address: 1002c3cd0

void FUN_1002c3cd0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = *param_2;
  if (param_2[1] == 0) {
    param_1[1] = 0;
  }
  else {
    lVar1 = std::__shared_weak_count::lock();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10013bd04();
}

