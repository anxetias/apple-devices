// name: FUN_1001f7970
// address: 1001f7970

undefined8 FUN_1001f7970(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 < -100) {
    if (2 < param_1 + 0x69U) {
      return 0xffffffce;
    }
  }
  else {
    if (param_1 < -3) {
      if (param_1 == -100) {
        return 0xffffffd9;
      }
      if (param_1 != -4) {
        return 0xffffffce;
      }
      return 0xffffff94;
    }
    if (param_1 != -3) {
      if (param_1 != -1) {
        return 0xffffffce;
      }
      piVar1 = ___error();
      uVar2 = FUN_1001eb020(*piVar1);
      return uVar2;
    }
  }
  return 0xffffffed;
}

