// name: FUN_1001edf94
// address: 1001edf94

undefined8 FUN_1001edf94(pthread_t param_1)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  iVar1 = _pthread_equal(param_1,DAT_1008c5418);
  if (iVar1 != 0) {
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
  }
  uVar2 = FUN_1001b25c9(param_1);
  return uVar2;
}

