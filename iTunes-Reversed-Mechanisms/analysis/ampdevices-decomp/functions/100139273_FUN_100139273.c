// name: FUN_100139273
// address: 100139273

undefined8 FUN_100139273(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  iVar1 = ___cxa_guard_acquire(&DAT_10088fcc0);
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    pvVar2 = operator_new(8,(nothrow_t *)PTR_nothrow_10082c970);
    *param_1 = pvVar2;
    if (pvVar2 != (void *)0x0) {
      FUN_1001359d2(pvVar2);
    }
    uVar3 = 0;
  }
  return uVar3;
}

