// name: FUN_10012b6b4
// address: 10012b6b4

void FUN_10012b6b4(long param_1)

{
  void *pvVar1;
  double dVar2;
  
  std::mutex::lock();
  pvVar1 = operator_new(0x20,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar1 != (void *)0x0) {
    FUN_10032f0f2(pvVar1);
    *(undefined4 *)((long)pvVar1 + 0x10) = 1;
    dVar2 = (double)FUN_1001711e2();
    *(double *)((long)pvVar1 + 0x18) = dVar2 + DAT_100700af8;
  }
  FUN_10012b75e(param_1 + 8,pvVar1);
  std::mutex::unlock();
  return;
}

