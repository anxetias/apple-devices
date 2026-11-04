// name: FUN_10015fff1
// address: 10015fff1

ulong FUN_10015fff1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 in_RAX;
  ulong uVar2;
  undefined8 local_28;
  
  local_28 = in_RAX;
  uVar2 = FUN_1001d58b4(&local_28,param_1,3,0);
  if ((int)uVar2 == 0) {
    uVar1 = FUN_100160052(param_2,param_1,0,param_3,local_28);
    uVar2 = 0;
    if (uVar1 != 0) {
      FUN_10016013b(param_2);
      uVar2 = (ulong)uVar1;
    }
  }
  return uVar2;
}

