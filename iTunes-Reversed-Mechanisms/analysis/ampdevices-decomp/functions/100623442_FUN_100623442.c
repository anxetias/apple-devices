// name: FUN_100623442
// address: 100623442

void FUN_100623442(ulong param_1)

{
  bool bVar1;
  undefined *puVar2;
  void *pvVar3;
  ulong uVar4;
  
  puVar2 = PTR_nothrow_10082c970;
  uVar4 = 0xfffffffffffffff;
  if (param_1 < 0xfffffffffffffff) {
    uVar4 = param_1;
  }
  do {
    pvVar3 = operator_new(uVar4 * 8,(nothrow_t *)puVar2);
    if (pvVar3 != (void *)0x0) {
      return;
    }
    bVar1 = 1 < uVar4;
    uVar4 = uVar4 >> 1;
  } while (bVar1);
  return;
}

