// name: FUN_1001acd4a
// address: 1001acd4a

undefined8 FUN_1001acd4a(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = _CFURLResponseGetExpectedContentLength();
    return uVar1;
  }
  return 0;
}

