// name: FUN_1003d0a10
// address: 1003d0a10

undefined8 FUN_1003d0a10(int param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0x46494c45) {
    uVar1 = FUN_1002b8a30(param_2 + 0x2c,0,0);
    return uVar1;
  }
  if (param_1 == 0x48545450) {
    uVar1 = FUN_1002b8874(param_2 + 0x30,*(undefined4 *)(param_2 + 0x2c),0);
    return uVar1;
  }
  return 0;
}

