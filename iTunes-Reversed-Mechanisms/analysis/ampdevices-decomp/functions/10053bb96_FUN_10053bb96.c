// name: FUN_10053bb96
// address: 10053bb96

void FUN_10053bb96(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 0x7a1d5e;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10053bdab;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  iVar4 = FUN_100171ce8(param_2);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    local_54 = *(char **)(lVar1 + 0x152c8);
    local_58 = 0x8420302;
    local_4c = 0x400;
    uStack_46 = 0x400;
    uStack_44 = (undefined2)iVar4;
    uStack_42 = (undefined2)((uint)iVar4 >> 0x10);
    local_4a = param_3;
    __os_log_impl(0x100000000,uVar6,1,
                  "activation> completed activation session request for device %{public}@, status = %d, HTTP status = %u"
                  ,&local_58,0x18);
  }
  if (iVar4 - 200U < 100 && param_3 == 0) {
    lVar5 = FUN_1001719b7(param_2);
    if (lVar5 != 0) goto LAB_10053bcd4;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar3 != '\0') {
      local_58 = local_58 & 0xffff0000;
      __os_log_impl(0x100000000,uVar6,0x10,"activation> missing session info in response",&local_58,
                    2);
      goto LAB_10053bcd1;
    }
    lVar5 = 0;
  }
  else {
LAB_10053bcd1:
    lVar5 = 0;
LAB_10053bcd4:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
  }
  uVar6 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    pcVar2 = *(char **)(lVar1 + 0x152c8);
    local_4a = FUN_100170ef7(lVar5);
    local_58 = 0x8420202;
    local_4c = 0x400;
    local_54 = pcVar2;
    __os_log_impl(0x100000000,uVar6,1,
                  "activation> creating activation info for device %{public}@, session info length = %d"
                  ,&local_58,0x12);
  }
  iVar4 = FUN_1005bed46(*(undefined8 *)(lVar1 + 0x7168),lVar5,0,FUN_10053b677,param_1);
  if (iVar4 != 0) {
    *(int *)(param_1 + 8) = iVar4;
    FUN_10053b52b(param_1);
  }
  FUN_10017060f(lVar5);
  FUN_10017060f(param_2);
LAB_10053bdab:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

