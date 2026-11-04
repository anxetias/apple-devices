// name: FUN_1002dfeda
// address: 1002dfeda

void FUN_1002dfeda(long *param_1,ulong param_2)

{
  long lVar1;
  size_t sVar2;
  void *pvVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar1 = *param_1;
  if ((ulong)(param_1[2] - lVar1 >> 3) < param_2) {
    lVar4 = param_1[1];
    auVar5 = FUN_100249b6c(param_1 + 2);
    lVar4 = (lVar4 - lVar1) + auVar5._0_8_;
    sVar2 = param_1[1] - *param_1;
    pvVar3 = (void *)(lVar4 - sVar2);
    _memcpy(pvVar3,(void *)*param_1,sVar2);
    lVar1 = *param_1;
    *param_1 = (long)pvVar3;
    param_1[1] = lVar4;
    param_1[2] = auVar5._0_8_ + auVar5._8_8_ * 8;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006ce966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_operator_delete_10082e9b8)();
      return;
    }
  }
  return;
}

