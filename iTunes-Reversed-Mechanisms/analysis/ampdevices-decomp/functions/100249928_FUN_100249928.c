// name: FUN_100249928
// address: 100249928

void FUN_100249928(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  void *pvVar2;
  size_t sVar3;
  undefined1 auVar4 [16];
  
  if (param_4 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_4) {
      FUN_1002498e0();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    auVar4 = FUN_1002498f0(param_4);
    pvVar2 = auVar4._0_8_;
    *param_1 = pvVar2;
    param_1[1] = pvVar2;
    param_1[2] = (void *)((long)pvVar2 + auVar4._8_8_ * 0x18);
    sVar3 = param_3 - (long)param_2;
    if (sVar3 != 0) {
      _memmove(pvVar2,param_2,sVar3);
    }
    param_1[1] = sVar3 + (long)pvVar2;
  }
  return;
}

