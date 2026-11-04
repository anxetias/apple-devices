// name: FUN_1000f1500
// address: 1000f1500

void FUN_1000f1500(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  uVar1 = ((uVar2 & 0x1bf8466f) * -2 + uVar2 + 0x1bf8466f ^ 0x2018e8c2) * 0x22116dab ^ *param_1;
                    /* WARNING: Could not recover jumptable at 0x0001000f1586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f77d0 +
                           (long)(int)(uVar1 + (*(int *)((&PTR_DAT_10082ee00)[(int)(uVar1 + 0x11c)]
                                                        + -3) == 0x2c78d434)) * 4) + 0x1000f155b))
            (uVar2,param_2,
             (code *)((long)*(int *)(&DAT_1006f77d0 +
                                    (long)(int)(uVar1 + (*(int *)((&PTR_DAT_10082ee00)
                                                                  [(int)(uVar1 + 0x11c)] + -3) ==
                                                        0x2c78d434)) * 4) + 0x1000f155b),0x3a3402de,
             param_5,param_6,*(undefined8 *)PTR____stack_chk_guard_10082cb58);
  return;
}

