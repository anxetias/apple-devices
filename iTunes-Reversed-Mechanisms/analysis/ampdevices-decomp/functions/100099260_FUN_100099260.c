// name: FUN_100099260
// address: 100099260

void FUN_100099260(int *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  uVar2 = (uVar5 & 0x59c0addc) * -2 + uVar5 + 0x59c0addc ^ 0x89ac9cc7;
  uVar4 = param_1[1] ^ uVar2 * 0x29e509e3;
  lVar1 = *(long *)(param_1 + 2);
  uVar3 = *param_1 + uVar2 * -0x29e509e3;
  uVar2 = uVar3 & 0x1ff ^ 0xa6;
  uVar2 = (uVar2 - (uVar2 * 2 & 0x134)) + 0xc2c1609a ^ 0x53e3149f;
  *(uint *)(lVar1 + 0x60) = (uVar2 - (uVar2 * 2 & 0x9a38)) + 0xc2c8cd1c ^ 0x6b198354;
  *(undefined8 *)(lVar1 + 0x40) = 0x1e4d2cb63ff31745;
  *(undefined4 *)(lVar1 + 0x5c) = 0x7c2cdfc2;
                    /* WARNING: Could not recover jumptable at 0x000100099301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006eeb20 + (long)(int)uVar4 * 4) + 0x1000992e6))
            (uVar5,uVar4 + 4,uVar3 ^ 0xee,
             (code *)((long)*(int *)(&DAT_1006eeb20 + (long)(int)uVar4 * 4) + 0x1000992e6));
  return;
}

