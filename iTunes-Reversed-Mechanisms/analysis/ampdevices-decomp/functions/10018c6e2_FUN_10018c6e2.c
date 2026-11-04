// name: FUN_10018c6e2
// address: 10018c6e2

int FUN_10018c6e2(long param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_c18 [1056];
  undefined1 local_7f8 [1056];
  undefined1 local_3d8 [80];
  undefined1 local_388 [80];
  undefined1 local_338 [32];
  undefined2 local_318;
  undefined1 local_316 [514];
  undefined1 local_114 [2];
  short local_112;
  undefined1 local_80 [80];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100691da7(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
  }
  else {
    sVar2 = _FSGetCatalogInfo(param_1,4,local_114,0,0,0);
    iVar4 = -0x80;
    iVar5 = iVar4;
    if (sVar2 == 0) {
      sVar2 = _FSFindFolder((int)local_112,param_2,1,local_80);
      if (sVar2 == 0) {
        sVar2 = _FSMoveObject(param_1,local_80,param_3);
        if (sVar2 != 0) {
          if (sVar2 == -0x80) goto LAB_10018c795;
          if (sVar2 != -0x30) {
            iVar5 = (int)sVar2;
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_100691c63(iVar5,uVar3);
            }
            goto LAB_10018c795;
          }
          sVar2 = _FSGetCatalogInfo(param_1,0,0,&local_318,0,local_388);
          if (sVar2 != 0) {
            if (sVar2 != -0x80) {
              iVar5 = (int)sVar2;
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                FUN_100691bf7(iVar5,uVar3);
              }
            }
            goto LAB_10018c795;
          }
          FUN_1001e40a7(&local_318,&local_318,local_338);
          iVar5 = FUN_10018e6ca(local_388,local_7f8);
          if (iVar5 == -0x80) goto LAB_10018c795;
          if (iVar5 != 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_100691b8b(iVar5,uVar3);
            }
            goto LAB_10018c795;
          }
          iVar5 = FUN_10018e6ca(local_80,local_c18);
          if (iVar5 == -0x80) goto LAB_10018c795;
          if (iVar5 != 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_100691b1f(iVar5,uVar3);
            }
            goto LAB_10018c795;
          }
          iVar5 = FUN_10017f946(local_7f8,local_c18,&local_318,local_338,&local_318);
          if (iVar5 == -0x80) goto LAB_10018c795;
          if (iVar5 != 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_100691ab3(iVar5,uVar3);
            }
            goto LAB_10018c795;
          }
          sVar2 = _FSRenameUnicode(param_1,local_318,local_316,0xffff,local_3d8);
          if (sVar2 != 0) {
            iVar5 = iVar4;
            if (sVar2 != -0x80) {
              iVar5 = (int)sVar2;
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                FUN_100691a47(iVar5,uVar3);
              }
            }
            goto LAB_10018c795;
          }
          sVar2 = _FSMoveObject(local_3d8,local_80,param_3);
          if (sVar2 != 0) {
            iVar5 = iVar4;
            if (sVar2 != -0x80) {
              iVar5 = (int)sVar2;
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                FUN_1006919db(iVar5,uVar3);
              }
            }
            goto LAB_10018c795;
          }
        }
        iVar5 = 0;
        _FNNotify(local_80,1,0);
      }
      else if (sVar2 != -0x80) {
        iVar5 = (int)sVar2;
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_100691ccf(iVar5,uVar3);
        }
      }
    }
    else if (sVar2 != -0x80) {
      iVar5 = (int)sVar2;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100691d3b(iVar5,uVar3);
      }
    }
  }
LAB_10018c795:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

