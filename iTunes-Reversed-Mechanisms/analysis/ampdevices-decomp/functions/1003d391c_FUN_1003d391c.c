// name: FUN_1003d391c
// address: 1003d391c

void FUN_1003d391c(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  for (lVar2 = FUN_100496019(param_2); lVar2 != 0; lVar2 = FUN_1004960d0(lVar2)) {
    if ((((*(char *)(lVar2 + 0xb2) == '\x01') && (*(int *)(lVar2 + 0xa4) != 0)) &&
        (FUN_10029b39e(lVar2), *(char *)(lVar2 + 0x80) == '\0')) &&
       (((cVar1 = FUN_10029b39e(lVar2), cVar1 == '\0' &&
         (lVar3 = FUN_1004985e6(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x66b8),
                                *(undefined4 *)(lVar2 + 0x18)), lVar3 == 0)) &&
        (*(undefined1 *)(lVar2 + 0x80) = 5, *(int *)(lVar2 + 0xa0) == 0)))) {
      *(undefined4 *)(lVar2 + 0xa0) = 1;
    }
  }
  return;
}

