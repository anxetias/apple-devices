// name: FUN_1003a8724
// address: 1003a8724

bool FUN_1003a8724(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 != (undefined8 *)0x0) && ((int *)*param_1 != (int *)0x0)) {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      bVar4 = false;
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1003a87f3;
    }
    if (*(int *)(param_1 + 8) != 0) {
      if ((param_1[1] == 0) || (lVar1 = *(long *)(param_1[1] + 0x10), lVar1 == 0)) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "TrackInfoIsValid(trackInfo)";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        uVar3 = 1;
LAB_1003a8839:
        bVar4 = false;
        FUN_1001782e9(uVar3,0);
      }
      else {
        if (*(int *)(lVar1 + 0x80) != 0x74646174) {
          uVar3 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar3,0x10);
          if (cVar2 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure (expected to be true)";
            local_2c = 0x822;
            local_2a = "trackData->magic == \'tdat\'";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
          }
          cVar2 = FUN_1001782e9(0,1);
          if (cVar2 == '\0') {
            uVar3 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar3,0x10);
            if (cVar2 != '\0') {
              local_38 = 0x8220202;
              local_34 = "Assertion failure";
              local_2c = 0x822;
              local_2a = "TrackDataIsValid(trackData)";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
            }
            uVar3 = 0;
            goto LAB_1003a8839;
          }
        }
        bVar4 = *(int *)(lVar1 + 0x84) == 0x7264656d;
      }
      goto LAB_1003a87f3;
    }
  }
  bVar4 = false;
LAB_1003a87f3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

