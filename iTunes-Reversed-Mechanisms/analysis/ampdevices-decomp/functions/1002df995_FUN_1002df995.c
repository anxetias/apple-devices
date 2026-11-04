// name: FUN_1002df995
// address: 1002df995

ulong FUN_1002df995(undefined8 param_1,undefined8 param_2,ushort param_3,ushort param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  
  uVar1 = FUN_100474dd0(param_1,0);
  uVar2 = FUN_100474dd0(param_2,0);
  if (param_5 == 0) {
    bVar5 = (uVar2 & 0x10010) == 0;
    if ((param_3 == 0) && ((uVar1 & 0x10010) != 0)) {
      uVar2 = (ulong)(param_4 != 0 || bVar5);
    }
    else {
      uVar2 = 0xffffffff;
      if ((param_4 != 0 || bVar5) && (uVar2 = 0, param_3 != param_4)) {
        if (param_3 == 0) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0xffffffff;
          if ((ushort)(param_4 - 1) < param_3) {
            uVar2 = (ulong)(param_4 < param_3);
          }
        }
      }
    }
  }
  else {
    uVar3 = 1;
    if (1 < param_3) {
      uVar3 = param_3;
    }
    uVar4 = param_4;
    if (param_4 < 2) {
      uVar4 = 1;
    }
    uVar2 = 0;
    if ((uVar3 != uVar4) && (uVar2 = 0xffffffff, param_4 <= uVar3)) {
      uVar2 = (ulong)(uVar4 < param_3);
    }
  }
  return uVar2;
}

