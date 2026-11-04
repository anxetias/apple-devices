// name: FUN_10052d57a
// address: 10052d57a

undefined8 FUN_10052d57a(long param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x5b0);
  uVar1 = 0xffffffce;
  if (param_2 <= lVar2) {
    if (*(char *)(param_1 + 0x500) == '\x01') {
      lVar2 = *(long *)(param_1 + 0x508);
    }
    uVar1 = 0;
    lVar3 = 0;
    if (param_2 <= lVar2) {
      lVar3 = lVar2 - param_2;
    }
    *param_3 = lVar3;
  }
  return uVar1;
}

