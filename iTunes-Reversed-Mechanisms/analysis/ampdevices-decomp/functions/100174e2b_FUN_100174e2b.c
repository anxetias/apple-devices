// name: FUN_100174e2b
// address: 100174e2b

undefined8 FUN_100174e2b(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = _CFBundleCopyBuiltInPlugInsURL();
    return uVar1;
  }
  return 0;
}

