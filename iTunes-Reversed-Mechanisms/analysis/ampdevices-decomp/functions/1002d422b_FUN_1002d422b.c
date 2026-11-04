// name: FUN_1002d422b
// address: 1002d422b

undefined8 FUN_1002d422b(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x36) != '\0') {
    uVar1 = FUN_10018a0cf(param_1 + 0x48);
    return uVar1;
  }
  return 0xffffffdd;
}

