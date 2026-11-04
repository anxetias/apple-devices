// name: FUN_10017d9dd
// address: 10017d9dd

int FUN_10017d9dd(undefined8 param_1,ulong param_2,uint param_3,code *param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_48;
  long local_40;
  float local_34;
  
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_10017ce92(param_1,&local_48);
    uVar3 = local_48;
    if ((iVar2 == 0) && (iVar2 = -0x27, param_2 <= local_48)) {
      local_40 = FUN_1001c64e6(0x20000);
      if (local_40 == 0) {
        iVar2 = -0x6c;
      }
      else {
        uVar1 = (int)uVar3 - (int)param_2;
        if (param_3 + param_2 <= uVar3) {
          uVar1 = param_3;
        }
        uVar4 = local_48 - (uVar1 + param_2);
        local_34 = (float)uVar4;
        uVar3 = uVar4;
        while (uVar3 != 0) {
          uVar5 = 0x20000;
          if (uVar3 < 0x20000) {
            uVar5 = uVar3;
          }
          iVar2 = FUN_10017d068(param_1);
          if ((((iVar2 != 0) || (iVar2 = FUN_10017d186(param_1,local_40,uVar5,0,0), iVar2 != 0)) ||
              (iVar2 = FUN_10017d068(param_1,param_2), iVar2 != 0)) ||
             ((iVar2 = FUN_10017d230(param_1,local_40,uVar5,0), iVar2 != 0 ||
              ((uVar3 = uVar3 - uVar5, param_4 != (code *)0x0 &&
               (iVar2 = (*param_4)((int)(((float)(uVar4 - uVar3) * DAT_10070bcf0) / local_34) &
                                   0xffff,param_5), iVar2 != 0)))))) goto LAB_10017db9b;
          param_2 = param_2 + uVar5;
        }
        iVar2 = FUN_10017cf3c(param_1,local_48 - uVar1);
LAB_10017db9b:
        FUN_1001c652e(local_40);
      }
    }
  }
  return iVar2;
}

