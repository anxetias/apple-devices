// name: FUN_1004f2ffa
// address: 1004f2ffa

int FUN_1004f2ffa(long param_1,char param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 local_a98;
  char *local_a94;
  undefined2 local_a8c;
  int local_a8a;
  undefined1 local_898 [1056];
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = 0;
  if (*(long *)(param_1 + 0x66b8) != 0) goto LAB_1004f3067;
  iVar2 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x70696374,param_2,
                        local_478);
  if ((iVar2 != 0) ||
     ((param_3 == '\0' &&
      (iVar2 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x74686d62,param_2,
                             local_898), iVar2 != 0)))) goto LAB_1004f3067;
  iVar2 = FUN_1001888ba(local_478,"Photo Database",local_898,0);
  if (iVar2 == 0) {
    lVar4 = FUN_100495500(local_478);
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x143c) = 1;
      *(long *)(param_1 + 0x66b8) = lVar4;
      iVar3 = FUN_10038a96f(lVar4,local_898,0,0,0);
      if (iVar3 != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 != '\0') {
          local_a98 = 0x4000100;
          local_a94 = (char *)CONCAT44(local_a94._4_4_,iVar3);
          __os_log_impl(0x100000000,uVar5,0x10,"failed to read Photo Database (%d)",&local_a98,8);
        }
        iVar2 = -0x80;
        if (iVar3 != -0x80) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          iVar2 = iVar3;
          if (cVar1 != '\0') {
            local_a98 = 0x8220202;
            local_a94 = "Assertion failure";
            local_a8c = 0x400;
            local_a8a = iVar3;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_a98,0x12);
          }
        }
        goto LAB_1004f30ea;
      }
LAB_1004f3276:
      *(undefined8 *)(*(long *)(param_1 + 0x66b8) + 0x1440) = 0x1f400000;
      iVar2 = 0;
      goto LAB_1004f3067;
    }
    *(undefined8 *)(param_1 + 0x66b8) = 0;
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      puVar6 = &local_a98;
LAB_1004f337c:
      *puVar6 = 0x8220202;
      *(char **)(puVar6 + 1) = "Assertion failure";
      *(undefined2 *)(puVar6 + 3) = 0x822;
      *(char **)((long)puVar6 + 0xe) = "handlerData->iPodPhotoLibrary != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",puVar6,0x16);
    }
  }
  else {
LAB_1004f30ea:
    if (param_2 == '\0') goto LAB_1004f3067;
    if (*(long *)(param_1 + 0x66b8) != 0) {
      FUN_100495a1c();
    }
    lVar4 = FUN_100495500(local_478);
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x143c) = 1;
      *(long *)(param_1 + 0x66b8) = lVar4;
      bVar7 = *(char *)(param_1 + 0x35d) != '\0';
      cVar1 = bVar7 + '\x02';
      if (*(char *)(param_1 + 0x35e) == '\0') {
        cVar1 = bVar7;
      }
      FUN_1001e04f5("Photo Database",&local_a98);
      iVar2 = FUN_10038b674(*(undefined8 *)(param_1 + 0x66b8),local_478,&local_a98,cVar1,local_898);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          FUN_100496f8c(*(undefined8 *)(param_1 + 0x66b8),0);
          goto LAB_1004f3276;
        }
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar2;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x4000100;
        local_54 = (char *)CONCAT44(local_54._4_4_,iVar2);
        __os_log_impl(0x100000000,uVar5,0x10,"failed to write Photo Database (%d)",&local_58,8);
      }
      goto LAB_1004f3067;
    }
    *(undefined8 *)(param_1 + 0x66b8) = 0;
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      puVar6 = &local_58;
      goto LAB_1004f337c;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x6c;
LAB_1004f3067:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

