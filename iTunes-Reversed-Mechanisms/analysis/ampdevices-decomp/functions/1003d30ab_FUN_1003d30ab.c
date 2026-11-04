// name: FUN_1003d30ab
// address: 1003d30ab

int FUN_1003d30ab(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  iVar5 = 0;
  iVar4 = FUN_1004f2b0b(lVar1,0);
  if (iVar4 == 0) {
    FUN_100602d40(param_1,0x64656c61,0);
    iVar5 = FUN_10060274a(param_1,FUN_1003d32aa,"");
    if (iVar5 != -0x80) {
      if (iVar5 == 0) {
        iVar5 = FUN_100602806(param_1);
        if ((iVar5 != -0x80) && (iVar5 != 0)) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = iVar5;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
        if (*(long *)(lVar1 + 0x30) != 0) {
          for (lVar7 = FUN_1002f930c(); lVar7 != 0; lVar7 = FUN_1002f9451(lVar7)) {
            *(undefined1 *)(lVar7 + 0xb9) = 2;
            *(undefined4 *)(lVar7 + 0x174) = 0;
            FUN_1002e5618(lVar7,0);
          }
        }
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = iVar5;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(lVar7 + 0x6750);
    if (lVar2 != 0) {
      FUN_100529664(lVar2,0,0);
    }
    *(undefined2 *)(lVar7 + 0x67bc) = 0;
    *(undefined4 *)(param_1 + 0x458) = 0;
    *(undefined8 *)(param_1 + 0x460) = 0;
    *(undefined8 *)(param_1 + 0x468) = 0;
    if (*(long *)(lVar1 + 0x30) != 0) {
      FUN_100321e5c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

