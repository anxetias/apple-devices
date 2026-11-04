// name: FUN_100585969
// address: 100585969

bool FUN_100585969(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100585a03:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "TrackDataIsValid( trackData )";
LAB_100585a83:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100585a03;
    }
    if (*(int *)(param_1 + 0x2cc4) != 0) {
      iVar2 = *(int *)(param_1 + 0x2cc4) + -1;
      *(int *)(param_1 + 0x2cc4) = iVar2;
      if (param_2 != '\0' && iVar2 == 0) {
        FUN_10058453f(param_1,0,0);
        iVar2 = *(int *)(param_1 + 0x2cc4);
      }
      bVar4 = iVar2 == 0;
      goto LAB_100585ab3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "trackData->smartPlaylistDisableCount > 0";
      goto LAB_100585a83;
    }
  }
  bVar4 = false;
  FUN_1001782e9(0,0);
LAB_100585ab3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

