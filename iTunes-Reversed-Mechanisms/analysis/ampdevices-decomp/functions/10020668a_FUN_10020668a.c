// name: FUN_10020668a
// address: 10020668a

undefined8 FUN_10020668a(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  if ((bVar1 & 1) != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = ___dynamic_cast(*(long *)(param_1 + 8),&PTR_DAT_100852a70,&PTR_DAT_10083d9b8,0);
    }
    FUN_1002066e2(uVar2,*(undefined8 *)(param_1 + 0x10));
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 0x10) != 0) {
    _free(*(void **)(param_1 + 0x10));
  }
  return 0;
}

