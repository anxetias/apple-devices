// name: FUN_100183f98
// address: 100183f98

void FUN_100183f98(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_668;
  undefined8 local_660;
  
  lVar1 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100186527();
  if (cVar2 != '\0') {
    *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + 1;
    uVar4 = (ulong)*(uint *)(*(long *)(param_1 + 0x2b8) + 0x478);
    lVar3 = ((uVar4 + local_668) - 1) / uVar4 + *(long *)(param_1 + 0x288);
    *(long *)(param_1 + 0x288) = lVar3;
    if (*(char *)(param_1 + 7) == '\0') {
      local_668 = local_668 + local_660;
      *(ulong *)(param_1 + 0x288) = ((uVar4 - 1) + local_660) / uVar4 + lVar3;
    }
    *(long *)(param_1 + 0x298) = *(long *)(param_1 + 0x298) + local_668;
    *(long *)(param_1 + 0x2e0) = *(long *)(param_1 + 0x2e0) + local_668;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

