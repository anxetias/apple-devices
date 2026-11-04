// name: FUN_10015fdc6
// address: 10015fdc6

uint FUN_10015fdc6(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = FUN_10015fc81(param_1,8);
    uVar2 = uVar1 & 0x7f | uVar2 << 7;
  } while ((char)uVar1 < '\0');
  return uVar2;
}

