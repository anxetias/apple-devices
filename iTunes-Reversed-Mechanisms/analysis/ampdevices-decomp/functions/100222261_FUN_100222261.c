// name: FUN_100222261
// address: 100222261

undefined8 FUN_100222261(undefined8 param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_100166844(param_1,&cf_BuildIdentities);
  if (lVar3 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_4a = "buildIdentitiesArray != nullptr";
LAB_1002224d1:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1002224f6:
    FUN_1001782e9(0,0);
  }
  else {
    pcVar8 = &cf_Update;
    if (param_4 != '\0') {
      pcVar8 = &cf_Erase;
    }
    lVar4 = FUN_10017076e(lVar3);
    if (0 < lVar4) {
      lVar4 = 0;
      do {
        lVar5 = FUN_10016499b(lVar3,lVar4);
        if (lVar5 == 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 == '\0') goto LAB_1002224f6;
          local_4a = "entryDictionary != nullptr";
          goto LAB_1002224d1;
        }
        lVar6 = FUN_100166c1b(lVar5,&cf_ApBoardID);
        if (lVar6 == 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 == '\0') goto LAB_1002224f6;
          local_4a = "entryBoardIDString != nullptr";
          goto LAB_1002224d1;
        }
        iVar2 = FUN_100222552(lVar6);
        if (iVar2 == param_2) {
          lVar6 = FUN_100166c1b(lVar5,&cf_ApChipID);
          if (lVar6 == 0) {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            if (cVar1 == '\0') goto LAB_1002224f6;
            local_4a = "entryChipIDString != nullptr";
            goto LAB_1002224d1;
          }
          iVar2 = FUN_100222552(lVar6);
          if (iVar2 == param_3) {
            lVar5 = FUN_100166b7f(lVar5,&cf_Info);
            if (lVar5 == 0) {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              if (cVar1 == '\0') goto LAB_1002224f6;
              local_4a = "entryInfoDictionary != nullptr";
              goto LAB_1002224d1;
            }
            uVar7 = FUN_100166c1b(lVar5,&cf_RestoreBehavior);
            cVar1 = FUN_100169da8(uVar7,pcVar8);
            if (cVar1 != '\0') {
              if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
                uVar7 = FUN_100166c1b(lVar5,&cf_MobileDeviceMinVersion);
                return uVar7;
              }
              goto LAB_10022254d;
            }
          }
        }
        lVar4 = lVar4 + 1;
        lVar5 = FUN_10017076e(lVar3);
      } while (lVar4 < lVar5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0;
  }
LAB_10022254d:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

