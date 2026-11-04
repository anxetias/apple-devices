// name: FUN_10058453f
// address: 10058453f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10058453f(long param_1,char param_2,char param_3)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  if (*(int *)(param_1 + 0x2cc4) == 0) {
    bVar4 = true;
    if (param_2 != '\0') {
LAB_10058456f:
      FUN_100313e0b(param_1);
      dVar5 = (double)FUN_1001ebd46();
      lVar2 = FUN_100315ede(param_1);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          cVar1 = FUN_1005841c8(lVar2,param_2);
          if (cVar1 != '\0') {
            uVar3 = 1;
          }
        } while (((bVar4) || (dVar6 = (double)FUN_1001ebd46(), dVar6 - dVar5 < _DAT_100748168)) &&
                (lVar2 = FUN_100316031(lVar2), lVar2 != 0));
      }
      FUN_1002fbbfc(param_1);
      return uVar3;
    }
    for (lVar2 = FUN_100315ede(param_1); lVar2 != 0; lVar2 = FUN_100316031(lVar2)) {
      if ((((*(byte *)(lVar2 + 0x298) & 1) != 0) && ((*(byte *)(lVar2 + 0x298) & 4) != 0)) &&
         (*(char *)(lVar2 + 0x2a0) != '\0')) {
        bVar4 = param_3 == '\0';
        goto LAB_10058456f;
      }
    }
  }
  return 0;
}

