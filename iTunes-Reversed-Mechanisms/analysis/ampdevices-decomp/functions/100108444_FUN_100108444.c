// name: FUN_100108444
// address: 100108444

undefined4 FUN_100108444(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x2438);
  if (*(char *)(param_1 + 0x2448) != '\0') {
    if ((*(char *)(lVar1 + 0x1f4f) != '\0') &&
       (*(char *)(lVar1 + 0x1f4c) != *(char *)(lVar1 + 0x1f4d))) {
      return 0xfffffffe;
    }
    FUN_100107958(lVar1,param_1 + 0x2450);
    iVar3 = FUN_10011d63a(*(undefined8 *)(param_1 + 0x24b8),*(long *)(param_1 + 0x2438) + 0x494,
                          lVar1 + 0xb38,param_2);
    if (iVar3 != 0) {
      return 0xfffffffe;
    }
    *(undefined1 *)(param_1 + 0x2448) = 0;
  }
  if (*(char *)(lVar1 + 0x1f4f) == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_100116786(*(undefined8 *)(param_1 + 0x24b8));
  }
  *(int *)(param_2 + 0x68) = (2 - *(int *)(param_1 + 0x244c)) * *(int *)(param_2 + 0x68);
  *(undefined1 *)(param_2 + 0x90) = 1;
  cVar2 = (**(code **)(**(long **)(param_1 + 0x24b8) + 0x18))();
  *(bool *)(param_2 + 0x91) = cVar2 != '\0';
  if (*(char *)(*(long *)(param_1 + 0x24b8) + 0x1cbe0) != '\0') {
    *(undefined2 *)(param_2 + 0x6c) = 2;
  }
  return uVar4;
}

