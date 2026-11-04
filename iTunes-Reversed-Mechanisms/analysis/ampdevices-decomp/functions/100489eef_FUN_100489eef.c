// name: FUN_100489eef
// address: 100489eef

undefined8 FUN_100489eef(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_R8;
  
  lVar1 = FUN_100309805(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    uVar2 = FUN_100489951(param_1,lVar1,in_R8);
    return uVar2;
  }
  return 0;
}

