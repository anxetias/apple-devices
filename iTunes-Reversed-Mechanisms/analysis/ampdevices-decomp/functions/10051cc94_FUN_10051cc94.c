// name: FUN_10051cc94
// address: 10051cc94

void FUN_10051cc94(long *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  
  lVar7 = *param_1;
  lVar1 = param_1[1];
  lVar3 = lVar1 - lVar7 >> 2;
  bVar9 = param_2 < (ulong)(lVar3 * -0x5555555555555555);
  uVar6 = param_2 + lVar3 * 0x5555555555555555;
  if (bVar9 || uVar6 == 0) {
    if (!bVar9) {
      return;
    }
    lVar7 = lVar7 + param_2 * 0xc;
  }
  else {
    if ((ulong)((param_1[2] - lVar1 >> 2) * -0x5555555555555555) < uVar6) {
      if (0x1555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_10022c3f6(param_1);
      }
      lVar3 = param_1[2] - lVar7 >> 2;
      uVar4 = lVar3 * 0x5555555555555556;
      if (param_2 < uVar4) {
        param_2 = uVar4;
      }
      uVar4 = 0x1555555555555555;
      if ((ulong)(lVar3 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
        uVar4 = param_2;
      }
      auVar10 = FUN_10022bc38(param_1 + 2,uVar4);
      lVar7 = (lVar1 - lVar7) + auVar10._0_8_;
      uVar6 = (uVar6 * 0xc - 0xc) / 0xc;
      ___bzero(lVar7,uVar6 * 0xc + 0xc);
      sVar5 = param_1[1] - *param_1;
      pvVar8 = (void *)(lVar7 - sVar5);
      _memcpy(pvVar8,(void *)*param_1,sVar5);
      pvVar2 = (void *)*param_1;
      *param_1 = (long)pvVar8;
      param_1[1] = lVar7 + uVar6 * 0xc + 0xc;
      param_1[2] = auVar10._0_8_ + auVar10._8_8_ * 0xc;
      if (pvVar2 == (void *)0x0) {
        return;
      }
      operator_delete(pvVar2);
      return;
    }
    uVar6 = (uVar6 * 0xc - 0xc) / 0xc;
    ___bzero(lVar1,uVar6 * 0xc + 0xc);
    lVar7 = lVar1 + uVar6 * 0xc + 0xc;
  }
  param_1[1] = lVar7;
  return;
}

