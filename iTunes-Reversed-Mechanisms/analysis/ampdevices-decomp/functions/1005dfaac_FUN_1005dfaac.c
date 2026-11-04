// name: FUN_1005dfaac
// address: 1005dfaac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005dfaac(undefined1 (*param_1) [16],uint param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_3 = 0xffffffff;
  if (0x13 < param_2) {
    uVar2 = *(uint *)param_1[1];
    if (*param_1 == _DAT_10075bec0) {
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      *param_3 = uVar2;
      uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
      goto LAB_1005dfaed;
    }
  }
  uVar3 = 0;
LAB_1005dfaed:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == lVar1) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

