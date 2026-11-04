// name: FUN_100185d7d
// address: 100185d7d

int FUN_100185d7d(long param_1,void *param_2,undefined8 param_3,undefined8 param_4,int *param_5,
                 void *param_6)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  int *local_578;
  undefined1 local_570;
  undefined1 local_56f;
  long local_568;
  undefined1 local_538 [3];
  char local_535;
  void *local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  int *local_4d0;
  int *local_4c8;
  void *local_4c0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  void *local_498;
  undefined8 local_490;
  void *local_488;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  int *local_470;
  long local_468;
  char local_45a;
  char local_459;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_47c = 0;
  local_4a8 = param_3;
  local_4a0 = param_4;
  local_498 = param_2;
  local_488 = param_6;
  local_470 = param_5;
  lVar6 = FUN_1001c63e1(0x200);
  lVar7 = FUN_1001c63e1(0x200);
  pvVar8 = (void *)FUN_1001c63e1(0x420);
  lVar9 = FUN_1001c63e1(0x58);
  if (lVar6 == 0) {
    uVar10 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar10,0x10);
    if (cVar4 != '\0') {
      FUN_10068c21d(uVar10);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x6c;
    if (lVar7 == 0) goto LAB_100185f81;
  }
  else if (lVar7 == 0) {
    uVar10 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar10,0x10);
    if (cVar4 != '\0') {
      FUN_10068c1a7(uVar10);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x6c;
    lVar7 = lVar6;
  }
  else {
    if (pvVar8 == (void *)0x0) {
      uVar10 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar10,0x10);
      if (cVar4 != '\0') {
        FUN_10068c131(uVar10);
      }
LAB_100185f62:
      FUN_1001782e9(0,0);
      iVar5 = -0x6c;
    }
    else {
      if (lVar9 == 0) {
        uVar10 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar10,0x10);
        if (cVar4 != '\0') {
          FUN_10068c0bb(uVar10);
        }
        goto LAB_100185f62;
      }
      cVar4 = FUN_100186527(param_1,local_498,local_4a0,local_4a8,local_470,local_458,local_538,
                            lVar6);
      if (cVar4 == '\0') {
        iVar5 = 0;
        if (local_488 != (void *)0x0) {
          FUN_1001c62d9(local_488,0x420);
        }
      }
      else {
        local_468 = param_1;
        iVar5 = FUN_100186606(local_458,lVar9);
        if (iVar5 != -0x80) {
          if (iVar5 == 0) {
            if (*(char *)(local_468 + 8) == '\0') {
              FUN_10018e939(lVar9,&local_478,&local_474);
            }
            else {
              local_478 = 0;
              local_474 = 0;
            }
            FUN_1001c62d9(&local_4e8,0x40);
            local_4e8 = local_498;
            local_4e0 = local_4a0;
            local_4d8 = local_4a8;
            local_4d0 = local_470;
            iVar5 = (**(code **)(local_468 + 0x30))
                              (0x62656763,&local_4e8,*(undefined8 *)(local_468 + 0x38));
            lVar2 = local_468;
            if (iVar5 != -0x80) {
              if (iVar5 == 0) {
                if (*(char *)(local_468 + 0x2cc) == '\0') {
                  FUN_10018e8ed(lVar9,0x627a7920,local_474);
                  FUN_10018e867(lVar9,&local_47c);
                  FUN_10018e8ab(lVar9,*(undefined4 *)(lVar2 + 0x50));
                }
                if (*(int *)(lVar2 + 0x2d0) == 0) {
                  FUN_10018e991(lVar9,0,0);
                }
                local_45a = *(char *)(lVar2 + 2) != '\0';
                local_459 = local_535;
                FUN_1001e1c39(lVar6,lVar7);
                local_490 = CONCAT44(local_490._4_4_,*(undefined4 *)(lVar2 + 0x2d0));
                FUN_1001c62d9(&local_578,0x40);
                local_56f = (int)local_490 == 0;
                local_459 = local_459 == '\0';
                local_578 = local_470;
                local_570 = 0;
                local_568 = lVar7;
                iVar5 = (**(code **)(local_468 + 0x30))
                                  (0x6e616d65,&local_578,*(undefined8 *)(local_468 + 0x38));
                piVar1 = local_470;
                if (iVar5 != -0x80) {
                  if (iVar5 == 0) {
                    iVar5 = FUN_1001866d3(local_468,local_458,lVar6,local_538,local_470,lVar7,pvVar8
                                         );
                    if (iVar5 == 0) {
                      if (*(char *)(local_468 + 0x2cc) == '\0') {
                        if (*(char *)(local_468 + 5) != '\0') {
                          FUN_100186d13(pvVar8,0);
                        }
LAB_100186307:
                        if (*(char *)(local_468 + 0x2cc) == '\0') {
LAB_1001863f8:
                          cVar3 = local_459;
                          cVar4 = local_45a;
                          if (*(char *)(local_468 + 4) != '\0') {
                            FUN_100186d13(pvVar8,1);
                          }
                          if (cVar4 == '\0' && cVar3 == '\0') {
                            FUN_100186f18(pvVar8);
                          }
                          else {
                            FUN_100184bee();
                          }
                        }
                      }
LAB_10018642d:
                      iVar5 = 0;
                      if (local_488 != (void *)0x0) {
                        _memcpy(local_488,pvVar8,0x420);
                      }
                    }
                    else {
                      iVar5 = FUN_10018156b(piVar1,lVar7,local_474,local_478,pvVar8);
                      if (iVar5 == 0) {
LAB_10018634a:
                        lVar2 = local_468;
                        if (*(char *)(local_468 + 8) == '\0') {
                          FUN_100186e4b(pvVar8,lVar9);
                        }
                        if (local_535 != '\0') {
                          FUN_100184bee(pvVar8);
                        }
                        if ((*(char *)(lVar2 + 0x2cc) == '\0') && (*(char *)(lVar2 + 5) != '\0')) {
                          FUN_100186d13(pvVar8,0);
                        }
                        iVar5 = FUN_100184fcd(lVar2,local_458,lVar6,pvVar8,0);
                        if (iVar5 == 0) {
                          if (*(char *)(local_468 + 0x2cc) == '\0') {
                            if (*(char *)(local_468 + 8) == '\0') {
                              FUN_10018e8ed(lVar9,local_478,local_474);
                              FUN_10018e8ab(lVar9,local_47c);
                              iVar5 = FUN_100186e4b(pvVar8,lVar9);
                              if ((iVar5 != -0x80) && (iVar5 != 0)) {
                                local_490 = FUN_1001cc310();
                                cVar4 = _os_log_type_enabled(local_490,0x10);
                                if (cVar4 != '\0') {
                                  FUN_10068bf0b(iVar5,local_490);
                                }
                              }
                              goto LAB_100186307;
                            }
                            goto LAB_1001863f8;
                          }
                          goto LAB_10018642d;
                        }
                      }
                      else if (*(int *)(local_468 + 0x2d0) == 0) {
                        if (*(char *)(local_468 + 0xf) == '\x03') {
                          if (*local_470 == 0x41464350) {
                            iVar5 = FUN_10017ecc9(local_470,lVar7,pvVar8,0);
                            goto LAB_100186343;
                          }
                        }
                        else if ((*(char *)(local_468 + 0xf) == '\x02') &&
                                (iVar5 = FUN_100186db9(local_468,local_470,lVar7), iVar5 == 0)) {
                          iVar5 = FUN_10018156b(local_470,lVar7,local_474,local_478,pvVar8);
LAB_100186343:
                          if (iVar5 == 0) goto LAB_10018634a;
                        }
                      }
                      FUN_1001c62d9(&local_4e8,0x40);
                      local_4e8 = pvVar8;
                      (**(code **)(local_468 + 0x30))
                                (0x64656c66,&local_4e8,*(undefined8 *)(local_468 + 0x38));
                    }
                  }
                  else {
                    local_488 = (void *)FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(local_488,0x10);
                    if (cVar4 != '\0') {
                      FUN_10068bf77(iVar5,local_488);
                    }
                  }
                }
                FUN_1001c62d9(&local_4e8,0x40);
                local_4e8 = local_498;
                local_4e0 = local_4a0;
                local_4d8 = local_4a8;
                local_4c8 = local_470;
                local_4d0 = (int *)CONCAT44(local_4d0._4_4_,iVar5);
                local_4c0 = pvVar8;
                (**(code **)(local_468 + 0x30))
                          (0x656e6463,&local_4e8,*(undefined8 *)(local_468 + 0x38));
              }
              else {
                local_470 = (int *)FUN_1001cc310();
                cVar4 = _os_log_type_enabled(local_470,0x10);
                if (cVar4 != '\0') {
                  FUN_10068bfe3(iVar5,local_470);
                }
              }
            }
          }
          else {
            local_470 = (int *)FUN_1001cc310();
            cVar4 = _os_log_type_enabled(local_470,0x10);
            if (cVar4 != '\0') {
              FUN_10068c04f(iVar5,local_470);
            }
          }
        }
      }
    }
    FUN_1001c64c1(lVar7);
    lVar7 = lVar6;
  }
  FUN_1001c64c1(lVar7);
LAB_100185f81:
  if (lVar9 != 0) {
    FUN_1001c64c1(lVar9);
  }
  if (pvVar8 != (void *)0x0) {
    FUN_1001c64c1(pvVar8);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

