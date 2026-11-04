// name: FUN_1004313cd
// address: 1004313cd

void FUN_1004313cd(long param_1,char param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004e0c3f(param_1,1);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "libraryTrackData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined1 *)(param_1 + 0x6ac2) = 1;
    uVar3 = FUN_100309008(lVar2);
    *(undefined8 *)(param_1 + 0x14d30) = uVar3;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_44 = *(char **)(param_1 + 0x14d30);
      local_48 = 0x8000100;
      __os_log_impl(0x100000000,uVar3,1,"sync> setting home podcast library to 0x%016llX",&local_48,
                    0xc);
    }
    FUN_100430e89(param_1 + 0x14f10,param_1 + 0x14f50);
    if ((param_2 != '\0') && (*(long *)(param_1 + 0x30) != 0)) {
      lVar2 = FUN_10048604a();
      if (lVar2 != 0) {
        FUN_100313e0b(*(undefined8 *)(param_1 + 0x30));
        lVar4 = FUN_100430f31(param_1,lVar2,1);
        FUN_10043107c(lVar2);
        if ((lVar4 != 0) && (*(int *)(*(long *)(lVar4 + 0x78) + 0x18) == 0)) {
          FUN_100488d27(lVar4,0,0);
        }
        FUN_1002fbbfc(*(undefined8 *)(param_1 + 0x30));
        FUN_100357184(param_1);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

