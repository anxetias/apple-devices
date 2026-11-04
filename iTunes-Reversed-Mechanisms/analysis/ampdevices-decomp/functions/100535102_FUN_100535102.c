// name: FUN_100535102
// address: 100535102

undefined8 FUN_100535102(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  long local_4c0;
  long local_4b8;
  undefined8 local_4b0;
  long local_4a8 [4];
  long *local_488;
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4c0 = param_1;
  local_4b8 = param_2;
  local_4b0 = param_3;
  if (param_1 == 0) {
LAB_100535224:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid( trackData )";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_100535224;
    }
    cVar2 = FUN_10017cbd0(param_3);
    if (cVar2 != '\0') {
      bVar5 = true;
      if (param_2 == 0) {
        uVar1 = *(undefined1 *)(param_1 + 0x1b50);
        local_488 = operator_new(0x28);
        *local_488 = (long)&PTR_FUN_100869590;
        local_488[1] = (long)&local_4c0;
        local_488[2] = (long)local_478;
        local_488[3] = (long)&local_4b0;
        local_488[4] = (long)&local_4b8;
        FUN_100308bbf(param_1,uVar1,local_4a8);
        if (local_488 == local_4a8) {
          lVar4 = 0x20;
LAB_10053527e:
          (**(code **)(*local_488 + lVar4))();
        }
        else {
          lVar4 = 0x28;
          if (local_488 != (long *)0x0) goto LAB_10053527e;
        }
        bVar5 = local_4b8 != 0;
        param_3 = local_4b0;
        param_2 = local_4b8;
      }
      uVar3 = FUN_100534e54(param_2,param_3,param_4,bVar5);
      goto LAB_1005352a9;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "JRFileSpecIsValid( objectSpec )";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar3 = 0xffffffce;
LAB_1005352a9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

