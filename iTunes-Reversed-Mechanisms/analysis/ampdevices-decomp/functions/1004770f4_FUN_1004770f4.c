// name: FUN_1004770f4
// address: 1004770f4

int FUN_1004770f4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 undefined8 *param_6,uint *param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = 0;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_1004771ff;
  }
  iVar3 = *(int *)(param_1 + 0x1a8 + (param_2 & 0xffffffff) * 4);
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1001de13c(param_3,iVar3,param_6,param_7);
  }
  if (param_6 == (undefined8 *)0x0) {
LAB_1004771ad:
    iVar3 = iVar2;
    if (param_5 != 0) {
      iVar3 = FUN_1001de13c(param_4,param_5,param_6,param_7);
    }
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    if (param_7 == (uint *)0x0) goto LAB_1004771ff;
    uVar4 = *param_7;
  }
  else {
    if (param_7 == (uint *)0x0) {
      if (iVar2 == 0) {
        iVar3 = 0;
        goto LAB_1004771ff;
      }
      goto LAB_1004771ad;
    }
    uVar4 = *param_7;
    if ((uVar4 == 0) || (iVar3 = 0, iVar2 != 0)) goto LAB_1004771ad;
  }
  *param_7 = uVar4 >> 1;
LAB_1004771ff:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

