// name: FUN_1002f8ed5
// address: 1002f8ed5

undefined8 FUN_1002f8ed5(long param_1,uint param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002f8f68:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "TrackDataIsValid(trackData)";
LAB_1002f909d:
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
      if (cVar1 == '\0') goto LAB_1002f8f68;
    }
    if (param_2 < *(uint *)(param_1 + 0x98)) {
      if (param_3 == '\0') {
        lVar4 = *(long *)(param_1 + 0x2d28);
        if (lVar4 == 0) {
          plVar5 = (long *)(param_1 + 0x2d28);
          uVar2 = 0;
          goto LAB_1002f8fe9;
        }
      }
      else {
        lVar4 = *(long *)(param_1 + 0x2d30);
        if (lVar4 == 0) {
          plVar5 = (long *)(param_1 + 0x2d30);
          uVar2 = 1;
LAB_1002f8fe9:
          lVar4 = FUN_1002dd82f(param_1,uVar2);
          *plVar5 = lVar4;
          if (lVar4 == 0) {
            uVar3 = 0;
            goto LAB_1002f9003;
          }
        }
      }
      uVar3 = *(undefined8 *)(lVar4 + 8 + (ulong)param_2 * 8);
      goto LAB_1002f9003;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "playlistIndex < (((trackData) != nullptr) ? ((trackData)->numPlaylists) : 0)";
      goto LAB_1002f909d;
    }
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1002f9003:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

