// name: FUN_100249a6c
// address: 100249a6c

void FUN_100249a6c(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  void *pvVar2;
  size_t sVar3;
  undefined1 auVar4 [16];
  
  if (param_4 != 0) {
    if (0x2aaaaaaaaaaaaaaa < param_4) {
      FUN_100249a28();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    auVar4 = FUN_100249a38(param_4);
    pvVar2 = auVar4._0_8_;
    *param_1 = pvVar2;
    param_1[1] = pvVar2;
    param_1[2] = (void *)((long)pvVar2 + auVar4._8_8_ * 6);
    sVar3 = param_3 - (long)param_2;
    if (sVar3 != 0) {
      _memmove(pvVar2,param_2,sVar3);
    }
    param_1[1] = sVar3 + (long)pvVar2;
  }
  return;
}

