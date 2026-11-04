// name: FUN_1005732f2
// address: 1005732f2

/* WARNING: Removing unreachable block (ram,0x00010057337a) */
/* WARNING: Removing unreachable block (ram,0x0001005733a1) */
/* WARNING: Removing unreachable block (ram,0x00010057350f) */
/* WARNING: Removing unreachable block (ram,0x000100573528) */
/* WARNING: Removing unreachable block (ram,0x0001005733b1) */
/* WARNING: Removing unreachable block (ram,0x0001005733bb) */
/* WARNING: Removing unreachable block (ram,0x0001005734cc) */
/* WARNING: Removing unreachable block (ram,0x0001005734e9) */
/* WARNING: Removing unreachable block (ram,0x0001005733c9) */
/* WARNING: Removing unreachable block (ram,0x0001005733f9) */
/* WARNING: Removing unreachable block (ram,0x0001005733d3) */
/* WARNING: Removing unreachable block (ram,0x0001005733da) */
/* WARNING: Removing unreachable block (ram,0x0001005733f3) */
/* WARNING: Removing unreachable block (ram,0x0001005733ff) */
/* WARNING: Removing unreachable block (ram,0x000100573402) */
/* WARNING: Removing unreachable block (ram,0x000100573416) */
/* WARNING: Removing unreachable block (ram,0x000100573409) */
/* WARNING: Removing unreachable block (ram,0x000100573410) */
/* WARNING: Removing unreachable block (ram,0x00010057341a) */
/* WARNING: Removing unreachable block (ram,0x000100573426) */
/* WARNING: Removing unreachable block (ram,0x000100573431) */
/* WARNING: Removing unreachable block (ram,0x000100573435) */
/* WARNING: Removing unreachable block (ram,0x000100573441) */
/* WARNING: Removing unreachable block (ram,0x00010057359f) */
/* WARNING: Removing unreachable block (ram,0x00010057345a) */
/* WARNING: Removing unreachable block (ram,0x0001005735a2) */
/* WARNING: Removing unreachable block (ram,0x0001005735ab) */
/* WARNING: Removing unreachable block (ram,0x0001005735ca) */
/* WARNING: Removing unreachable block (ram,0x0001005735d3) */
/* WARNING: Removing unreachable block (ram,0x0001005735d8) */

undefined8 FUN_1005732f2(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = (**(code **)(*param_1 + 0xe0))();
  if ((cVar1 != '\0') && (iRam0000000000000004 == 0x38303670)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "inDescSize >= (offsetToExtensions + sizeof(AtomHeader))";
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

