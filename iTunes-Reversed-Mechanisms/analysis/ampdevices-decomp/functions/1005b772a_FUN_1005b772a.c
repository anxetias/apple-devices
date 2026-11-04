// name: FUN_1005b772a
// address: 1005b772a

void FUN_1005b772a(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10086f180;
  pvVar1 = (void *)param_1[0x11];
  if (pvVar1 != (void *)0x0) {
    param_1[0x12] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_1001a7a94(param_1 + 0xf);
  FUN_1001a7a94(param_1 + 0xd);
  FUN_1001a7a94(param_1 + 0xb);
  FUN_1001a7a94(param_1 + 9);
  FUN_1001a7a94(param_1 + 7);
  FUN_1001a7a94(param_1 + 5);
  FUN_1001a8fac(param_1 + 3);
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

