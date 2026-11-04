// name: FUN_1001ecff1
// address: 1001ecff1

undefined8 FUN_1001ecff1(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c4945(uVar2);
    }
  }
  else {
    if (*(int *)(param_2 + 0xf) == 0) {
      *(undefined4 *)(param_2 + 0xf) = 1;
      param_2[8] = 0;
      param_2[9] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[8] = FUN_1001ed0ad;
      param_2[9] = param_2;
      uVar2 = FUN_1001ebfee(*(undefined8 *)(param_1 + 8),param_2);
      if ((int)uVar2 != 0) {
        *(undefined4 *)(param_2 + 0xf) = 0;
        return uVar2;
      }
      return 0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c48cf(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

