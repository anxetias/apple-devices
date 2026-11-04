// name: FUN_10012c2b6
// address: 10012c2b6

long FUN_10012c2b6(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long *local_38;
  
  lVar4 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar4 + 1;
  if (uVar1 >> 0x3a == 0) {
    local_38 = param_1 + 2;
    uVar2 = *local_38 - *param_1;
    uVar3 = (long)uVar2 >> 5;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar2) {
      uVar3 = 0x3ffffffffffffff;
    }
    if (uVar3 == 0) {
      auVar6 = ZEXT816(0);
    }
    else {
      auVar6 = FUN_100283ef2();
    }
    lVar5 = auVar6._0_8_;
    lVar4 = lVar4 * 0x40;
    local_50 = lVar5 + lVar4;
    local_40 = auVar6._8_8_ * 0x40 + lVar5;
    local_58 = lVar5;
    FUN_10012d05c(local_50,param_2);
    lVar5 = lVar5 + lVar4;
    local_48 = lVar5 + 0x40;
    *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    FUN_10012c3ba(param_1,&local_58);
    lVar4 = param_1[1];
    FUN_10012c54e(&local_58);
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012c430(param_1);
}

