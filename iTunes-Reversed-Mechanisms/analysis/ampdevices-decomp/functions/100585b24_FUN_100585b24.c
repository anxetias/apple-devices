// name: FUN_100585b24
// address: 100585b24

undefined1 FUN_100585b24(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100585c55:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackDataIsValid( inTrackData )";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
    goto LAB_100585c79;
  }
  if (*(int *)(param_1 + 0x80) == 0x74646174) goto LAB_100585b55;
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure (expected to be true)";
    local_2c = 0x822;
    local_2a = "trackData->magic == \'tdat\'";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
  cVar1 = FUN_1001782e9(0,1);
  if (cVar1 == '\0') goto LAB_100585c55;
  if (*(int *)(param_1 + 0x80) == 0x74646174) {
LAB_100585b55:
    if (*(int *)(param_1 + 0x2cc4) == 0) goto LAB_100585b5e;
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure (expected to be true)";
      local_2c = 0x822;
      local_2a = "trackData->magic == \'tdat\'";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 != '\0') goto LAB_100585b55;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
LAB_100585b5e:
    for (lVar2 = FUN_100315ede(param_1); lVar2 != 0; lVar2 = FUN_100316031(lVar2)) {
      if ((((*(byte *)(lVar2 + 0x298) & 1) != 0) && ((*(byte *)(lVar2 + 0x298) & 4) != 0)) &&
         (*(char *)(lVar2 + 0x2a0) != '\0')) {
        cVar1 = *(char *)(lVar2 + 0x299);
        if (cVar1 == '\0') {
          FUN_100584648(lVar2);
          cVar1 = *(char *)(lVar2 + 0x299);
        }
        if (cVar1 == '\x01') {
          uVar4 = 1;
          goto LAB_100585c79;
        }
      }
    }
  }
  uVar4 = 0;
LAB_100585c79:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

