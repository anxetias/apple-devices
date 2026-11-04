// name: FUN_1004e424e
// address: 1004e424e

int FUN_1004e424e(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  int local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = 0;
  if (*(char *)(param_1 + 0x389) != '\0') {
    if (*(long *)(param_1 + 0x16658) == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "handlerData->sql != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
      goto LAB_1004e4529;
    }
    iVar6 = *(int *)(param_1 + 0x16668);
    *(int *)(param_1 + 0x16668) = iVar6 + 1;
    if (iVar6 == 0) {
      iVar6 = 0x1a;
      if (param_2 != '\0') {
        iVar6 = 0x7a;
      }
      bVar5 = true;
LAB_1004e42da:
      iVar2 = iVar6;
      if (*(char *)(param_1 + 0x1666c) == '\x01') {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar3 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        iVar2 = iVar6 + 0x400;
        if (cVar1 != '\0') {
          local_58 = local_58 & 0xffff0000;
          __os_log_impl(0x100000000,uVar3,1,
                        "genius sync>  deleting db file(s) after corruption detected",&local_58,2);
        }
      }
      iVar2 = FUN_1006293da(*(undefined8 *)(param_1 + 0x16658),*(undefined8 *)(param_1 + 0x16638),1,
                            param_1 + 0x16218,iVar2,*(undefined8 *)(param_1 + 0x16650));
      if (iVar2 == -0x80) goto LAB_1004e44a9;
      if (iVar2 == 0) {
LAB_1004e4459:
        lVar4 = *(long *)(param_1 + 0x30);
        if (lVar4 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "handlerData->trackData != nullptr";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          iVar2 = 0;
          FUN_1001782e9(0,0);
          lVar4 = *(long *)(param_1 + 0x30);
          if (lVar4 == 0) goto LAB_1004e44af;
        }
        FUN_100203686(lVar4 + 0x2cb0,param_1 + 0x16658);
        iVar2 = 0;
        goto LAB_1004e44af;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if ((iVar2 == 0x32d3) || (iVar2 == 0x32e2)) {
        *(undefined1 *)(param_1 + 0x1666c) = 1;
        if (!bVar5) goto LAB_1004e44a9;
        FUN_100369f3c(*(undefined8 *)(param_1 + 0x30));
        bVar5 = false;
        goto LAB_1004e42da;
      }
      if (iVar2 == 0) goto LAB_1004e4459;
LAB_1004e44a9:
      *(int *)(param_1 + 0x16668) = *(int *)(param_1 + 0x16668) + -1;
    }
  }
LAB_1004e44af:
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar3 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    local_4a = *(char **)(param_1 + 0x16650);
    local_54 = *(char **)(param_1 + 0x16658);
    local_58 = 0x8000300;
    local_4c = 0x800;
    local_42 = 0x400;
    local_40 = iVar2;
    __os_log_impl(0x100000000,uVar3,1,"genius sync>  open  %p  %p  (%d)",&local_58,0x1c);
  }
LAB_1004e4529:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

