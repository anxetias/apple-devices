// name: FUN_10020dd26
// address: 10020dd26

int FUN_10020dd26(undefined8 param_1,undefined8 param_2,char param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char local_848 [4];
  char *local_844;
  undefined2 local_83c;
  int local_83a;
  undefined1 local_448 [1024];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_4 = '\0';
  iVar2 = FUN_10020bf57(param_1,local_448);
  if (iVar2 == -0x80) goto LAB_10020dec9;
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      builtin_strncpy(local_848,"\x02\x02\"\b",4);
      local_844 = "Assertion failure";
      local_83c = 0x400;
      local_83a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",local_848,0x12);
    }
    goto LAB_10020dec9;
  }
  if (param_3 == '\0') {
    FUN_1001dfbb3(local_448,local_848,0x400);
    pcVar4 = _strrchr(local_848,0x2e);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      goto LAB_10020de78;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "extension != __null";
      goto LAB_10020df10;
    }
  }
  else {
    cVar1 = FUN_100167064(param_2,&cf_CFBundleExecutable,local_848,0x400);
    if (cVar1 != '\0') {
LAB_10020de78:
      iVar2 = 0;
      _snprintf(param_4,0x400,"Payload/%s/SC_Info/%s.sinf",local_448,local_848);
      goto LAB_10020dec9;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = 
      "JRCFDictionaryGetCString(bundleInfoDict, kIPhoneApplicationBundleExecutableKey, executableName, sizeof(executableName))"
      ;
LAB_10020df10:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = 0x4e2;
LAB_10020dec9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

