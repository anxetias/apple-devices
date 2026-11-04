// name: FUN_10017d7da
// address: 10017d7da

int FUN_10017d7da(undefined8 param_1,ulong param_2,long param_3,uint param_4,code *param_5,
                 undefined8 param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_40;
  float local_34;
  
  if (param_4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_10017ce92(param_1,&local_40);
    if ((iVar1 == 0) && (iVar1 = -0x27, param_2 <= local_40)) {
      lVar2 = FUN_1001c64e6(0x20000);
      if (lVar2 == 0) {
        iVar1 = -0x6c;
      }
      else {
        uVar6 = (ulong)param_4;
        iVar1 = FUN_10017cf3c(param_1,local_40 + uVar6);
        if (iVar1 == 0) {
          uVar3 = local_40 - param_2;
          if (uVar3 != 0) {
            local_34 = (float)uVar3;
            uVar5 = 0;
            do {
              uVar7 = 0x20000;
              if (uVar3 < 0x20000) {
                uVar7 = uVar3;
              }
              uVar5 = uVar5 + uVar7;
              lVar4 = local_40 - uVar5;
              iVar1 = FUN_10017d068(param_1,lVar4);
              if ((((iVar1 != 0) || (iVar1 = FUN_10017d186(param_1,lVar2,uVar7,0,0), iVar1 != 0)) ||
                  (iVar1 = FUN_10017d068(param_1,lVar4 + uVar6), iVar1 != 0)) ||
                 ((iVar1 = FUN_10017d230(param_1,lVar2,uVar7), iVar1 != 0 ||
                  ((param_5 != (code *)0x0 &&
                   (iVar1 = (*param_5)((int)(((float)uVar5 * DAT_10070bcf0) / local_34) & 0xffff,
                                       param_6), iVar1 != 0)))))) goto LAB_10017d84b;
              uVar3 = uVar3 - uVar7;
            } while (uVar3 != 0);
          }
          if (param_3 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = FUN_10017d068(param_1,param_2);
            if (iVar1 == 0) {
              iVar1 = FUN_10017d230(param_1,param_3,uVar6,0,0);
            }
          }
        }
LAB_10017d84b:
        FUN_1001c652e(lVar2);
      }
    }
  }
  return iVar1;
}

