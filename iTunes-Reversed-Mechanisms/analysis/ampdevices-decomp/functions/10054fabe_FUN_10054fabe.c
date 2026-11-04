// name: FUN_10054fabe
// address: 10054fabe

int FUN_10054fabe(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  long local_40;
  undefined8 local_38;
  
  if ((param_2 == 0x4d46494c) || (iVar2 = -0x32, param_2 == 0x46494c45)) {
    iVar2 = 0;
    local_38 = param_4;
    iVar1 = FUN_100548d34(0,param_1,param_2,param_3,0,1);
    if (iVar1 == 0) {
      iVar2 = 0;
      iVar1 = FUN_100549f1e(param_1,0,param_2,param_3,(param_5 & 0x10) << 5 | (param_5 & 4) << 6,0,0
                           );
      if (iVar1 == 0) {
        iVar2 = FUN_1005d872c(param_1 + 0x710,0,0,&local_40);
        if (local_40 != 0 && iVar2 == 0) {
          iVar2 = FUN_1003b035b(local_40,local_38);
          FUN_1001c8d4b(local_40,0);
        }
      }
    }
  }
  return iVar2;
}

