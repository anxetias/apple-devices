// name: FUN_100631e82
// address: 100631e82

int FUN_100631e82(char *param_1,long param_2,long param_3,long param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_60;
  int local_5c;
  int local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (char *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "driveName != nullptr";
LAB_1006320dc:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  else if (*param_1 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "driveName[0] != 0";
      goto LAB_1006320dc;
    }
  }
  else if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "ioClassName1 != nullptr";
      goto LAB_1006320dc;
    }
  }
  else {
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
      iVar2 = _IOMasterPort(0,&local_60);
      if (iVar2 == -0x80) goto LAB_10063210f;
      if (iVar2 == 0) {
        lVar4 = _IOBSDNameMatching(local_60,0,param_1);
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "bsdRef != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          local_5c = 0;
          iVar2 = _IOServiceGetMatchingServices(local_60,lVar4);
          if (iVar2 == -0x80) goto LAB_10063210f;
          if (iVar2 != 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 == '\0') goto LAB_10063210f;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            goto LAB_10063217c;
          }
          if (local_5c != 0) {
            iVar3 = _IOIteratorNext();
            if (iVar3 == 0) {
              iVar2 = -0x2b;
            }
            else {
              while (iVar2 = _IORegistryEntryGetParentEntry(iVar3,"IOService",&local_58), iVar2 == 0
                    ) {
                iVar2 = _IOObjectConformsTo(local_58,param_2);
                if (((iVar2 != 0) ||
                    ((param_3 != 0 && (iVar2 = _IOObjectConformsTo(local_58,param_3), iVar2 != 0))))
                   || ((param_4 != 0 && (iVar2 = _IOObjectConformsTo(local_58,param_4), iVar2 != 0))
                      )) {
                  *param_5 = local_58;
                  iVar2 = 0;
                  break;
                }
                _IOObjectRelease(iVar3);
                iVar3 = local_58;
              }
              _IOObjectRelease(iVar3);
            }
            _IOObjectRelease(local_5c);
            goto LAB_10063210f;
          }
        }
        iVar2 = -0x2b;
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 == '\0') goto LAB_10063210f;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_10063217c:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_10063210f;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "ioObject != nullptr";
      goto LAB_1006320dc;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10063210f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

