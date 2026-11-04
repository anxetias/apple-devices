// name: FUN_1000da330
// address: 1000da330

undefined8 FUN_1000da330(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = *(int *)(param_2 + 4) + 0xf0f1c3e9U < 0x15;
  switch(bVar4) {
  case false:
    return 0xffff5bde;
  case true:
    *(int *)(*(long *)(param_1 + 0x60) + 0x18) = *(int *)(param_2 + 4);
    iVar1 = *(int *)(param_2 + 4);
    uVar3 = iVar1 * 2 + 0x1e387d2U & 0x10424b82;
                    /* WARNING: Could not recover jumptable at 0x0001000fa00f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)((long)*(int *)(&DAT_1006fef50 +
                                     (long)(int)((uint)(((iVar1 - uVar3) * 2 + 0xf225d354 &
                                                         0xdd6ddefe ^ 0x10404a82) +
                                                        ((iVar1 - uVar3) + 0xf912e9aa ^ 0xe697cabe)
                                                       == -0x11491081) +
                                                (uint)!bVar4 * 0x1419ec9e + (uint)bVar4 * 4 + 6) * 4
                                     ) + 0x1000f9f83))
                      (param_1,param_2,
                       (code *)((long)*(int *)(&DAT_1006fef50 +
                                              (long)(int)((uint)(((iVar1 - uVar3) * 2 + 0xf225d354 &
                                                                  0xdd6ddefe ^ 0x10404a82) +
                                                                 ((iVar1 - uVar3) + 0xf912e9aa ^
                                                                 0xe697cabe) == -0x11491081) +
                                                         (uint)!bVar4 * 0x1419ec9e + (uint)bVar4 * 4
                                                         + 6) * 4) + 0x1000f9f83));
    return uVar2;
  }
}

