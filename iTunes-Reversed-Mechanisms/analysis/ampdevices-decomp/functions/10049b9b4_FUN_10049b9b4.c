// name: FUN_10049b9b4
// address: 10049b9b4

long FUN_10049b9b4(long param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_68;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100495380();
  if (cVar1 == '\0') {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_4a = "ITImageLibraryIsValid(imageLibrary)";
LAB_10049bbe3:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  else {
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      lVar3 = FUN_1001734f5(DAT_1008c4d90,param_2,0x8000100,
                            *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
      if (lVar3 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "cfName != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        FUN_1001dccc7(param_1 + 0x70);
        lVar4 = FUN_100496392(param_1);
        while (lVar4 != 0) {
          iVar2 = FUN_1001de13c(*(long *)(lVar4 + 8) + 0x70,*(undefined4 *)(lVar4 + 0x68),&local_68,
                                &local_5c);
          if (iVar2 != 0) {
            if (iVar2 != -0x80) {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            break;
          }
          lVar5 = FUN_100173ab4(DAT_1008c4d90,local_68,(long)local_5c,0x8000100,0);
          if (lVar5 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "cfCurrName != nullptr";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x16);
            }
            lVar5 = 0;
            FUN_1001782e9(0,0);
            goto LAB_10049bb7d;
          }
          cVar1 = FUN_100169eb1(lVar3,lVar5);
          if (cVar1 != '\0') goto LAB_10049bb7d;
          lVar4 = FUN_100496449(lVar4);
          FUN_10017060f(lVar5);
        }
      }
      lVar5 = 0;
      lVar4 = 0;
LAB_10049bb7d:
      FUN_1001dcd18(param_1 + 0x70);
      FUN_10017060f(lVar3);
      FUN_10017060f(lVar5);
      goto LAB_10049bb99;
    }
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_4a = "(name != nullptr) && (name[0] != 0)";
      goto LAB_10049bbe3;
    }
  }
  lVar4 = 0;
  FUN_1001782e9(0,0);
LAB_10049bb99:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

