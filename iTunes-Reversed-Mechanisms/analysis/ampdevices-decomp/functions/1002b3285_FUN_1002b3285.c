// name: FUN_1002b3285
// address: 1002b3285

undefined8 FUN_1002b3285(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1002acaee(param_2);
  if (lVar3 != 0) {
    if (param_1 == 0) {
LAB_1002b3321:
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "TrackDataIsValid(trackData)";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar4 = 0;
      FUN_1001782e9(0,0);
      goto LAB_1002b335b;
    }
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1002b3321;
    }
    iVar2 = FUN_1002b3465(param_1);
    if (iVar2 == 0) {
      uVar4 = FUN_1002b35c8(*(undefined8 *)(param_1 + 0x2648),lVar3,0);
      goto LAB_1002b335b;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  uVar4 = 0;
LAB_1002b335b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

