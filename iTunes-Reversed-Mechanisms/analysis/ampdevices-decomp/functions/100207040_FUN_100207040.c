// name: FUN_100207040
// address: 100207040

undefined8 FUN_100207040(long param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  long lVar1;
  long lVar2;
  byte local_40 [16];
  void *local_30;
  
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_100147c92(local_40);
  lVar2 = FUN_1002074ea(lVar1 + 0x1b0,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *param_4 = (uint)(lVar2 != lVar1 + 0x1b8);
  return 0;
}

