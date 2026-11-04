// name: FUN_100368fec
// address: 100368fec

undefined8 FUN_100368fec(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

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
  if (param_1 == 0) {
LAB_1003690ba:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "TrackDataIsValid(trackData)";
LAB_100369180:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1003691a5:
    FUN_1001782e9(0,0);
  }
  else {
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
      if (cVar1 == '\0') goto LAB_1003690ba;
    }
    if (param_3 == (undefined4 *)0x0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = "play_time != nullptr";
        goto LAB_100369180;
      }
      goto LAB_1003691a5;
    }
    *param_3 = 0;
    if (param_4 == (undefined4 *)0x0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = "play_count != nullptr";
        goto LAB_100369180;
      }
      goto LAB_1003691a5;
    }
    *param_4 = 0;
    lVar3 = FUN_1003075bc(param_1,param_2);
    if (lVar3 != 0) {
      *param_4 = *(undefined4 *)(lVar3 + 0x144);
      FUN_100177e94(*(undefined4 *)(lVar3 + 0x14c),&local_5c);
      *param_3 = local_5c;
      uVar2 = 0;
      goto LAB_1003691b3;
    }
  }
  uVar2 = 0xea63;
LAB_1003691b3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

