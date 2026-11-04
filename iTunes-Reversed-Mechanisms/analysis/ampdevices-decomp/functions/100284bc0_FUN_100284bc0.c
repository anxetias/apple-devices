// name: FUN_100284bc0
// address: 100284bc0

long FUN_100284bc0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  lVar10 = param_1[1] - *param_1 >> 4;
  uVar7 = lVar10 * -0x5555555555555555 + 1;
  if (uVar7 < 0x555555555555556) {
    plVar1 = param_1 + 2;
    lVar9 = *plVar1 - *param_1 >> 4;
    uVar8 = lVar9 * 0x5555555555555556;
    if (uVar7 < uVar8) {
      uVar7 = uVar8;
    }
    uVar8 = 0x555555555555555;
    if ((ulong)(lVar9 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
      uVar8 = uVar7;
    }
    if (uVar8 == 0) {
      auVar11 = ZEXT816(0);
    }
    else {
      auVar11 = FUN_100284d30(plVar1);
    }
    lVar9 = lVar10 * 0x10 + auVar11._0_8_;
    FUN_1001a8c1c(lVar9,param_2);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(lVar9 + 0x10) = uVar6;
    lVar10 = *(long *)(param_2 + 0x20);
    uVar3 = *(undefined4 *)(param_2 + 0x1c);
    uVar4 = *(undefined4 *)(param_2 + 0x20);
    uVar5 = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(lVar9 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(lVar9 + 0x1c) = uVar3;
    *(undefined4 *)(lVar9 + 0x20) = uVar4;
    *(undefined4 *)(lVar9 + 0x24) = uVar5;
    if (lVar10 != 0) {
      LOCK();
      plVar2 = (long *)(lVar10 + 8);
      *plVar2 = *plVar2 + 1;
      UNLOCK();
    }
    *(undefined1 *)(lVar9 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
    *(undefined4 *)(lVar9 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    lVar10 = (*param_1 - param_1[1]) + lVar9;
    FUN_100284d67(plVar1,*param_1,param_1[1],lVar10);
    *param_1 = lVar10;
    param_1[1] = lVar9 + 0x30;
    param_1[2] = auVar11._8_8_ * 0x30 + auVar11._0_8_;
    FUN_100284ea4();
    return lVar9 + 0x30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100283ee2(param_1);
}

