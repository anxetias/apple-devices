// name: FUN_100149e6c
// address: 100149e6c

void FUN_100149e6c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long *local_28;
  
  lVar1 = *param_1;
  if ((ulong)(param_1[2] - lVar1 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012c430(param_1);
    }
    local_28 = param_1 + 2;
    lVar2 = param_1[1];
    auVar3 = FUN_100149f7a();
    local_48 = auVar3._0_8_;
    local_40 = (lVar2 - lVar1) + local_48;
    local_30 = auVar3._8_8_ * 0x10 + local_48;
    local_38 = local_40;
    FUN_100149f04(param_1,&local_48);
    FUN_10014a0dc(&local_48);
  }
  return;
}

