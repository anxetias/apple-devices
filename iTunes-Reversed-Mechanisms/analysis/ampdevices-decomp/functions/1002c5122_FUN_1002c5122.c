// name: FUN_1002c5122
// address: 1002c5122

undefined8 FUN_1002c5122(void)

{
  undefined8 uVar1;
  undefined2 *in_RCX;
  undefined8 local_28;
  ulong local_20;
  int local_14;
  
  *in_RCX = 0;
  uVar1 = FUN_1002c4ca2();
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if ((local_14 == 0) || (local_14 == 2)) {
    uVar1 = FUN_1001e5811(local_28,local_20,in_RCX);
    if ((int)uVar1 != 0) goto LAB_1002c5187;
  }
  else {
    uVar1 = 0xffffff32;
    if (local_14 != 1) {
LAB_1002c5187:
      *in_RCX = 0;
      return uVar1;
    }
    FUN_1001e3863(local_28,local_20 >> 1,in_RCX);
  }
  return 0;
}

