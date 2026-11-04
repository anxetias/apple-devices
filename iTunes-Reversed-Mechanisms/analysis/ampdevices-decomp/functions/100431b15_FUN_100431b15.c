// name: FUN_100431b15
// address: 100431b15

undefined8 FUN_100431b15(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  undefined2 local_52;
  long local_50;
  undefined2 local_48;
  long local_46;
  undefined2 local_3e;
  long local_3c;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = FUN_1004e0c3f(param_1,0);
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = "libraryTrackData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    uVar6 = 0;
    FUN_1001782e9(0,0);
    goto LAB_100431c75;
  }
  cVar4 = FUN_10043193e(param_1);
  if (cVar4 == '\0') {
    lVar1 = *(long *)(param_1 + 0x14cdc);
    lVar5 = FUN_100309008(lVar5);
    if (lVar1 == lVar5) goto LAB_100431ba7;
    bVar2 = true;
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_100309008(lVar5);
    *(undefined8 *)(param_1 + 0x14cdc) = uVar6;
LAB_100431ba7:
    FUN_100430e89(param_1 + 0x14e50,param_1 + 0x14e90);
    uVar6 = 1;
    bVar2 = false;
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar3 = DAT_1008c75b8;
  cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar4 != '\0') {
    local_64 = "";
    if (bVar2) {
      local_64 = "NOT ";
    }
    local_5a = *(char **)(param_1 + 0x14cdc);
    local_50 = param_1 + 0x14e90;
    local_46 = param_1 + 0x14e50;
    local_3c = param_1 + 0x14e10;
    local_68 = 0x8220502;
    local_5c = 0x800;
    local_52 = 0x820;
    local_48 = 0x820;
    local_3e = 0x820;
    __os_log_impl(0x100000000,uVar3,1,
                  "setup> device is %{public}son home music library (library id 0x%016llX, machine name \"%s\", user name \"%s\", folder name \"%s\")"
                  ,&local_68,0x34);
  }
LAB_100431c75:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

