// name: FUN_1005f6960
// address: 1005f6960

ulong FUN_1005f6960(undefined8 param_1,undefined4 param_2,uint param_3,uint param_4,
                   undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = FUN_1005f6551(param_1,param_3,param_4 & 0xfffffffe,param_5);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_1005f6551(param_2,(char)param_3,param_4 & 0xfffffffe,param_5);
    if ((uVar2 != 0) && (uVar3 = (ulong)uVar2, (param_4 & 1) != 0)) {
      uVar3 = FUN_1005f6551((int)param_1,param_3 & 0xff,param_4,param_5);
      return uVar3;
    }
  }
  return uVar3;
}

