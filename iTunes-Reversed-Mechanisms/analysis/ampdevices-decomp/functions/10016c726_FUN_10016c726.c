// name: FUN_10016c726
// address: 10016c726

void FUN_10016c726(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long *unaff_RBX;
  
  if (*(char *)*param_2 == '{') {
    *param_2 = (long)((char *)*param_2 + 1);
    FUN_10016b0ea(param_3);
    pbVar3 = (byte *)*param_2;
    while (((ulong)*pbVar3 < 0x21 && ((0x100002600U >> ((ulong)*pbVar3 & 0x3f) & 1) != 0))) {
      pbVar3 = pbVar3 + 1;
    }
    *param_2 = (long)pbVar3;
    bVar1 = *pbVar3;
    if (bVar1 == 0x7d) {
      *param_2 = (long)(pbVar3 + 1);
      cVar2 = FUN_10016b164(param_3);
      if (cVar2 != '\0') {
        return;
      }
      uVar5 = ___cxa_allocate_exception(0x20);
      FUN_10016c052(uVar5,0x10,"kParseErrorTermination",*param_2 - param_2[1]);
    }
    else {
      while (bVar1 == 0x22) {
        FUN_10016c362(param_1,param_2,param_3,1);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar3 = (byte *)*param_2;
        do {
          pbVar4 = pbVar3;
          pbVar3 = pbVar4 + 1;
          if (0x20 < (ulong)*pbVar4) break;
        } while ((0x100002600U >> ((ulong)*pbVar4 & 0x3f) & 1) != 0);
        *param_2 = (long)pbVar3;
        unaff_RBX = param_2;
        if (*pbVar4 != 0x3a) goto LAB_10016c8cc;
        while (((ulong)*pbVar3 < 0x21 && ((0x100002600U >> ((ulong)*pbVar3 & 0x3f) & 1) != 0))) {
          pbVar3 = pbVar3 + 1;
        }
        *param_2 = (long)pbVar3;
        FUN_10016c094(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar3 = (byte *)*param_2;
        do {
          pbVar4 = pbVar3;
          pbVar3 = pbVar4 + 1;
          if (0x20 < (ulong)*pbVar4) break;
        } while ((0x100002600U >> ((ulong)*pbVar4 & 0x3f) & 1) != 0);
        *param_2 = (long)pbVar3;
        if (*pbVar4 != 0x2c) {
          if (*pbVar4 == 0x7d) {
            cVar2 = FUN_10016b164(param_3);
            if (cVar2 != '\0') {
              return;
            }
            uVar5 = ___cxa_allocate_exception(0x20);
            FUN_10016c052(uVar5,0x10,"kParseErrorTermination",*param_2 - param_2[1]);
          }
          else {
            uVar5 = ___cxa_allocate_exception(0x20);
            FUN_10016c052(uVar5,6,"kParseErrorObjectMissCommaOrCurlyBracket",*param_2 - param_2[1]);
          }
          goto LAB_10016c91e;
        }
        while (((ulong)*pbVar3 < 0x21 && ((0x100002600U >> ((ulong)*pbVar3 & 0x3f) & 1) != 0))) {
          pbVar3 = pbVar3 + 1;
        }
        *param_2 = (long)pbVar3;
        bVar1 = *pbVar3;
      }
      uVar5 = ___cxa_allocate_exception(0x20);
      FUN_10016c052(uVar5,4,"kParseErrorObjectMissName",*param_2 - param_2[1]);
    }
  }
  else {
    FUN_10067901a();
LAB_10016c8cc:
    uVar5 = ___cxa_allocate_exception(0x20);
    FUN_10016c052(uVar5,5,"kParseErrorObjectMissColon",*unaff_RBX - unaff_RBX[1]);
  }
LAB_10016c91e:
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar5,&PTR_DAT_10083c098,FUN_10016c08a);
}

