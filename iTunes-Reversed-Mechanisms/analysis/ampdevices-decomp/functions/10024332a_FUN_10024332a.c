// name: FUN_10024332a
// address: 10024332a

void FUN_10024332a(long param_1,long param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  if (param_2 - 1000U < 3) {
    *(short *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (short)(param_2 - 1000U) + 1;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x1a0) = param_3;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  uVar1 = _CFRunLoopGetMain();
  _CFRunLoopWakeUp(uVar1);
  return;
}

