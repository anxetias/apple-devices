// name: FUN_1003d3d76
// address: 1003d3d76

int FUN_1003d3d76(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_878 [1056];
  undefined1 local_458 [512];
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar5 = FUN_10017d5ba(param_2 + 4000,local_878);
  if (iVar5 == -0x80) goto LAB_1003d40dc;
  if (iVar5 == 0) {
    iVar6 = *(int *)(param_2 + 8);
    iVar2 = *(int *)(param_2 + 0x30);
    plVar1 = (long *)(param_1 + 0x420);
    FUN_1001c62d9(param_1,0x420);
    *(undefined8 *)(param_1 + 0x420) = 0;
    FUN_1001e04f5("PhotoDatabaseReserve",&local_258);
    FUN_1001e04f5("tmp",local_458);
    iVar5 = FUN_10053600d(local_878,&local_258,local_458,&local_258);
    if (iVar5 == -0x80) {
LAB_1003d3f76:
      bVar3 = false;
    }
    else if (iVar5 == 0) {
      iVar5 = FUN_1001891ea(local_878,&local_258,param_1);
      if (iVar5 == -0x80) goto LAB_1003d3f76;
      if (iVar5 != 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
          goto LAB_1003d423e;
        }
        goto LAB_1003d3fe8;
      }
      iVar5 = FUN_10017cc65(param_1,0x64617461,3,plVar1);
      if (iVar5 != -0x80) {
        if (iVar5 == 0) {
          iVar5 = FUN_10017cf3c(*plVar1,(ulong)(uint)((iVar2 * 0x100 + 0x100) * iVar6) + 1000000);
          bVar3 = true;
          if ((iVar5 != -0x80) && (iVar5 != 0)) {
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
              goto LAB_1003d415b;
            }
          }
        }
        else {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          bVar3 = true;
          if (cVar4 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_1003d415b:
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            bVar3 = true;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        goto LAB_1003d3feb;
      }
      bVar3 = true;
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_1003d423e:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
LAB_1003d3fe8:
      bVar3 = false;
LAB_1003d3feb:
      if (iVar5 == -0x22) {
        iVar5 = 0x456;
      }
      else if (iVar5 == 0) {
        iVar5 = 0;
        goto LAB_1003d40dc;
      }
    }
    if (*plVar1 != 0) {
      iVar6 = FUN_10017cdfb();
      if (iVar6 != 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "JRFileClose(*outReservationFileRefNum) == noErr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *plVar1 = 0;
    }
    if ((bVar3) && (iVar6 = FUN_100182d4d(param_1), iVar6 != 0)) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "JRFileSpecDelete(outReservationFileSpec) == noErr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if ((iVar5 == -0x80) || (iVar5 == 0)) goto LAB_1003d40dc;
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
  }
  else {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
  }
  if (cVar4 != '\0') {
    local_24c = 0x400;
    local_254 = "Assertion failure";
    local_258 = 0x8220202;
    local_24a = iVar5;
    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_258,0x12);
  }
LAB_1003d40dc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

