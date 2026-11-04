// name: FUN_1003246b4
// address: 1003246b4

void FUN_1003246b4(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_2 + 0x48);
  if (puVar1 != (undefined8 *)0x0) {
    _free((void *)*puVar1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
  }
  return;
}

