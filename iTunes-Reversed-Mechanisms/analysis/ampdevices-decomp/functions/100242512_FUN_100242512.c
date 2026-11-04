// name: FUN_100242512
// address: 100242512

undefined8 * FUN_100242512(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*(long *)(param_2 + 0x4d0) != 0) {
    lVar1 = std::__shared_weak_count::lock();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *(undefined8 *)(param_2 + 0x4c8);
    }
  }
  return param_1;
}

