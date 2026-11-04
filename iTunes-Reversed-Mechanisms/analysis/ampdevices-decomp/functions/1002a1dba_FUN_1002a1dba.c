// name: FUN_1002a1dba
// address: 1002a1dba

void FUN_1002a1dba(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar4 = FUN_100495380();
  if (cVar4 == '\0') {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
  }
  else {
    lVar5 = FUN_100496392();
    while (lVar5 != 0) {
      if ((ulong)*(uint *)(lVar5 + 0x50) == 0) {
        uVar7 = 0;
      }
      else {
        lVar8 = 0;
        uVar7 = 0;
        do {
          lVar2 = *(long *)(*(long *)(lVar5 + 0x58) + lVar8);
          uVar3 = uVar7;
          if (((lVar2 != 0) && (uVar1 = *(uint *)(lVar2 + 0x58), uVar3 = uVar1, uVar7 != 0)) &&
             (uVar3 = uVar7, uVar1 < uVar7)) {
            uVar3 = uVar1;
          }
          uVar7 = uVar3;
          lVar8 = lVar8 + 0x10;
        } while ((ulong)*(uint *)(lVar5 + 0x50) << 4 != lVar8);
      }
      *(uint *)(lVar5 + 0x90) = uVar7;
      lVar5 = FUN_100496449();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

