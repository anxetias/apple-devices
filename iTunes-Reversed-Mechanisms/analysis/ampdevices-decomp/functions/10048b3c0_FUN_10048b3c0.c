// name: FUN_10048b3c0
// address: 10048b3c0

long FUN_10048b3c0(long param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    if (param_1 == 0) {
LAB_10048b47d:
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "TrackDataIsValid( trackData )";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      lVar3 = 0;
      FUN_1001782e9(0,0);
      goto LAB_10048b4a2;
    }
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
      if (cVar1 == '\0') goto LAB_10048b47d;
    }
    local_48 = param_2;
    lVar3 = FUN_1002b7f7c(param_1 + 0x26a0);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) goto LAB_10048b4a2;
    for (lVar3 = FUN_100315ede(param_1); lVar3 != 0; lVar3 = FUN_100316031(lVar3)) {
      if (*(int *)(lVar3 + 0x58) == param_2) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "false";
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        FUN_1002f8472(param_1 + 0x26a0,*(undefined4 *)(lVar3 + 0x58),lVar3);
        goto LAB_10048b4a2;
      }
    }
  }
  lVar3 = 0;
LAB_10048b4a2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

