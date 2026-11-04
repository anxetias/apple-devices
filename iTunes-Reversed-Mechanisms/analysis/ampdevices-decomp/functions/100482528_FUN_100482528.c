// name: FUN_100482528
// address: 100482528

undefined8 FUN_100482528(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  
  lVar1 = FUN_10030a068(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    uVar2 = FUN_100489951(param_1,lVar1,in_R9);
    return uVar2;
  }
  return 0;
}

