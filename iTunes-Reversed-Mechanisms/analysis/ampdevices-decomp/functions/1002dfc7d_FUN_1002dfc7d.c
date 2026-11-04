// name: FUN_1002dfc7d
// address: 1002dfc7d

ulong FUN_1002dfc7d(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = FUN_1002dfcbb(param_1,param_3);
  uVar2 = FUN_1002dfcbb(param_2,param_3);
  uVar3 = 0xffffffff;
  if (uVar2 <= uVar1) {
    uVar3 = (ulong)(uVar2 < uVar1);
  }
  return uVar3;
}

