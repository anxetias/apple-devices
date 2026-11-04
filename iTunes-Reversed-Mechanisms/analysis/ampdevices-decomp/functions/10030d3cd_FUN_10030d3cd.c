// name: FUN_10030d3cd
// address: 10030d3cd

int FUN_10030d3cd(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 local_448 [512];
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  char *local_23a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar5 = FUN_1003c3248(param_1,param_3,0,0,0,0);
  if (iVar5 == -0x80) goto LAB_10030d576;
  if (iVar5 == 0) {
    if (((param_1 == 0) || (lVar2 = *(long *)(param_1 + 8), lVar2 == 0)) ||
       (lVar3 = *(long *)(lVar2 + 0x10), lVar3 == 0)) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_248 = 0x8220202;
        local_244 = "Assertion failure";
        local_23c = 0x822;
        local_23a = "TrackInstanceIsValid(trackInstance)";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_248,0x16);
      }
      FUN_1001782e9(0,0);
      iVar5 = -0x32;
      goto LAB_10030d576;
    }
    iVar5 = 0;
    if (*(int *)(lVar2 + 0xd8) != 0) goto LAB_10030d576;
    if (*(int *)(lVar3 + 0x80) == 0x74646174) {
LAB_10030d484:
      if (*(int *)(lVar3 + 0x84) != 0x646f5069) {
        puVar1 = (uint *)(*(long *)(param_1 + 8) + 0xc2);
        *puVar1 = *puVar1 | 0x10;
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 != '\0') goto LAB_10030d484;
    }
    FUN_10017d489(param_2,&local_248);
    FUN_1003c2fcf(param_1,&local_248,local_448);
    iVar5 = FUN_100471097(*(undefined8 *)(param_1 + 8),local_448,1);
    if (iVar5 == -0x80) goto LAB_10030d576;
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_10030d576;
    }
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 == '\0') goto LAB_10030d576;
    puVar7 = &local_48;
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x400;
    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 == '\0') goto LAB_10030d576;
    puVar7 = &local_248;
    local_248 = 0x8220202;
    local_244 = "Assertion failure";
    local_23c = 0x400;
    local_23a = (char *)CONCAT44(local_23a._4_4_,iVar5);
  }
  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",puVar7,0x12);
LAB_10030d576:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

