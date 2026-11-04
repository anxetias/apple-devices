// name: FUN_1004c27ce
// address: 1004c27ce

void FUN_1004c27ce(long param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined4 *)(param_1 + 0x598) = 0;
  FUN_1002188e4(param_1 + 0x5a0);
  FUN_10017060f(*(undefined8 *)(param_1 + 0x5b0));
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  cVar1 = FUN_1001e96b8(param_1 + 0x5c8);
  if (cVar1 != '\0') {
    FUN_1001e9bb5(param_1 + 0x5c8);
    return;
  }
  return;
}

