// name: FUN_1003e376c
// address: 1003e376c

undefined4
FUN_1003e376c(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_40;
  undefined1 local_34 [4];
  
  lVar2 = FUN_1003ae1f8();
  if (lVar2 == 0) {
    uVar1 = 0xffffff94;
  }
  else {
    local_40 = 0;
    uVar1 = FUN_1003e2532(param_1,param_2,lVar2,lVar2 + 0x1660,0,&local_40,param_4,local_34);
    *param_3 = local_40;
    FUN_1003ae783(lVar2 + 0x4ca8);
    FUN_1001c64c1(lVar2);
  }
  return uVar1;
}

