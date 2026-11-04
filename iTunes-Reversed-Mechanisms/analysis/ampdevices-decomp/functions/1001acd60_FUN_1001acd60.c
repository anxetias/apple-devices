// name: FUN_1001acd60
// address: 1001acd60

undefined8 FUN_1001acd60(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = _CFURLResponseGetExpirationTime();
    return uVar1;
  }
  return 0;
}

