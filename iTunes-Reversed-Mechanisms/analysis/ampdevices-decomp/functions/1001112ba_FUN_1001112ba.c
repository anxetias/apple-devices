// name: FUN_1001112ba
// address: 1001112ba

undefined8 FUN_1001112ba(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x2438);
  if (*(char *)(param_1 + 0x2448) != '\0') {
    if ((*(char *)(lVar1 + 0x1f4f) != '\0') &&
       (*(char *)(lVar1 + 0x1f4c) != *(char *)(lVar1 + 0x1f4d))) {
      return 0xfffffffe;
    }
    FUN_100107958(lVar1,param_1 + 0x2450);
    iVar2 = (**(code **)(**(long **)(param_1 + 0x2440) + 0x70))
                      (*(long **)(param_1 + 0x2440),*(long *)(param_1 + 0x2438) + 0x494,
                       lVar1 + 0xb38,param_2,*(undefined1 *)(param_1 + 0x244c));
    if (iVar2 != 0) {
      return 0xfffffffe;
    }
    *(undefined1 *)(param_1 + 0x2448) = 0;
  }
  if (*(char *)(lVar1 + 0x1f4f) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_100116786(*(undefined8 *)(param_1 + 0x2440));
  }
  *(int *)(param_2 + 0x68) = (2 - *(int *)(param_1 + 0x244c)) * *(int *)(param_2 + 0x68);
  *(undefined1 *)(param_2 + 0x90) = 1;
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(*(long *)(param_1 + 0x2440) + 0xc2cc);
  return uVar3;
}

