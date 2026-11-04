// name: FUN_1005382c5
// address: 1005382c5

undefined8 FUN_1005382c5(long param_1,undefined1 *param_2,undefined4 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "voiceOverLanguage != nullptr";
LAB_10053852d:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != 0) {
      lVar4 = 7;
      pcVar6 = "en-US";
      do {
        cVar1 = FUN_1001df957(param_1,pcVar6,0);
        if (cVar1 != '\0') {
          cVar1 = FUN_100537fc1(pcVar6 + 8);
          if (cVar1 != '\0') {
            FUN_1001dfbb3(pcVar6 + 8,param_2,param_3);
            uVar3 = 1;
            goto LAB_1005384ad;
          }
        }
        pcVar6 = pcVar6 + 0x10;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      FUN_1001dfbb3(param_1,local_68,0x10);
      uVar3 = 0;
      FUN_1001dfe36(local_68,0x2d,0);
      lVar4 = FUN_1002f463c();
      lVar4 = FUN_1001705fc(*(undefined8 *)(lVar4 + 200));
      if (lVar4 != 0) {
        lVar2 = FUN_10017076e(lVar4);
        if (0 < lVar2) {
          lVar5 = 0;
          do {
            cVar1 = FUN_100164b00(lVar4,lVar5,local_78,0x10);
            if (cVar1 == '\0') {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = 
                "JRCFArrayGetCStringAtIndex(supportedLanguages, supportedLanguageIndex, supportedLanguage, sizeof(supportedLanguage))"
                ;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            else {
              cVar1 = FUN_1001e3580(local_78,local_68,0);
              if (cVar1 != '\0') {
                FUN_1001dfbb3(local_78,param_2,param_3);
                uVar3 = 1;
                goto LAB_1005384ff;
              }
            }
            lVar5 = lVar5 + 1;
          } while (lVar2 != lVar5);
        }
        uVar3 = 0;
LAB_1005384ff:
        FUN_10017060f(lVar4);
      }
      goto LAB_1005384ad;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "deviceLocale != nullptr";
      goto LAB_10053852d;
    }
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1005384ad:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

