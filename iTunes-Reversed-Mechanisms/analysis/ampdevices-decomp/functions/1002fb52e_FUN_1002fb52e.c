// name: FUN_1002fb52e
// address: 1002fb52e

int FUN_1002fb52e(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_d8 [88];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  iVar2 = FUN_1002fa385();
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_1002fb68e:
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "TrackDataIsValid(trackData)";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
      goto LAB_1002fb6b5;
    }
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x80) != 0x74646174) {
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
      if (cVar1 == '\0') goto LAB_1002fb68e;
    }
    iVar2 = FUN_1002fae31(local_d8,param_3,param_4);
    if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_1002fb6b5;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_1002fb6b5;
    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_1002fb6b5;
    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
  }
  local_3c = 0x400;
  local_44 = "Assertion failure";
  local_48 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
LAB_1002fb6b5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

