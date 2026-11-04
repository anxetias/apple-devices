// name: FUN_1002f3636
// address: 1002f3636

long FUN_1002f3636(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1001737db(DAT_1008c4d90,0);
  if (lVar2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "result != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = _CFTreeGetChildCount(param_1);
    if (0 < lVar3) {
      lVar7 = 0;
      do {
        lVar4 = _CFTreeGetChildAtIndex(param_1,lVar7);
        if ((lVar4 != 0) && (lVar4 = FUN_100174e82(lVar4), lVar4 != 0)) {
          lVar5 = FUN_100174e3e(lVar4);
          if (lVar5 == 10) {
            uVar6 = FUN_100174f0a(lVar4);
            lVar4 = FUN_1001f4309(uVar6);
            if (lVar4 != 0) {
              FUN_10017415e(lVar2,lVar4);
              FUN_10017060f(lVar4);
            }
          }
          else if (lVar5 == 6) {
            uVar6 = FUN_100174f0a(lVar4);
            FUN_10017415e(lVar2,uVar6);
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar2;
}

