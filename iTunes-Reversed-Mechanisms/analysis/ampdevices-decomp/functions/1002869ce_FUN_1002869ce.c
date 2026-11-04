// name: FUN_1002869ce
// address: 1002869ce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002869ce(long param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double local_2d8 [42];
  double local_188 [42];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = *(undefined4 *)(param_1 + 0x50c);
  FUN_100286b82(param_1 + 0x3c8,uVar2,local_188);
  uVar3 = *(undefined4 *)(param_1 + 0x508);
  FUN_100286b82(param_1 + 0x288,uVar3);
  uVar9 = 0;
  FUN_100286c62(DAT_100700458,0,local_188,uVar2,local_2d8,uVar3,param_1 + 0x528);
  uVar8 = ___sincos_stret((*(double *)(param_1 + 0x518) + *(double *)(param_1 + 0x520)) *
                          DAT_100700b18);
  FUN_100286c62(uVar9,uVar8,local_188,*(undefined4 *)(param_1 + 0x50c),local_2d8,
                *(undefined4 *)(param_1 + 0x508),param_1 + 0x538);
  FUN_100286c62(DAT_100700af8,0,local_188,*(undefined4 *)(param_1 + 0x50c),local_2d8,
                *(undefined4 *)(param_1 + 0x508),param_1 + 0x548);
  uVar4 = *(uint *)(param_1 + 0x50c);
  uVar5 = *(uint *)(param_1 + 0x508);
  if (-1 < (int)uVar4) {
    dVar1 = local_2d8[(long)(int)uVar5 * 2];
    lVar7 = 0;
    do {
      *(double *)(param_1 + 0x570 + lVar7) = *(double *)((long)local_188 + lVar7 * 2) / dVar1;
      lVar7 = lVar7 + 8;
    } while ((ulong)uVar4 * 8 + 8 != lVar7);
  }
  uVar6 = _DAT_100700b30;
  if (-1 < (int)uVar5) {
    dVar1 = local_2d8[(long)(int)uVar5 * 2];
    lVar7 = 0;
    do {
      *(double *)(param_1 + 0x618 + lVar7) =
           (double)(*(ulong *)((long)local_2d8 + lVar7 * 2) ^ uVar6) / dVar1;
      lVar7 = lVar7 + 8;
    } while ((ulong)uVar5 * 8 + 8 != lVar7);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

