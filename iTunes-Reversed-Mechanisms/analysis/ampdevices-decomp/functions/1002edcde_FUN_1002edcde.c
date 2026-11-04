// name: FUN_1002edcde
// address: 1002edcde

/* WARNING: Removing unreachable block (ram,0x0001002edd40) */
/* WARNING: Removing unreachable block (ram,0x0001002eddef) */
/* WARNING: Removing unreachable block (ram,0x0001002ede56) */
/* WARNING: Removing unreachable block (ram,0x0001002ede08) */
/* WARNING: Removing unreachable block (ram,0x0001002edd76) */
/* WARNING: Removing unreachable block (ram,0x0001002edda0) */
/* WARNING: Removing unreachable block (ram,0x0001002edea4) */
/* WARNING: Removing unreachable block (ram,0x0001002eddbd) */
/* WARNING: Removing unreachable block (ram,0x0001002eddc6) */
/* WARNING: Removing unreachable block (ram,0x0001002ede15) */
/* WARNING: Removing unreachable block (ram,0x0001002ede28) */
/* WARNING: Removing unreachable block (ram,0x0001002ede21) */

undefined8 FUN_1002edcde(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)PTR____stack_chk_guard_10082cb58;
  (**(code **)(*param_1 + 8))(param_1[1]);
  param_1[5] = param_1[5] + 1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

