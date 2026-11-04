// name: FUN_1004d91b4
// address: 1004d91b4

void FUN_1004d91b4(long param_1,undefined2 param_2)

{
  undefined8 uVar1;
  
  *(undefined2 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  uVar1 = _CFRunLoopGetMain();
  _CFRunLoopWakeUp(uVar1);
  return;
}

