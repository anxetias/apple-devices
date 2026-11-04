// name: FUN_100369225
// address: 100369225

undefined8 FUN_100369225(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5c = 0;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "skip_time != nullptr";
LAB_1003693ec:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_100369397:
    FUN_1001782e9(0,0);
  }
  else {
    *param_3 = 0;
    if (param_4 == (undefined4 *)0x0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = "skip_count != nullptr";
        goto LAB_1003693ec;
      }
      goto LAB_100369397;
    }
    *param_4 = 0;
    if (param_1 == 0) {
LAB_10036937e:
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = "TrackDataIsValid(trackData)";
        goto LAB_1003693ec;
      }
      goto LAB_100369397;
    }
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10036937e;
    }
    lVar3 = FUN_1003075bc(param_1,param_2);
    if (lVar3 != 0) {
      *param_4 = *(undefined4 *)(lVar3 + 0x150);
      FUN_100177e94(*(undefined4 *)(lVar3 + 0x158),&local_5c);
      *param_3 = local_5c;
      uVar2 = 0;
      goto LAB_1003693a5;
    }
  }
  uVar2 = 0xea63;
LAB_1003693a5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

