// name: FUN_1005f99a6
// address: 1005f99a6

long FUN_1005f99a6(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  if (lVar2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_4a = "protectedFilesArray != __null";
LAB_1005f9ba5:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar3 = FUN_100166844(param_1,&cf_Files);
    if (lVar3 != 0) {
      lVar4 = FUN_10017076e(lVar3);
      if (0 < lVar4) {
        lVar8 = 0;
        do {
          lVar5 = FUN_10016499b(lVar3,lVar8);
          if (lVar5 == 0) {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            if (cVar1 == '\0') goto LAB_1005f9bca;
            local_4a = "fileDictionary != nullptr";
            goto LAB_1005f9ba5;
          }
          lVar6 = FUN_100166c1b(lVar5,&cf_Path);
          if (lVar6 == 0) {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            if (cVar1 == '\0') goto LAB_1005f9bca;
            local_4a = "filePath != nullptr";
            goto LAB_1005f9ba5;
          }
          lVar5 = FUN_1001668a7(lVar5,&cf_DRM);
          if ((lVar5 != 0) && (cVar1 = FUN_100171f12(lVar5), cVar1 != '\0')) {
            FUN_1001709a5(lVar2,lVar6);
          }
          lVar8 = lVar8 + 1;
        } while (lVar4 != lVar8);
      }
      goto LAB_1005f9bdd;
    }
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_4a = "filesArray != nullptr";
      goto LAB_1005f9ba5;
    }
  }
LAB_1005f9bca:
  FUN_1001782e9(0,0);
  FUN_10017060f(lVar2);
  lVar2 = 0;
LAB_1005f9bdd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar2;
}

