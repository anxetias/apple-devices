// name: FUN_100061a70
// address: 100061a70

void FUN_100061a70(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1;
  uVar2 = *(int *)(*param_1 + 4) + 0xbe6d8fbd;
  uVar1 = -uVar2;
  if ((int)uVar1 < 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 * 2 & 0x73fbf7ea;
                    /* WARNING: Could not recover jumptable at 0x000100061afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006e4fc0 +
                           (long)(int)((int)param_1[1] +
                                      ((uVar3 & 0x7fbc0e34) * -2 + uVar3 + 0x7fbc0e34 ^ 0xa6eb4150)
                                      * -0x34a356b1) * 4) + 0x100061ac9))
            (uVar3,(code *)((long)*(int *)(&DAT_1006e4fc0 +
                                          (long)(int)((int)param_1[1] +
                                                     ((uVar3 & 0x7fbc0e34) * -2 + uVar3 + 0x7fbc0e34
                                                     ^ 0xa6eb4150) * -0x34a356b1) * 4) + 0x100061ac9
                           ),uVar2,(uVar1 ^ 0xb9fdfbf5) + uVar2 + 0x4fc2df40,&DAT_1006e4fc0,
             &LAB_1000821f0);
  return;
}

