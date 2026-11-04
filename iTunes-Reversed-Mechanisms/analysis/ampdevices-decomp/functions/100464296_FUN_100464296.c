// name: FUN_100464296
// address: 100464296

void FUN_100464296(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 local_4c8;
  char *local_4c4;
  undefined2 local_4bc;
  undefined4 local_4a8;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10016ff43(DAT_1008c4d90);
  if (lVar3 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_46a = "sourceURL != nullptr";
LAB_100464532:
      local_46c = 0x822;
      local_474 = "Assertion failure";
      local_478 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
  }
  else {
    lVar4 = FUN_100174b20(DAT_1008c4d90,lVar3);
    if (lVar4 != 0) {
      lVar5 = FUN_100174aad(DAT_1008c4d90,lVar4,&cf_AAE);
      if (lVar5 == 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_478 = 0x8220202;
          local_474 = "Assertion failure";
          local_46c = 0x822;
          local_46a = "aaeURL != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
        }
        lVar5 = 0;
      }
      else {
        cVar1 = FUN_10016ffd2(lVar5,&local_478,0);
        if (cVar1 != '\0') {
          iVar2 = FUN_10017d477(&local_478,&local_4c8,0);
          if (iVar2 != 0) goto LAB_100464422;
          lVar6 = FUN_1004993ef(param_1,8,0,1);
          if (lVar6 == 0) {
            lVar6 = FUN_100499159(param_1,8,0);
            if (lVar6 == 0) {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              if (cVar1 != '\0') {
                puVar9 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                pcVar8 = "sourceAAEImageInstance != nullptr";
                goto LAB_100464617;
              }
              goto LAB_100464419;
            }
            *(undefined4 *)(lVar6 + 0x3c) = local_4a8;
            *(undefined4 *)(lVar6 + 0x40) = local_4a8;
          }
          else {
            *(undefined1 *)(lVar6 + 0x50) = 0;
          }
          iVar2 = FUN_10049a09d(lVar6,&local_478,0,0);
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = iVar2;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          goto LAB_100464422;
        }
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          puVar9 = &local_4c8;
          local_4c8 = 0x8220202;
          local_4c4 = "Assertion failure";
          local_4bc = 0x822;
          pcVar8 = "JRCFURLGetJRFileSpec( aaeURL, &aaeFileSpec )";
LAB_100464617:
          *(char **)((long)puVar9 + 0xe) = pcVar8;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",puVar9,0x16);
        }
      }
LAB_100464419:
      FUN_1001782e9(0,0);
      goto LAB_100464422;
    }
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_46a = "baseURL != nullptr";
      goto LAB_100464532;
    }
  }
  lVar5 = 0;
  FUN_1001782e9(0,0);
  lVar4 = 0;
LAB_100464422:
  FUN_10017060f(lVar5);
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

