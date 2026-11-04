// name: FUN_1001b710a
// address: 1001b710a

void FUN_1001b710a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10083ce30;
  *(undefined4 *)(param_1 + 3) = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1001b7a5c(param_1 + 6);
  uVar2 = *param_3;
  param_1[8] = uVar2;
  lVar1 = param_3[1];
  param_1[9] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
    UNLOCK();
    uVar2 = *param_3;
  }
  param_1[10] = uVar2;
  return;
}

