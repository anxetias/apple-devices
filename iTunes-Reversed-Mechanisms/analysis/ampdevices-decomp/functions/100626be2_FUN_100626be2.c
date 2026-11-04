// name: FUN_100626be2
// address: 100626be2

undefined4 FUN_100626be2(long param_1,char param_2)

{
  void *pvVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    pvVar1 = *(void **)(param_1 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FUN_10059729c(pvVar1);
      operator_delete(pvVar1);
      lVar4 = *(long *)(param_1 + 0x68);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    uVar3 = FUN_1001d308b(lVar4);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (*(long *)(param_1 + 0x1468) != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        cVar2 = FUN_10017cbd0(*(long *)(param_1 + 0x1478) + lVar4);
        if (cVar2 != '\0') {
          if (param_2 == '\0') {
            FUN_10018e164(*(long *)(param_1 + 0x1478) + lVar4);
          }
          else {
            FUN_100182d4d();
          }
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x420;
      } while (uVar5 < *(ulong *)(param_1 + 0x1468));
    }
    if (*(char *)(param_1 + 0x1045) != '\0') {
      uVar3 = FUN_10062712a(param_1);
      ___bzero(param_1 + 0x1480,0x420);
      *(undefined1 *)(param_1 + 0x1045) = 0;
    }
  }
  if (*(void **)(param_1 + 0x1478) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x1478));
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x1468) = 0;
  *(undefined8 *)(param_1 + 0x1470) = 0;
  *(undefined8 *)(param_1 + 0x1478) = 0;
  return uVar3;
}

