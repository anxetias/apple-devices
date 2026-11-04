// name: FUN_1000c8c80
// address: 1000c8c80

undefined8 FUN_1000c8c80(long param_1,long param_2)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_2 + 4) == 0xf0e3c18;
  switch(bVar3) {
  case false:
    return 0xffff5bde;
  case true:
    bVar2 = **(char **)(param_2 + 8) != '\0';
    *(byte *)(param_1 + 0x58) = bVar2 * '\x02' + (bVar2 ^ 0x3fU) + -0xc;
                    /* WARNING: Could not emulate address calculation at 0x0001000c0058 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((long)*(int *)(&DAT_1006edf98 +
                                     (long)(int)(((uint)!bVar3 * -0x63b96bfa - (uint)bVar3) + 1) * 4
                                     ) + 0x1000c002e))();
    return uVar1;
  }
}

