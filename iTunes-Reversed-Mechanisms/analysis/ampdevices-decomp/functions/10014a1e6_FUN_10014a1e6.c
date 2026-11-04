// name: FUN_10014a1e6
// address: 10014a1e6

void FUN_10014a1e6(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  
  lVar1 = *param_1;
  FUN_1001ab042(local_30);
  FUN_1001a8c1c(local_28,param_3);
  uVar2 = *(ulong *)(lVar1 + 8);
  if (uVar2 < *(ulong *)(lVar1 + 0x10)) {
    FUN_10014a388(uVar2,local_30,local_28);
    lVar3 = uVar2 + 0x10;
    *(long *)(lVar1 + 8) = lVar3;
  }
  else {
    lVar3 = FUN_10014a292(lVar1,local_30,local_28);
  }
  *(long *)(lVar1 + 8) = lVar3;
  FUN_1001ab240(local_28);
  FUN_1001ab006(local_30);
  return;
}

