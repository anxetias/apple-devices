// name: FUN_10053e0e4
// address: 10053e0e4

int FUN_10053e0e4(long *param_1,undefined4 param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  iVar2 = (**(code **)(*param_1 + 0x40))();
  if (iVar2 == -0x80) goto LAB_10053e25c;
  if (iVar2 == 0) {
    if (param_1[0x95] == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "mMetaDataObj != __null";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      iVar2 = -0x32;
      FUN_1001782e9(0,0);
      goto LAB_10053e25c;
    }
    if (*param_3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *param_3 + 0x20;
      cVar1 = FUN_1001b8428(lVar4);
      if (cVar1 == '\0') {
        lVar4 = FUN_1001b8d0c(lVar4);
      }
      else {
        lVar4 = 0;
      }
      bVar5 = local_50 != 0;
      local_50 = lVar4;
      if (bVar5) {
        _CFRelease();
        lVar4 = local_50;
      }
    }
    iVar2 = FUN_1003b0547(param_1[0x95],lVar4);
    if (iVar2 == -0x80) goto LAB_10053e25c;
    if (iVar2 == 0) {
      iVar2 = 0;
      (**(code **)(*param_1 + 0x88))(param_1);
      goto LAB_10053e25c;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_10053e25c;
    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_10053e25c;
    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
  }
  local_3c = 0x400;
  local_44 = "Assertion failure";
  local_48 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
LAB_10053e25c:
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  FUN_10014d890(&local_50);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

