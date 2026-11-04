// name: FUN_10062307c
// address: 10062307c

void FUN_10062307c(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  size_t sVar7;
  bool bVar8;
  
  pvVar1 = (void *)*param_1;
  lVar3 = param_1[1];
  sVar7 = lVar3 - (long)pvVar1;
  bVar8 = param_2 < (ulong)(((long)sVar7 >> 5) * -0x5555555555555555);
  uVar5 = param_2 + ((long)sVar7 >> 5) * 0x5555555555555555;
  if (bVar8 || uVar5 == 0) {
    if (bVar8) {
      param_1[1] = (void *)((long)pvVar1 + param_2 * 0x60);
    }
  }
  else {
    if ((ulong)((param_1[2] - lVar3 >> 5) * -0x5555555555555555) < uVar5) {
      if (param_2 < 0x2aaaaaaaaaaaaab) {
        lVar3 = param_1[2] - (long)pvVar1 >> 5;
        uVar2 = lVar3 * 0x5555555555555556;
        if (param_2 < uVar2) {
          param_2 = uVar2;
        }
        if (0x155555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
          param_2 = 0x2aaaaaaaaaaaaaa;
        }
        if (param_2 < 0x2aaaaaaaaaaaaab) {
          pvVar4 = operator_new(param_2 * 0x60);
          lVar3 = ((uVar5 * 0x60 - 0x60) / 0x60) * 0x60;
          ___bzero((long)pvVar4 + sVar7,lVar3 + 0x60);
          _memcpy(pvVar4,pvVar1,sVar7);
          *param_1 = pvVar4;
          param_1[1] = (long)pvVar4 + sVar7 + lVar3 + 0x60;
          param_1[2] = (void *)(param_2 * 0x60 + (long)pvVar4);
          if (pvVar1 == (void *)0x0) {
            return;
          }
          operator_delete(pvVar1);
          return;
        }
      }
      else {
        FUN_1006238c8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_1001082d0();
    }
    lVar6 = ((uVar5 * 0x60 - 0x60) / 0x60) * 0x60;
    ___bzero(lVar3,lVar6 + 0x60);
    param_1[1] = lVar3 + lVar6 + 0x60;
  }
  return;
}

