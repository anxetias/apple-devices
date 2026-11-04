// name: FUN_1001ab200
// address: 1001ab200

undefined8 FUN_1001ab200(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = _CFTimeZoneGetSecondsFromGMT();
    return uVar1;
  }
  return 0;
}

