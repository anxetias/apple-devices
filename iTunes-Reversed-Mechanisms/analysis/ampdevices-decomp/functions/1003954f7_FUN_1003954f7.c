// name: FUN_1003954f7
// address: 1003954f7

long FUN_1003954f7(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = FUN_10049bd23();
  if (lVar5 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_2a = "masterAlbum != nullptr";
LAB_10039562f:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    FUN_100496791(param_1);
    for (lVar6 = FUN_100496392(param_1); lVar6 != 0; lVar6 = FUN_100496449(lVar6)) {
      if ((*(char *)(lVar6 + 0x11) != '\x01') &&
         (uVar1 = *(uint *)(lVar6 + 0x50), (ulong)uVar1 != 0)) {
        lVar2 = *(long *)(lVar6 + 0x58);
        lVar8 = 0;
        do {
          lVar3 = *(long *)(lVar2 + lVar8);
          if (lVar3 != 0) {
            *(undefined4 *)(lVar3 + 0xa0) = 1;
          }
          lVar8 = lVar8 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar8);
      }
    }
    lVar5 = FUN_100394c21(lVar5,1);
    if (lVar5 != 0) goto LAB_1003955ef;
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_2a = "albumDictionary != nullptr";
      goto LAB_10039562f;
    }
  }
  lVar5 = 0;
  FUN_1001782e9(0,0);
LAB_1003955ef:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

