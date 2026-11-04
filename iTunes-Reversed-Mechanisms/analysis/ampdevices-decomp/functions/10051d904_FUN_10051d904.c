// name: FUN_10051d904
// address: 10051d904

void FUN_10051d904(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = FUN_1001705fc(*param_2);
  FUN_10017060f(*(undefined8 *)(lVar1 + 0x152d0));
  *(undefined8 *)(lVar1 + 0x152d0) = uVar2;
  FUN_1001e9809(*(undefined8 *)(param_1 + 0x10));
  return;
}

