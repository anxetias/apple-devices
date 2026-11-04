// name: FUN_10032592e
// address: 10032592e

/* WARNING: Removing unreachable block (ram,0x0001003259bc) */
/* WARNING: Removing unreachable block (ram,0x0001003259d5) */
/* WARNING: Removing unreachable block (ram,0x0001003259ca) */
/* WARNING: Removing unreachable block (ram,0x0001003259dd) */
/* WARNING: Removing unreachable block (ram,0x0001003259ea) */
/* WARNING: Removing unreachable block (ram,0x000100325a0c) */
/* WARNING: Removing unreachable block (ram,0x000100325a0e) */
/* WARNING: Removing unreachable block (ram,0x000100325a55) */
/* WARNING: Removing unreachable block (ram,0x000100325a58) */
/* WARNING: Removing unreachable block (ram,0x000100325aa2) */
/* WARNING: Removing unreachable block (ram,0x000100325ac8) */
/* WARNING: Removing unreachable block (ram,0x000100325ace) */
/* WARNING: Removing unreachable block (ram,0x000100325a97) */
/* WARNING: Removing unreachable block (ram,0x000100325aa0) */
/* WARNING: Removing unreachable block (ram,0x000100325ae1) */
/* WARNING: Removing unreachable block (ram,0x000100325af5) */

void FUN_10032592e(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1002eb77e(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  FUN_100324b14();
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

