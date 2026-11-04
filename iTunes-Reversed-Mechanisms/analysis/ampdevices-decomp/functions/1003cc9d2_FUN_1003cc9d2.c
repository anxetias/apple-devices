// name: FUN_1003cc9d2
// address: 1003cc9d2

int FUN_1003cc9d2(undefined8 param_1,undefined8 param_2,char *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_258 [16];
  short local_248 [256];
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
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "fileSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
  }
  else {
    FUN_1001c62d9(param_4,0x420);
    cVar1 = FUN_100166ce2(param_2,param_3,local_248);
    iVar4 = -0x2b;
    if (cVar1 != '\0') {
      if (local_248[0] == 0) {
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
        iVar2 = FUN_10017ecc9(param_1,local_248,param_4,0);
        iVar4 = 0;
        if (iVar2 != 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar3 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          iVar4 = iVar2;
          if (cVar1 != '\0') {
            FUN_1001b8dfc(local_258,local_248);
            local_44 = (char *)FUN_1001b83ae(local_258);
            local_48 = 0x8220202;
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            __os_log_impl(0x100000000,uVar3,0x10,
                          "sync> could not find purchased file \"%{public}s\" (%d)",&local_48,0x12);
            FUN_1001b7a50(local_258);
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

