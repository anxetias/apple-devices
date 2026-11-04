// name: FUN_1004b5643
// address: 1004b5643

undefined8 FUN_1004b5643(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  if (*(char *)(param_1 + 9) == '\0') {
    uVar2 = 0;
    if (((*(char *)(param_1 + 0x110) == '\0') || (uVar2 = 0, *(long *)(param_1 + 0x108) == 0)) ||
       (*(char *)(param_1 + 0x111) != '\0')) goto LAB_1004b56ea;
  }
  uVar2 = 0;
  if (*(char *)(param_1 + 8) != '\0') goto LAB_1004b56ea;
  if (((*(char *)(param_1 + 0x110) == '\0') || (*(long *)(param_1 + 0x108) == 0)) ||
     (*(char *)(param_1 + 0x111) != '\0')) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = 
      "( (inHashInfo)->isComputingSegmentHashes && ((inHashInfo)->segmentsInfo != __null) && ((inHashInfo)->disableSegmentHashesOverride == false) )"
      ;
LAB_1004b57bc:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    lVar3 = FUN_1004b4e86(*(long *)(param_1 + 0x108),param_2,&local_50);
    if (lVar3 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "segment != __null";
        goto LAB_1004b57bc;
      }
    }
    else {
      if (local_50 == param_2) {
        FUN_1004afcf8(param_1 + 0x118);
        FUN_1004b4f62(param_1 + 0x118,local_50,*(undefined4 *)(*(long *)(param_1 + 0x108) + 8),lVar3
                     );
        goto LAB_1004b56ea;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "inCurrentOffset == segmentOffset";
        goto LAB_1004b57bc;
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_1004b56ea:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

