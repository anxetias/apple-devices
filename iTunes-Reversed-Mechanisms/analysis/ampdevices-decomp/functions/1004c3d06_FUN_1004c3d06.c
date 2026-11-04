// name: FUN_1004c3d06
// address: 1004c3d06

undefined8 FUN_1004c3d06(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x4f0) == 0) {
    uVar3 = 0xffffffce;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      lVar2 = FUN_100443b7e();
      if ((lVar2 == -1) && (lVar2 = -1, *(char *)(param_1 + 0x50a) == '\x01')) {
        lVar2 = *(long *)(param_1 + 0x510);
      }
      *param_2 = (int)lVar2;
    }
    uVar3 = 0;
    if (param_3 != (undefined4 *)0x0) {
      uVar1 = FUN_10044013a(*(undefined8 *)(param_1 + 0x4f0));
      *param_3 = uVar1;
    }
  }
  return uVar3;
}

