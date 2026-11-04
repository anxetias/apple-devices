// name: FUN_100245cb2
// address: 100245cb2

undefined1
FUN_100245cb2(undefined8 param_1,int *param_2,char param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  
  FUN_1002455a1(param_2);
  lVar1 = FUN_10016696d(param_1,&cf_iPodPrefs);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_100170ef7(lVar1);
    uVar5 = 0x4d0;
    if (uVar2 < 0x4d0) {
      uVar5 = uVar2;
    }
    uVar3 = FUN_100170f3b(lVar1);
    FUN_1001c631b(uVar3,param_2,uVar5);
    if ((*param_2 != 0x64707266) || (1 < *(ushort *)(param_2 + 1))) {
      FUN_1002455a1(param_2);
    }
    uVar4 = 1;
    if (param_3 != '\0') {
      FUN_100245d61(param_2,param_4,param_5);
    }
  }
  return uVar4;
}

