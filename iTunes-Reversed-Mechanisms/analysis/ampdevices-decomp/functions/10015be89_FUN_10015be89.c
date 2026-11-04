// name: FUN_10015be89
// address: 10015be89

int FUN_10015be89(long param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    sVar1 = -0x83b;
  }
  else {
    lVar3 = FUN_1001c627e();
    sVar1 = -0x75;
    if (*(short *)(lVar3 + 10) == 0) {
      uVar6 = param_4 - param_3;
      if (uVar6 != 0) {
        iVar2 = FUN_1001c5d9c(param_1);
        sVar1 = -0x32;
        if ((iVar2 < param_2) || (iVar5 = (iVar2 - param_2) + uVar6, iVar5 < 0)) goto LAB_10015bf92;
        if ((int)uVar6 < 1) {
          lVar3 = FUN_1001c627e(param_1);
          lVar4 = FUN_1001c627e(param_1);
          FUN_1001c631b((lVar3 + param_2) - (long)(int)uVar6,param_2 + lVar4,iVar5);
          sVar1 = FUN_1001c5e39(param_1,(long)(int)(iVar2 + uVar6));
          if (sVar1 != 0) goto LAB_10015bf92;
        }
        else {
          sVar1 = FUN_1001c5e39(param_1,(long)(int)(iVar2 + uVar6));
          if (sVar1 != 0) goto LAB_10015bf92;
          lVar3 = FUN_1001c627e(param_1);
          lVar4 = FUN_1001c627e(param_1);
          FUN_1001c631b(lVar3 + param_2,(ulong)uVar6 + param_2 + lVar4,(long)(iVar2 - param_2));
        }
      }
      sVar1 = 0;
    }
  }
LAB_10015bf92:
  return (int)sVar1;
}

