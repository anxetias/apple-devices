// name: FUN_1004308df
// address: 1004308df

void FUN_1004308df(long param_1,char param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  
  *(int *)(param_1 + 0x166d0) = *(int *)(param_1 + 0x166d0) + 1;
  FUN_100313e0b(*(undefined8 *)(param_1 + 0x30));
  lVar2 = FUN_100315ede(*(undefined8 *)(param_1 + 0x30));
  while (lVar2 != 0) {
    lVar3 = FUN_1003161a8(lVar2);
    if ((param_2 == '\0') || (*(short *)(lVar2 + 0x10) != 0x20)) {
      FUN_1004ed1a5(lVar2);
      lVar2 = lVar3;
    }
    else {
      FUN_100488d27(lVar2,0,0);
      lVar2 = lVar3;
    }
  }
  FUN_1002fbbfc(*(undefined8 *)(param_1 + 0x30));
  *(int *)(param_1 + 0x166d0) = *(int *)(param_1 + 0x166d0) + -1;
  if (*(char *)(param_1 + 0x35c) == '\0') {
    puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + 0x1bb0);
    *puVar1 = *puVar1 & 0xfffffffdffffffff;
  }
  return;
}

