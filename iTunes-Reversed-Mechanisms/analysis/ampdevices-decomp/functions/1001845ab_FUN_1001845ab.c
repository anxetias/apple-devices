// name: FUN_1001845ab
// address: 1001845ab

undefined8 FUN_1001845ab(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_3 + 3) != '\0') {
    FUN_100184bee(param_2);
  }
  uVar1 = FUN_1001892ae(param_2,0);
  if ((int)uVar1 == -0x2f) {
    if (*(char *)(param_1 + 0x2cd) != '\0') {
      uVar1 = FUN_100193820(param_2);
      return uVar1;
    }
    uVar1 = 0xffffffd1;
  }
  return uVar1;
}

