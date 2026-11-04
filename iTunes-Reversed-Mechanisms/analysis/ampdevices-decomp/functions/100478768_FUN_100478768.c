// name: FUN_100478768
// address: 100478768

int FUN_100478768(long param_1,undefined8 param_2,uint *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1004787fa:
    iVar4 = -0x32;
  }
  else {
    if (*(int *)(param_1 + 0xe0) == 0) {
      if (*(int *)(param_1 + 0xdc) == 0) goto LAB_1004787fa;
      iVar4 = FUN_1001de13c(lVar1 + 0x1cb0,*(int *)(param_1 + 0xdc),param_2,param_3);
      if (param_3 != (uint *)0x0) {
        *param_3 = *param_3 >> 1;
      }
      if (param_4 != (undefined1 *)0x0) {
        uVar2 = FUN_1002dd350(param_1);
        goto LAB_100478854;
      }
    }
    else {
      iVar4 = FUN_1001de13c(lVar1 + 0x1cb0,*(int *)(param_1 + 0xe0),param_2,param_3);
      if (param_3 != (uint *)0x0) {
        *param_3 = *param_3 >> 1;
      }
      if (param_4 != (undefined1 *)0x0) {
        uVar2 = 0;
LAB_100478854:
        *param_4 = uVar2;
      }
    }
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

