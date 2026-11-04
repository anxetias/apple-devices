// name: FUN_10016c97a
// address: 10016c97a

void FUN_10016c97a(long param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long *unaff_RBX;
  
  if (*(char *)*param_2 != '[') {
    FUN_10067903d();
LAB_10016ca80:
    uVar4 = ___cxa_allocate_exception(0x20);
    FUN_10016c052(uVar4,7,"kParseErrorArrayMissCommaOrSquareBracket",*unaff_RBX - unaff_RBX[1]);
LAB_10016caa8:
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar4,&PTR_DAT_10083c098,FUN_10016c08a);
  }
  *param_2 = (long)((char *)*param_2 + 1);
  FUN_10016b29c(param_3);
  pbVar2 = (byte *)*param_2;
  while (((ulong)*pbVar2 < 0x21 && ((0x100002600U >> ((ulong)*pbVar2 & 0x3f) & 1) != 0))) {
    pbVar2 = pbVar2 + 1;
  }
  *param_2 = (long)pbVar2;
  if (*pbVar2 == 0x5d) {
    *param_2 = (long)(pbVar2 + 1);
    cVar1 = FUN_10016b310(param_3);
    if (cVar1 == '\0') {
      uVar4 = ___cxa_allocate_exception(0x20);
      FUN_10016c052(uVar4,0x10,"kParseErrorTermination",*param_2 - param_2[1]);
      goto LAB_10016caa8;
    }
  }
  else {
    while (FUN_10016c094(param_1,param_2,param_3), *(int *)(param_1 + 0x30) == 0) {
      pbVar2 = (byte *)*param_2;
      do {
        pbVar3 = pbVar2;
        pbVar2 = pbVar3 + 1;
        if (0x20 < (ulong)*pbVar3) break;
      } while ((0x100002600U >> ((ulong)*pbVar3 & 0x3f) & 1) != 0);
      *param_2 = (long)pbVar2;
      if (*pbVar3 != 0x2c) {
        unaff_RBX = param_2;
        if (*pbVar3 != 0x5d) goto LAB_10016ca80;
        cVar1 = FUN_10016b310(param_3);
        if (cVar1 != '\0') {
          return;
        }
        uVar4 = ___cxa_allocate_exception(0x20);
        FUN_10016c052(uVar4,0x10,"kParseErrorTermination",*param_2 - param_2[1]);
        goto LAB_10016caa8;
      }
      while (((ulong)*pbVar2 < 0x21 && ((0x100002600U >> ((ulong)*pbVar2 & 0x3f) & 1) != 0))) {
        pbVar2 = pbVar2 + 1;
      }
      *param_2 = (long)pbVar2;
    }
  }
  return;
}

