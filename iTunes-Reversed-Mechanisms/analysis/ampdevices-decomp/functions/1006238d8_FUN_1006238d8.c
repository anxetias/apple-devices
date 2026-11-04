// name: FUN_1006238d8
// address: 1006238d8

undefined1  [16] FUN_1006238d8(ulong param_1)

{
  bool bVar1;
  undefined *puVar2;
  void *pvVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  puVar2 = PTR_nothrow_10082c970;
  if (0 < (long)param_1) {
    uVar4 = 0x155555555555555;
    if (param_1 < 0x155555555555555) {
      uVar4 = param_1;
    }
    do {
      pvVar3 = operator_new(uVar4 * 0x60,(nothrow_t *)puVar2);
      if (pvVar3 != (void *)0x0) goto LAB_100623927;
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar1);
  }
  pvVar3 = (void *)0x0;
  uVar4 = 0;
LAB_100623927:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = pvVar3;
  return auVar5;
}

