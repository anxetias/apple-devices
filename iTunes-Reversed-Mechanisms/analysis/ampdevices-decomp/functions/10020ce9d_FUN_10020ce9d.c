// name: FUN_10020ce9d
// address: 10020ce9d

int FUN_10020ce9d(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10020cfc5:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "TrackDataIsValid(trackData)";
LAB_10020d08b:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10020cfc5;
    }
    cVar1 = FUN_10017cbd0(param_2);
    if (cVar1 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4a = "JRFileSpecIsValid(archiveFileSpec)";
        goto LAB_10020d08b;
      }
    }
    else {
      lVar5 = FUN_1004de07b(param_1);
      if (lVar5 != 0) {
        lVar6 = FUN_10020a12e(param_2);
        if (lVar6 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "appInfoDict != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar3 = 0x4e2;
        }
        else {
          lVar7 = FUN_100166c1b(lVar6,&cf_Identifier);
          if (lVar7 == 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "appIdentifier != nullptr";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            iVar3 = 0x4e3;
          }
          else {
            lVar8 = FUN_1004ecb06(lVar5,lVar6);
            iVar3 = 0;
            if (lVar8 == 1) {
              FUN_100169174(lVar6,&cf_Location,param_2);
              cVar1 = FUN_10020c766(lVar6,lVar5 + 0x15448);
              if (*(char *)(lVar5 + 0x3a2) == '\0') {
                uVar2 = FUN_10050582c(lVar5,lVar7);
                iVar3 = FUN_100405a22(param_1,lVar6,uVar2,0,0);
                if ((iVar3 == 0) && (cVar1 != '\0')) {
                  iVar3 = FUN_1004ef324(lVar5,4,1);
                }
              }
              else {
                FUN_1001709a5(*(undefined8 *)(lVar5 + 0x167c8),lVar6);
                *(undefined1 *)(lVar5 + 0x1684c) = 1;
              }
            }
          }
        }
        FUN_10017060f(lVar6);
        goto LAB_10020d0bf;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4a = "handlerData != nullptr";
        goto LAB_10020d08b;
      }
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10020d0bf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

