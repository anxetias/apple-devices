// name: FUN_1001abb95
// address: 1001abb95

void FUN_1001abb95(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  cfstringStruct *local_38;
  undefined1 local_30 [8];
  
  lVar2 = _CFStringFind(param_1,&cf__,0);
  if (lVar2 == -1) {
    FUN_1001aaef6(local_30,param_1);
    local_38 = &cf___;
    uVar1 = *(ulong *)(param_2 + 8);
    if (uVar1 < *(ulong *)(param_2 + 0x10)) {
      FUN_1001ac7f8(uVar1,local_30,&local_38);
      lVar2 = uVar1 + 0x10;
      *(long *)(param_2 + 8) = lVar2;
    }
    else {
      lVar2 = FUN_1001ac702(param_2,local_30,&local_38);
    }
    *(long *)(param_2 + 8) = lVar2;
  }
  else {
    uVar3 = _CFStringCreateWithSubstring(DAT_1008c4d98,param_1,0,lVar2);
    FUN_1001aaedc(local_30,uVar3);
    lVar4 = FUN_1001737f8(param_1);
    lVar2 = lVar2 + 1;
    if (lVar4 - lVar2 != 0 && lVar2 <= lVar4) {
      uVar3 = _CFStringCreateWithSubstring(DAT_1008c4d98,param_1,lVar2,lVar4 - lVar2);
      FUN_1001aaedc(&local_38,uVar3);
      uVar1 = *(ulong *)(param_2 + 8);
      if (uVar1 < *(ulong *)(param_2 + 0x10)) {
        FUN_1001ac6cc(uVar1,local_30,&local_38);
        lVar2 = uVar1 + 0x10;
        *(long *)(param_2 + 8) = lVar2;
      }
      else {
        lVar2 = FUN_1001ac5d6(param_2,local_30,&local_38);
      }
      *(long *)(param_2 + 8) = lVar2;
      FUN_1001ab006(&local_38);
    }
  }
  FUN_1001ab006(local_30);
  return;
}

