// name: FUN_1002dfc47
// address: 1002dfc47

ulong FUN_1002dfc47(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1001b9c66();
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_1001b9c66(param_1,param_2);
    uVar2 = (ulong)(0 < iVar1);
  }
  return uVar2;
}

