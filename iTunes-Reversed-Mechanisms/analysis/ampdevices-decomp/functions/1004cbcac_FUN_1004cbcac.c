// name: FUN_1004cbcac
// address: 1004cbcac

void FUN_1004cbcac(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_1001a7a94((long)pvVar1 + 0x18);
    FUN_1001ab006((long)pvVar1 + 0x10);
    if (*(long *)((long)pvVar1 + 8) != 0) {
      std::__shared_weak_count::__release_weak();
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

