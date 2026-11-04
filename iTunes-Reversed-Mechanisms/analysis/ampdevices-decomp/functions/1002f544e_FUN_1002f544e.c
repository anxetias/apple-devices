// name: FUN_1002f544e
// address: 1002f544e

undefined1 FUN_1002f544e(long param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = FUN_1002f506e();
  if ((cVar1 != '\0') && (*(code **)(param_1 + 0x68) != (code *)0x0)) {
    cVar1 = (**(code **)(param_1 + 0x68))(param_2);
    if (cVar1 != '\0') {
      return 1;
    }
    if (param_2 < 0x1300000) {
      if (0x12fffff < *(uint *)(param_1 + 0xc0)) {
        return 1;
      }
    }
    else if ((param_2 < 0x1400000) && (0x13fffff < *(uint *)(param_1 + 0xc0))) {
      return 1;
    }
  }
  return 0;
}

