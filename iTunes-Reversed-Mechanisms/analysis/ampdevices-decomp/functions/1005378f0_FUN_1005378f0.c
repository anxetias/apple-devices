// name: FUN_1005378f0
// address: 1005378f0

undefined8
FUN_1005378f0(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong local_38;
  undefined8 local_30;
  
  local_38 = 0;
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_10017cc65(param_1,0x64617461,1,&local_30);
    uVar2 = 0;
    if (iVar1 == 0) {
      FUN_10017ce92(local_30,&local_38);
      uVar3 = (ulong)param_3;
      if (local_38 < param_3) {
        uVar3 = local_38;
      }
      iVar1 = FUN_10017d186(local_30,param_4,uVar3,0,0);
      FUN_10017cdfb(local_30);
      uVar2 = (undefined4)uVar3;
      if (iVar1 != 0) {
        uVar2 = 0;
      }
    }
  }
  *param_5 = uVar2;
  return 0;
}

