// name: FUN_1002ecc60
// address: 1002ecc60

/* WARNING: Removing unreachable block (ram,0x0001002ecd0f) */
/* WARNING: Removing unreachable block (ram,0x0001002ecd40) */
/* WARNING: Removing unreachable block (ram,0x0001002ecd4b) */
/* WARNING: Removing unreachable block (ram,0x0001002ecd89) */
/* WARNING: Removing unreachable block (ram,0x0001002ecddc) */
/* WARNING: Removing unreachable block (ram,0x0001002ed232) */
/* WARNING: Removing unreachable block (ram,0x0001002ecdf6) */
/* WARNING: Removing unreachable block (ram,0x0001002ece56) */
/* WARNING: Removing unreachable block (ram,0x0001002ed25e) */
/* WARNING: Removing unreachable block (ram,0x0001002ece70) */
/* WARNING: Removing unreachable block (ram,0x0001002ece19) */
/* WARNING: Removing unreachable block (ram,0x0001002ed253) */
/* WARNING: Removing unreachable block (ram,0x0001002ece33) */
/* WARNING: Removing unreachable block (ram,0x0001002eceb2) */
/* WARNING: Removing unreachable block (ram,0x0001002ed23d) */
/* WARNING: Removing unreachable block (ram,0x0001002ececf) */
/* WARNING: Removing unreachable block (ram,0x0001002ecf0d) */
/* WARNING: Removing unreachable block (ram,0x0001002ed045) */
/* WARNING: Removing unreachable block (ram,0x0001002ecf33) */
/* WARNING: Removing unreachable block (ram,0x0001002ecef2) */
/* WARNING: Removing unreachable block (ram,0x0001002ecf40) */
/* WARNING: Removing unreachable block (ram,0x0001002ecd99) */
/* WARNING: Removing unreachable block (ram,0x0001002ed248) */
/* WARNING: Removing unreachable block (ram,0x0001002ed267) */
/* WARNING: Removing unreachable block (ram,0x0001002ed2a6) */
/* WARNING: Removing unreachable block (ram,0x0001002ed27b) */
/* WARNING: Removing unreachable block (ram,0x0001002ecdb3) */
/* WARNING: Removing unreachable block (ram,0x0001002ece91) */
/* WARNING: Removing unreachable block (ram,0x0001002ecf54) */
/* WARNING: Removing unreachable block (ram,0x0001002ecf71) */
/* WARNING: Removing unreachable block (ram,0x0001002ed2f6) */
/* WARNING: Removing unreachable block (ram,0x0001002ecf99) */
/* WARNING: Removing unreachable block (ram,0x0001002ecfa6) */
/* WARNING: Removing unreachable block (ram,0x0001002ecfaa) */
/* WARNING: Removing unreachable block (ram,0x0001002ecfb7) */
/* WARNING: Removing unreachable block (ram,0x0001002ecfbb) */
/* WARNING: Removing unreachable block (ram,0x0001002ecfe2) */
/* WARNING: Removing unreachable block (ram,0x0001002ecfc7) */
/* WARNING: Removing unreachable block (ram,0x0001002ed301) */
/* WARNING: Removing unreachable block (ram,0x0001002ecfd0) */
/* WARNING: Removing unreachable block (ram,0x0001002ecfe5) */
/* WARNING: Removing unreachable block (ram,0x0001002ed022) */
/* WARNING: Removing unreachable block (ram,0x0001002ecf61) */
/* WARNING: Removing unreachable block (ram,0x0001002ed02a) */
/* WARNING: Removing unreachable block (ram,0x0001002ece9c) */
/* WARNING: Removing unreachable block (ram,0x0001002ed035) */
/* WARNING: Removing unreachable block (ram,0x0001002ed040) */
/* WARNING: Removing unreachable block (ram,0x0001002ed0db) */
/* WARNING: Removing unreachable block (ram,0x0001002ed10d) */
/* WARNING: Removing unreachable block (ram,0x0001002ed151) */
/* WARNING: Removing unreachable block (ram,0x0001002ed193) */
/* WARNING: Removing unreachable block (ram,0x0001002ed1c1) */
/* WARNING: Removing unreachable block (ram,0x0001002ed1cd) */
/* WARNING: Recovered jumptable eliminated as dead code */

long * FUN_1002ecc60(undefined8 *param_1,long param_2,undefined1 param_3)

{
  char cVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar2 = operator_new(0x70,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar2 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "context != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[10] = 0;
    *plVar2 = (long)param_1;
    plVar2[1] = param_2;
    *(undefined1 *)(plVar2 + 2) = param_3;
    *(undefined1 *)(plVar2 + 0xc) = 0;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    pvVar3 = (void *)(*(code *)*param_1)(param_2);
    if (*(code **)(*plVar2 + 0x20) == (code *)0x0) {
      _free(pvVar3);
    }
    else {
      (**(code **)(*plVar2 + 0x20))(pvVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return plVar2;
}

