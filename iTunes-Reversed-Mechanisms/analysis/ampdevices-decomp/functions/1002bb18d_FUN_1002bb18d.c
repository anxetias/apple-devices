// name: FUN_1002bb18d
// address: 1002bb18d

undefined1 FUN_1002bb18d(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(lVar1 + 0x58);
  cVar3 = FUN_100474d03(lVar1);
  if ((((((((param_2 & 0x10) != 0) || (cVar3 == '\0')) &&
         ((cVar3 = FUN_100474d03(lVar1), (param_2 & 0x20) == 0 || (cVar3 != '\0')))) &&
        (((*(byte *)(lVar1 + 0xc4) & 0x80) == 0 &&
         (((param_2 & 0x40) != 0 || (cVar3 = FUN_10047669e(lVar1), cVar3 == '\0')))))) &&
       ((((param_2 & 1) == 0 || (*(int *)(lVar2 + 0x3c) == 0x46494c45)) &&
        (((param_2 & 4) == 0 || ((*(byte *)(lVar1 + 0xc5) & 0x20) == 0)))))) &&
      (((param_2 & 8) == 0 || (*(int *)(lVar1 + 0x144) == 0)))) &&
     (((param_2 & 2) == 0 || (cVar3 = FUN_1003a7f56(param_1), cVar3 == '\0')))) {
    return 1;
  }
  return 0;
}

