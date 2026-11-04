// name: FUN_1001601fd
// address: 1001601fd

ulong FUN_1001601fd(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_20;
  
  uVar2 = FUN_1001d5bb4(&local_20,0,0,0);
  if ((int)uVar2 == 0) {
    uVar1 = FUN_100160052(param_1,0,0,param_2,local_20);
    uVar2 = 0;
    if (uVar1 != 0) {
      FUN_10016013b(param_1);
      uVar2 = (ulong)uVar1;
    }
  }
  return uVar2;
}

