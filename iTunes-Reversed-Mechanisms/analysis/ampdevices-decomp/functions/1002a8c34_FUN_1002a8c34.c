// name: FUN_1002a8c34
// address: 1002a8c34

int FUN_1002a8c34(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_480;
  uint local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10058e6cd(param_1,param_1,param_2,0,local_458,&local_480,0);
  uVar5 = local_480;
  if (iVar2 == 0) {
    iVar2 = -0x80;
    if (DAT_1008c5d68 == '\0') {
      FUN_100177d5c(&local_478);
      lVar4 = FUN_100496019(uVar5);
      iVar2 = 0;
      for (; lVar4 != 0; lVar4 = FUN_1004960d0(lVar4)) {
        if ((param_3 != '\0') ||
           (((ulong)*(uint *)(lVar4 + 0x98) != 0 &&
            (0xf099c0 < (long)((ulong)local_478 - (ulong)*(uint *)(lVar4 + 0x98)))))) {
          FUN_1005931e8(lVar4);
        }
        if (DAT_1008c5d68 != '\0') {
          iVar2 = -0x80;
          break;
        }
      }
      iVar3 = FUN_10038b674(local_480,param_1,param_2,0,local_458);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar5 = FUN_1001cc310();
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_478 = 0x8220202;
          local_474 = "Assertion failure";
          local_46c = 0x400;
          local_46a = iVar3;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      }
    }
    FUN_100495a1c(local_480);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

