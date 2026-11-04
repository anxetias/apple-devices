// name: FUN_10043086b
// address: 10043086b

void FUN_10043086b(long param_1)

{
  ulong *puVar1;
  long lVar2;
  
  *(int *)(param_1 + 0x166d0) = *(int *)(param_1 + 0x166d0) + 1;
  FUN_100313e0b(*(undefined8 *)(param_1 + 0x30));
  for (lVar2 = FUN_100315ede(*(undefined8 *)(param_1 + 0x30)); lVar2 != 0;
      lVar2 = FUN_100316031(lVar2)) {
    FUN_1004ece0d(lVar2);
  }
  FUN_1002fbbfc(*(undefined8 *)(param_1 + 0x30));
  *(int *)(param_1 + 0x166d0) = *(int *)(param_1 + 0x166d0) + -1;
  if (*(char *)(param_1 + 0x35c) == '\0') {
    puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + 0x1bb0);
    *puVar1 = *puVar1 | 0x200000000;
  }
  return;
}

