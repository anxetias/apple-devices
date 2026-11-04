// name: FUN_10019261e
// address: 10019261e

undefined8 FUN_10019261e(long param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = _strlen((char *)(param_1 + 0x19));
  if ((sVar1 == 1) && (*(char *)(param_1 + 0x19) == '/')) {
    return 0xffffec78;
  }
  uVar2 = FUN_1001894bc(param_1,param_2,0);
  return uVar2;
}

