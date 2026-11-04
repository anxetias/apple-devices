// name: FUN_1001a6ad8
// address: 1001a6ad8

void FUN_1001a6ad8(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10069e642(uVar5);
    }
  }
  else {
    lVar2 = FUN_1001705e9();
    lVar3 = FUN_100173434();
    if (lVar2 == lVar3) {
      if (param_2 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_10069e5cc(uVar5);
        }
      }
      else {
        lVar2 = FUN_1001705e9(param_2);
        lVar3 = FUN_1001713f5();
        if (lVar2 == lVar3) {
          if (param_3 == 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              FUN_10069e556(uVar5);
            }
          }
          else {
            lVar2 = FUN_1001705e9(param_3);
            lVar3 = FUN_10017070c();
            if (lVar2 == lVar3) {
              lVar2 = FUN_100171475(param_2,*(undefined8 *)PTR__kSCPropNetIPv4Addresses_10082c360);
              if (lVar2 == 0) {
                return;
              }
              lVar3 = FUN_1001705e9(lVar2);
              lVar4 = FUN_10017070c();
              if (lVar3 == lVar4) {
                uVar5 = FUN_10017076e(lVar2);
                FUN_100170664(param_3,lVar2,0,uVar5);
                return;
              }
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                FUN_10069e4e0(uVar5);
              }
            }
            else {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                FUN_10069e46a(uVar5);
              }
            }
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            FUN_10069e3f4(uVar5);
          }
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_10069e37e(uVar5);
      }
    }
  }
  FUN_1001782e9(0,0);
  return;
}

