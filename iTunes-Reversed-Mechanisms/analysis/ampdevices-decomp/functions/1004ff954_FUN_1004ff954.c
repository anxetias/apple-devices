// name: FUN_1004ff954
// address: 1004ff954

bool FUN_1004ff954(int param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  byte local_39;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar5 = true;
  if (param_1 == 0x2711) {
    lVar2 = FUN_100279568();
    cVar1 = FUN_1001e31a0(param_2,&local_39,0,0);
    if (cVar1 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "ParseBuildVersionCString(buildVersion, &buildMajorVersion, nullptr, nullptr)";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      bVar5 = false;
      FUN_1001782e9(0,0);
    }
    else {
      lVar3 = 0;
      do {
        if (*(short *)(lVar2 + 0xcbc + lVar3 * 4) == 0x2711) {
          bVar5 = local_39 <= *(byte *)(lVar2 + 0xcbe + lVar3 * 4);
          goto LAB_1004ff9e3;
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 != 0x10);
      bVar5 = false;
    }
  }
LAB_1004ff9e3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

