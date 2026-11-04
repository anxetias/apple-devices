// name: FUN_100584aa2
// address: 100584aa2

void FUN_100584aa2(long param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100584b65:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
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
      if (cVar1 == '\0') goto LAB_100584b65;
    }
    if (param_2 != '\0' || (*(ulong *)(param_1 + 0x1bb0) >> 0x29 & 1) != 0) {
      *(ulong *)(param_1 + 0x1bb0) = *(ulong *)(param_1 + 0x1bb0) & 0xfffffdffffffffff;
      for (lVar3 = FUN_100315ede(param_1); lVar3 != 0; lVar3 = FUN_100316031(lVar3)) {
        if ((*(byte *)(lVar3 + 0x298) & 1) != 0) {
          *(undefined1 *)(lVar3 + 0x29a) = *(undefined1 *)(lVar3 + 0x299);
          *(undefined1 *)(lVar3 + 0x299) = 0;
        }
      }
      for (lVar3 = FUN_100315ede(param_1); lVar3 != 0; lVar3 = FUN_100316031(lVar3)) {
        if ((*(byte *)(lVar3 + 0x298) & 1) != 0) {
          FUN_100584648(lVar3);
        }
      }
      uVar4 = *(ulong *)(param_1 + 0x1bb0);
      if ((uVar4 & 0x20000000000) != 0) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "trackData->needsSmartPlaylistStateUpdate == false";
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar4 = *(ulong *)(param_1 + 0x1bb0);
      }
      *(ulong *)(param_1 + 0x1bb0) = uVar4 & 0xfffffdffffffffff;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

