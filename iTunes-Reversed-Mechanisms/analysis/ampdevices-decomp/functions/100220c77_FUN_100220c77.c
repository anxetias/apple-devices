// name: FUN_100220c77
// address: 100220c77

int FUN_100220c77(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1001744bd(DAT_1008c4d90,param_1,0);
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "urlCFURL != nullptr";
LAB_100220e0a:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    lVar4 = FUN_1001749dd(lVar3);
    if (lVar4 != 0) {
      iVar2 = FUN_1001e115f(lVar4,param_2);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      goto LAB_100220db6;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "fileNameString != nullptr";
      goto LAB_100220e0a;
    }
  }
  lVar4 = 0;
  FUN_1001782e9(0,0);
  iVar2 = -0x6c;
LAB_100220db6:
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

