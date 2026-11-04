// name: FUN_1001ed46d
// address: 1001ed46d

void FUN_1001ed46d(long param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x80) == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0x88));
  }
  **(undefined4 **)(param_1 + 0x90) = uVar1;
  FUN_1001e8f15(param_1 + 0x98);
  return;
}

