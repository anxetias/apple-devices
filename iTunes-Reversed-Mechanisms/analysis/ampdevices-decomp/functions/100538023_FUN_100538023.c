// name: FUN_100538023
// address: 100538023

undefined1 FUN_100538023(long param_1,long param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "voiceOverLanguage != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar7 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    cVar3 = FUN_100537ef0(0);
    if (cVar3 != '\0') {
      FUN_1001c1ce9(local_68,0x10);
      FUN_1001dfe36(local_68,0x2d,0);
      FUN_1001c1e12(local_78,0x10);
      lVar4 = FUN_1002f463c();
      lVar4 = FUN_1001705fc(*(undefined8 *)(lVar4 + 200));
      if (lVar4 != 0) {
        lVar5 = FUN_10017076e(lVar4);
        bVar2 = true;
        do {
          bVar1 = bVar2;
          if (0 < lVar5) {
            lVar8 = 0;
            do {
              cVar3 = FUN_100164b00(lVar4,lVar8,local_88,0x10);
              if (cVar3 == '\0') {
                uVar6 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar6,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = 
                  "JRCFArrayGetCStringAtIndex(supportedLanguages, supportedLanguageIndex, supportedLanguage, sizeof(supportedLanguage))"
                  ;
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                if (bVar1) {
                  cVar3 = FUN_1001df957(local_88,local_78,0);
                }
                else {
                  cVar3 = FUN_1001e3580(local_88,local_68,0);
                }
                if (cVar3 != '\0') {
                  if (param_1 != 0) {
                    uVar6 = FUN_100170853(lVar4,lVar8);
                    cVar3 = FUN_100164756(param_1,uVar6);
                    if (cVar3 == '\0') goto LAB_100538172;
                  }
                  FUN_1001dfbb3(local_88,param_2,param_3);
                  FUN_10017060f(lVar4);
                  uVar7 = 1;
                  goto LAB_100538250;
                }
              }
LAB_100538172:
              lVar8 = lVar8 + 1;
            } while (lVar5 != lVar8);
          }
          bVar2 = false;
        } while (bVar1);
        FUN_10017060f(lVar4);
      }
    }
    FUN_1001dfbb3("en_US",param_2,param_3);
    uVar7 = 0;
  }
LAB_100538250:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

