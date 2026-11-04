// name: FUN_1003cdec3
// address: 1003cdec3

undefined4 FUN_1003cdec3(undefined8 param_1,undefined8 param_2,char *param_3,long param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
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
  if (param_4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_248 = 0x8220202;
      local_244 = "Assertion failure";
      local_23c = 0x822;
      local_23a = "fileSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_248,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001c62d9(param_4,0x420);
    cVar1 = FUN_100166ce2(param_2,param_3,&local_248);
    uVar2 = 0xffffffd5;
    if (cVar1 != '\0') {
      if ((short)local_248 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "childName[0] != 0";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar3 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8420102;
          local_44 = param_3;
          __os_log_impl(0x100000000,uVar3,0x10,
                        "sync> missing %{public}@ key in purchased asset info dictionary",&local_48,
                        0xc);
        }
      }
      else {
        uVar2 = FUN_100188676(param_1,&local_248,param_4);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

