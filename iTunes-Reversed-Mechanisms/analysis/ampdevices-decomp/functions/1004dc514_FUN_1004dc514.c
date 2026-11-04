// name: FUN_1004dc514
// address: 1004dc514

undefined8 * FUN_1004dc514(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*(long *)(param_2 + 0x68) != 0) {
    lVar1 = std::__shared_weak_count::lock();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *(undefined8 *)(param_2 + 0x60);
    }
  }
  return param_1;
}

