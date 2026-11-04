// name: FUN_1003003ff
// address: 1003003ff

long FUN_1003003ff(long param_1,long param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1003004c1:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "TrackDataIsValid(trackData)";
LAB_100300541:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1003004c1;
    }
    if (param_2 != 0) {
      for (lVar3 = FUN_1002f9fc5(param_1); lVar3 != 0; lVar3 = FUN_1002fa118(lVar3)) {
        if (**(long **)(lVar3 + 8) == param_2) {
          if (param_3 == '\0') goto LAB_100300571;
          if ((*(long **)(lVar3 + 8))[2] == 0) {
            uVar2 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar2,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "TrackInstanceIsValid(trackInstance)";
              __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            goto LAB_100300568;
          }
          if (*(int *)(lVar3 + 0x3c) != 0x53485244) goto LAB_100300571;
        }
      }
      lVar3 = 0;
      goto LAB_100300571;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "persistentID != 0";
      goto LAB_100300541;
    }
  }
  lVar3 = 0;
LAB_100300568:
  FUN_1001782e9(0,0);
LAB_100300571:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

