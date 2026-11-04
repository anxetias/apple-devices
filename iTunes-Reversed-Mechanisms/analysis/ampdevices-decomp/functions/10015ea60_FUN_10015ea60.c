// name: FUN_10015ea60
// address: 10015ea60

undefined4 FUN_10015ea60(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61756463)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066dc49(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffe4;
  }
  else {
    if (*(long *)(param_1 + 0x16) == 0) {
      uVar2 = 0;
    }
    else {
      _AudioConverterReset();
      uVar2 = _AudioConverterDispose(*(undefined8 *)(param_1 + 0x16));
      param_1[0x16] = 0;
      param_1[0x17] = 0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1001c64c1();
    }
    FUN_1001c64c1(param_1);
  }
  return uVar2;
}

