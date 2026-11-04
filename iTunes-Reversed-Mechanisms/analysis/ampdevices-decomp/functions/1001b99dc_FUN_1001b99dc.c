// name: FUN_1001b99dc
// address: 1001b99dc

ulong FUN_1001b99dc(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  if (param_3 == 0) {
    iVar1 = FUN_1001b9f98();
    uVar2 = 1;
    if (iVar1 < 1) {
      uVar2 = (ulong)-(uint)(iVar1 != 0);
    }
  }
  else {
    uVar2 = FUN_1001bdad4();
  }
  return uVar2;
}

