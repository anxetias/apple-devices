// name: FUN_1005a60e6
// address: 1005a60e6

bool FUN_1005a60e6(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x15a3) == '\0') {
    local_50 = 0;
    if (*(long *)(param_1 + 0x15e0) == 0) {
      FUN_1005aeaea(param_1);
      if (*(long *)(param_1 + 0x15e0) == 0) {
        bVar6 = true;
        goto LAB_1005a610d;
      }
    }
    iVar2 = FUN_1005a624a(param_1,&local_50);
    bVar6 = true;
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (local_50 != 0) {
          lVar3 = FUN_100166c1b(*(undefined8 *)(param_1 + 0x15e0),&cf_MenuVersion);
          lVar4 = FUN_100166c1b(local_50,&cf_Version);
          bVar6 = true;
          if (lVar4 != 0 && lVar3 != 0) {
            cVar1 = FUN_100170633(lVar3,lVar4);
            bVar6 = cVar1 == '\0';
          }
          FUN_10017060f(local_50);
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = iVar2;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
  }
  else {
    bVar6 = false;
  }
LAB_1005a610d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

