// name: FUN_1004b96f6
// address: 1004b96f6

int FUN_1004b96f6(long *param_1,undefined8 param_2,int param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((*(char *)((long)param_1 + 9) == '\0') &&
      (((iVar4 = 0, (char)param_1[0x22] == '\0' || (param_1[0x21] == 0)) ||
       (*(char *)((long)param_1 + 0x111) != '\0')))) || (iVar4 = 0, (char)param_1[1] != '\0'))
  goto LAB_1004b9802;
  iVar4 = FUN_1004ba122(param_1 + 10,param_2,param_3,param_4,0);
  if (iVar4 == 0) {
    iVar4 = 0;
    if ((((char)param_1[0x22] == '\0') || (iVar4 = 0, param_1[0x21] == 0)) ||
       (*(char *)((long)param_1 + 0x111) != '\0')) goto LAB_1004b9802;
    plVar1 = param_1 + 0x23;
    iVar4 = FUN_1004ba122(plVar1,param_2,param_3,param_4);
    if (iVar4 != 0) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar4;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_1004b9802;
    }
    iVar4 = 0;
    if ((param_1[0x25] < 1) || (param_1[0x26] < param_1[0x25])) goto LAB_1004b9802;
    iVar4 = FUN_1004ba37b(plVar1,0,1);
    if (iVar4 == 0x1f48) {
      FUN_1004ba637(param_1);
      bVar7 = false;
LAB_1004b98c7:
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar4;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (!bVar7) goto LAB_1004b9802;
    }
    else {
      bVar7 = iVar4 == 0;
      if (iVar4 == -0x80) goto LAB_1004b9802;
      if (iVar4 != 0) goto LAB_1004b98c7;
    }
    lVar2 = *param_1;
    if (((lVar2 != 0) && (*(char *)(lVar2 + 0x778) == '\0')) &&
       (*(long *)(lVar2 + 0x1b60) <= param_4 && *(long *)(lVar2 + 0x1b60) != -1)) {
      FUN_1004afcf8(plVar1);
      goto LAB_1004b9802;
    }
    iVar5 = FUN_1004b5643(param_1,param_4);
    if ((iVar5 != 0) || (iVar4 = FUN_1004b4c70(plVar1,param_4,(char)param_1[0x20]), iVar4 == -0x80))
    goto LAB_1004b9802;
    if (iVar4 == 0) {
      iVar4 = 0;
      if (param_3 == 0) goto LAB_1004b9802;
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar4;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (param_3 == 0 || iVar4 != 0) goto LAB_1004b9802;
    }
    iVar4 = 0;
    iVar5 = FUN_1004ba122(plVar1,param_2,param_3,param_4,0);
    if (iVar5 == 0) goto LAB_1004b9802;
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    iVar4 = iVar5;
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
  }
  if (cVar3 != '\0') {
    local_4c = 0x400;
    local_54 = "Assertion failure";
    local_58 = 0x8220202;
    local_4a = iVar4;
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
LAB_1004b9802:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

