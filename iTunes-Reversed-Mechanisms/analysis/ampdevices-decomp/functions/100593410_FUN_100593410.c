// name: FUN_100593410
// address: 100593410

int FUN_100593410(undefined8 param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100495380();
  if (cVar2 == '\0') {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    lVar4 = FUN_100496392(param_1);
    while (lVar5 = lVar4, lVar5 != 0) {
      lVar4 = FUN_100496449(lVar5);
      if (*(char *)(lVar5 + 0xc5) != '\0') {
        FUN_100496508(lVar5);
      }
    }
    FUN_100593631(param_1,1);
    lVar4 = FUN_100496019(param_1);
    if (lVar4 == 0) {
      iVar3 = 0;
    }
    else {
      do {
        lVar5 = FUN_1004960d0(lVar4);
        if (*(char *)(lVar4 + 0x83) == '\0') {
          lVar4 = FUN_1004968c5(lVar4);
          while (lVar1 = lVar4, lVar1 != 0) {
            lVar4 = FUN_100496985(lVar1);
            if (*(char *)(lVar1 + 0x50) != '\0') {
              FUN_100497f5f(lVar1);
            }
          }
        }
        else {
          if (param_4 != '\0') {
            FUN_1005931e8(lVar4);
          }
          FUN_100496ab1(lVar4);
        }
        iVar3 = FUN_1001ceb24(param_3,param_2,0,0,0);
        if (iVar3 != 0) {
          if (iVar3 != -0x80) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          break;
        }
        lVar4 = lVar5;
      } while (lVar5 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

