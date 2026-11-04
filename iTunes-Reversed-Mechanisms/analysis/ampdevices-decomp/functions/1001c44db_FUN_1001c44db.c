// name: FUN_1001c44db
// address: 1001c44db

int FUN_1001c44db(char *param_1,long param_2,long param_3,long param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  if (param_1 == (char *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7808(uVar5);
    }
  }
  else if (*param_1 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7792(uVar5);
    }
  }
  else if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006a771c(uVar5);
    }
  }
  else {
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
      iVar2 = _IOMasterPort(0,&local_40);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 != 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006a763a(iVar2,uVar5);
        return iVar2;
      }
      lVar4 = _IOBSDNameMatching(local_40,0,param_1);
      if (lVar4 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006a75c4(uVar5);
        }
        FUN_1001782e9(0,0);
      }
      else {
        local_3c = 0;
        iVar2 = _IOServiceGetMatchingServices(local_40,lVar4);
        if (iVar2 == -0x80) {
          return -0x80;
        }
        if (iVar2 != 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 == '\0') {
            return iVar2;
          }
          FUN_1006a7558(iVar2,uVar5);
          return iVar2;
        }
        if (local_3c != 0) {
          iVar2 = _IOIteratorNext();
          if (iVar2 == 0) {
            iVar3 = -0x2b;
          }
          else {
            while (iVar3 = _IORegistryEntryGetParentEntry(iVar2,"IOService",&local_34), iVar3 == 0)
            {
              local_38 = iVar2;
              iVar2 = _IOObjectConformsTo(local_34,param_2);
              if (((iVar2 != 0) ||
                  ((param_3 != 0 && (iVar2 = _IOObjectConformsTo(local_34,param_3), iVar2 != 0))))
                 || ((param_4 != 0 && (iVar2 = _IOObjectConformsTo(local_34,param_4), iVar2 != 0))))
              {
                *param_5 = local_34;
                iVar3 = 0;
                iVar2 = local_38;
                break;
              }
              _IOObjectRelease(local_38);
              iVar2 = local_34;
            }
            _IOObjectRelease(iVar2);
          }
          _IOObjectRelease(local_3c);
          return iVar3;
        }
      }
      return -0x2b;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006a76a6(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

