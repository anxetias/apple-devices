// name: FUN_100133e1a
// address: 100133e1a

void FUN_100133e1a(long *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  size_t sVar3;
  void *pvVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = *param_1;
  if ((ulong)(param_1[2] - lVar5 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012c430(param_1);
    }
    lVar1 = param_1[1];
    auVar6 = FUN_100249b6c(param_1 + 2);
    lVar5 = (lVar1 - lVar5) + auVar6._0_8_;
    sVar3 = param_1[1] - *param_1;
    pvVar4 = (void *)(lVar5 - sVar3);
    _memcpy(pvVar4,(void *)*param_1,sVar3);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)pvVar4;
    param_1[1] = lVar5;
    param_1[2] = auVar6._0_8_ + auVar6._8_8_ * 8;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}

