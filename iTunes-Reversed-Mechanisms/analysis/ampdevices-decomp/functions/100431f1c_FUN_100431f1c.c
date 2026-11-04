// name: FUN_100431f1c
// address: 100431f1c

undefined8 FUN_100431f1c(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  undefined2 local_52;
  long local_50;
  undefined2 local_48;
  long local_46;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1004e0c3f(param_1,0);
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = "libraryTrackData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10043207b;
  }
  cVar3 = FUN_10043193e(param_1);
  if (cVar3 == '\0') {
    lVar6 = *(long *)(param_1 + 0x14d30);
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_1 + 0x14cdc);
      *(long *)(param_1 + 0x14d30) = lVar6;
    }
    lVar4 = FUN_100309008(lVar4);
    if (lVar6 == lVar4) goto LAB_100431fc1;
    bVar1 = true;
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_100309008(lVar4);
    *(undefined8 *)(param_1 + 0x14d30) = uVar5;
LAB_100431fc1:
    FUN_100430e89(param_1 + 0x14f10,param_1 + 0x14f50);
    uVar5 = 1;
    bVar1 = false;
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar2 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    local_64 = "";
    if (bVar1) {
      local_64 = "NOT ";
    }
    local_5a = *(char **)(param_1 + 0x14d30);
    local_50 = param_1 + 0x14f50;
    local_46 = param_1 + 0x14f10;
    local_68 = 0x8220402;
    local_5c = 0x800;
    local_52 = 0x820;
    local_48 = 0x820;
    __os_log_impl(0x100000000,uVar2,1,
                  "setup> device is %{public}son home podcast library (library id 0x%016llX, machine name \"%s\", user name \"%s\")"
                  ,&local_68,0x2a);
  }
LAB_10043207b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

