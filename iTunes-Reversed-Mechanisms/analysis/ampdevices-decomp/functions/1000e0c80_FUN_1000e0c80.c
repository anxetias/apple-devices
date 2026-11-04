// name: FUN_1000e0c80
// address: 1000e0c80

void FUN_1000e0c80(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  uVar1 = ((uVar5 & 0x140393f1) * -2 + uVar5 + 0x940393f1 ^ 0xd8d48f4f) * 0xca815c1;
  uVar2 = uVar1 + (int)param_1[1];
  uVar4 = -uVar2;
  if ((int)uVar4 < 0) {
    uVar4 = uVar2;
  }
  uVar3 = *(int *)(*param_1 + 4) + 0xbe6d8fbd;
  uVar2 = -uVar3;
  if ((int)uVar2 < 0) {
    uVar2 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000e0cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006ffc20 +
                           (long)(int)((*(uint *)((long)param_1 + 0xc) ^ uVar1) +
                                      (uint)(uVar4 >> 5 < uVar2)) * 4) + 0x1000e0ccc))
            (uVar5,(code *)((long)*(int *)(&DAT_1006ffc20 +
                                          (long)(int)((*(uint *)((long)param_1 + 0xc) ^ uVar1) +
                                                     (uint)(uVar4 >> 5 < uVar2)) * 4) + 0x1000e0ccc)
             ,0x1ae27cc4);
  return;
}

