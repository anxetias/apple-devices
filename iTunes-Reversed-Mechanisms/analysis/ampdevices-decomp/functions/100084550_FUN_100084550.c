// name: FUN_100084550
// address: 100084550

undefined8 FUN_100084550(int *param_1,long param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = *param_1 + *(int *)(param_2 + 4) + 0xbcef5c40U < 0xc9;
  switch(bVar2) {
  case false:
    return 0xffff5bde;
  case true:
                    /* WARNING: Could not recover jumptable at 0x00010009502b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((long)*(int *)(&DAT_1006e65f0 +
                                     (long)(int)((uint)!bVar2 * 0x53222c72 + (uint)bVar2 * -5 + 5 +
                                                (uint)(*(int *)(param_2 + 4) == 0xf0e3c17)) * 4) +
                      0x100094fe2))();
    return uVar1;
  }
}

