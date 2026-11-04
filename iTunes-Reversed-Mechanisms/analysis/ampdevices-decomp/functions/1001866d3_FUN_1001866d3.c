// name: FUN_1001866d3
// address: 1001866d3

int FUN_1001866d3(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_148;
  undefined8 local_140;
  long lStack_138;
  undefined8 local_130;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8 [2];
  long local_e8 [4];
  long *local_c8;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined1 local_98 [12];
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  undefined1 local_78 [16];
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_c8 = (long *)0x0;
  local_f8[0] = 0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = 0;
  local_78 = (undefined1  [16])0x0;
  local_98 = SUB1612((undefined1  [16])0x0,0);
  uStack_8c = 0;
  local_88 = SUB1612((undefined1  [16])0x0,4);
  iVar4 = -0x592;
  if (((*(char *)(param_1 + 0xb) == '\0') &&
      (((local_108 = param_3, local_100 = param_1, *(char *)(param_1 + 7) == '\0' ||
        (*(long *)(param_4 + 0x28) == 0)) &&
       ((*(byte *)(*(long *)(param_1 + 0x2b8) + 0x427) & 1) != 0)))) &&
     (cVar3 = FUN_10017ec13(param_2,param_5), cVar3 != '\0')) {
    FUN_1001c62d9(local_f8,0xc0);
    if (*(char *)(local_100 + 3) == '\0') {
      iVar4 = FUN_1001e8dd6(local_88,0,0);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) goto LAB_100186879;
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          FUN_10068c7cb(iVar4,uVar6);
        }
      }
    }
    else {
      iVar4 = FUN_1001e96d3(local_98,0,0);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
LAB_100186879:
          lVar5 = *(long *)(local_100 + 0x48);
          if (*(long *)(local_100 + 0x48) == 0) {
            iVar4 = FUN_1001ecfab(1,"",&local_a0,0);
            if (iVar4 == -0x80) {
              iVar4 = -0x80;
            }
            else {
              lVar5 = local_a0;
              if (iVar4 == 0) goto LAB_100186894;
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 != '\0') {
                FUN_10068c75f(iVar4,uVar6);
              }
            }
          }
          else {
LAB_100186894:
            local_a0 = lVar5;
            lVar5 = *(long *)(param_4 + 0x28) + *(long *)(param_4 + 0x20);
            if (*(char *)(local_100 + 0xd) == '\0') {
LAB_1001868f7:
              local_68 = local_100;
              local_48 = param_7;
              local_40 = 1;
              local_b8._0_8_ = FUN_10018b9e0;
              local_60 = param_2;
              local_58 = param_5;
              local_50 = param_6;
              iVar4 = FUN_1001ecf95(local_a0);
              if (iVar4 != -0x80) {
                if (iVar4 == 0) {
                  if (*(char *)(local_100 + 3) == '\0') {
                    iVar4 = FUN_1001e944c(local_88);
                    if (iVar4 != -0x80) {
                      if (iVar4 == 0) goto LAB_100186ae0;
                      uVar6 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(uVar6,0x10);
                      if (cVar3 != '\0') {
                        FUN_10068c687(iVar4,uVar6);
                      }
                    }
                  }
                  else {
                    iVar4 = FUN_1001e9afc(local_98);
                    if (iVar4 != -0x80) {
                      if (iVar4 == 0) {
LAB_100186ae0:
                        iVar2 = local_40;
                        lVar1 = local_100;
                        if (local_40 == 0) {
                          *(long *)(local_100 + 0x290) = *(long *)(local_100 + 0x290) + lVar5;
                          *(long *)(local_100 + 0x2d8) = *(long *)(local_100 + 0x2d8) + lVar5;
                          FUN_1001c62d9(&local_148,0x40);
                          local_148 = CONCAT44(local_148._4_4_,1);
                          local_140 = *(long *)(lVar1 + 0x2d8) + *(long *)(lVar1 + 0x290);
                          lStack_138 = *(long *)(lVar1 + 0x2e0) + *(long *)(lVar1 + 0x298);
                          local_130 = local_108;
                          iVar4 = (**(code **)(lVar1 + 0x30))
                                            (0x70726f67,&local_148,*(undefined8 *)(lVar1 + 0x38));
                          if (iVar4 != -0x80) {
                            if (iVar4 == 0) goto LAB_100186bd7;
                            uVar6 = FUN_1001cc310();
                            cVar3 = _os_log_type_enabled(uVar6,0x10);
                            if (cVar3 != '\0') {
                              FUN_10068c539(iVar4,uVar6);
                            }
                          }
                        }
                        else {
                          if (local_40 == 1) {
                            uVar6 = FUN_1001cc310();
                            cVar3 = _os_log_type_enabled(uVar6,0x10);
                            if (cVar3 != '\0') {
                              FUN_10068c5a5(uVar6);
                            }
                            FUN_1001782e9(0,0);
                          }
LAB_100186bd7:
                          iVar4 = iVar2;
                          if (*(char *)(local_100 + 0xd) != '\0') {
                            FUN_1001c62d9(&local_148,0x40);
                            local_148 = param_7;
                            local_140._0_5_ = CONCAT14(1,iVar2);
                            iVar4 = (**(code **)(local_100 + 0x30))
                                              (0x73746f70,&local_148,
                                               *(undefined8 *)(local_100 + 0x38));
                            if ((iVar4 != -0x80) && (iVar4 != 0)) {
                              uVar6 = FUN_1001cc310();
                              cVar3 = _os_log_type_enabled(uVar6,0x10);
                              if (cVar3 != '\0') {
                                FUN_10068c61b(iVar4,uVar6);
                              }
                            }
                          }
                        }
                      }
                      else {
                        uVar6 = FUN_1001cc310();
                        cVar3 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar3 != '\0') {
                          FUN_10068c4cd(iVar4,uVar6);
                        }
                      }
                    }
                  }
                }
                else {
                  uVar6 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar3 != '\0') {
                    FUN_10068c6f3(iVar4,uVar6);
                  }
                }
              }
            }
            else {
              FUN_1001c62d9(&local_148,0x40);
              local_148 = param_7;
              local_140 = lVar5;
              iVar4 = (**(code **)(local_100 + 0x30))
                                (0x73747274,&local_148,*(undefined8 *)(local_100 + 0x38));
              if (iVar4 != -0x80) {
                if (iVar4 == 0) goto LAB_1001868f7;
                uVar6 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar6,0x10);
                if (cVar3 != '\0') {
                  FUN_10068c461(iVar4,uVar6);
                }
              }
            }
          }
          if (*(char *)(local_100 + 3) == '\0') {
            FUN_1001e9587(local_88);
          }
          else {
            FUN_1001e9bb5(local_98);
          }
          if (local_a0 != *(long *)(local_100 + 0x48)) {
            FUN_1001ecf9f();
          }
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            FUN_10068c3f5(iVar4,uVar6);
          }
        }
      }
    }
  }
  if (local_c8 == local_e8) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    if (local_c8 == (long *)0x0) goto LAB_10018682d;
  }
  (**(code **)(*local_c8 + lVar5))();
LAB_10018682d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

