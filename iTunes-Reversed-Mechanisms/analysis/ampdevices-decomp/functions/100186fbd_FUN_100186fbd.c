// name: FUN_100186fbd
// address: 100186fbd

int FUN_100186fbd(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,int *param_5,
                 void *param_6)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  bool bVar11;
  int *local_120;
  undefined8 local_118;
  undefined8 local_110;
  int *local_108;
  int *local_100;
  int *local_f8;
  undefined8 local_e0;
  char *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  long local_b0;
  long local_a8;
  char local_99;
  long local_98;
  int *local_90;
  char *local_88;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined1 uStack_6f;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  char cStack_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  uint local_60;
  char *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_d0 = 0;
  if (((param_2 == (int *)0x0) || (*(long *)(param_2 + 4) == 0)) ||
     ((*param_2 != 0x41464350 && (*param_2 != 0x504f5358)))) {
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      FUN_10068cf79(uVar8);
    }
  }
  else {
    if (((param_5 != (int *)0x0) && (*(long *)(param_5 + 4) != 0)) &&
       ((*param_5 == 0x41464350 || (*param_5 == 0x504f5358)))) {
      local_e0 = param_4;
      local_98 = param_1;
      FUN_1001c62d9(&local_78,0x40);
      lVar7 = local_98;
      local_78 = SUB84(param_2,0);
      uStack_74 = (undefined4)((ulong)param_2 >> 0x20);
      local_70 = SUB81(param_5,0);
      uStack_6f = (undefined1)((ulong)param_5 >> 8);
      uStack_6e = (undefined2)((ulong)param_5 >> 0x10);
      uStack_6c = (undefined2)((ulong)param_5 >> 0x20);
      uStack_6a = (undefined2)((ulong)param_5 >> 0x30);
      iVar4 = (**(code **)(local_98 + 0x30))(0x66696c66,&local_78,*(undefined8 *)(local_98 + 0x38));
      if ((iVar4 != 0) || (cStack_68 == '\0')) {
        iVar4 = 0;
        if (param_6 != (void *)0x0) {
          FUN_1001c62d9(param_6,0x420);
        }
        goto LAB_100187329;
      }
      *(int *)(lVar7 + 0x2d0) = *(int *)(lVar7 + 0x2d0) + 1;
      local_c0 = param_3;
      piVar5 = (int *)FUN_1001c63e1(0x420);
      pcVar6 = (char *)FUN_1001c63e1(0x50);
      local_88 = (char *)FUN_1001c63e1(0x200);
      local_a8 = FUN_1001c63e1(0x420);
      lVar7 = FUN_1001c63e1(0x58);
      local_d8 = pcVar6;
      local_b0 = lVar7;
      local_90 = piVar5;
      if (piVar5 == (int *)0x0) {
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        if (cVar3 != '\0') {
          FUN_10068ce8d(uVar8);
        }
        FUN_1001782e9(0,0);
        iVar4 = -0x6c;
        lVar7 = local_b0;
        piVar5 = local_90;
LAB_10018740f:
        pcVar6 = local_88;
        if (local_a8 != 0) {
LAB_100187517:
          FUN_1001c64c1(local_a8);
        }
        if (pcVar6 != (char *)0x0) goto LAB_100187521;
      }
      else {
        if (pcVar6 == (char *)0x0) {
          uVar8 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar8,0x10);
          lVar7 = local_b0;
          if (cVar3 != '\0') {
            FUN_10068ce17(uVar8);
          }
LAB_1001873f9:
          FUN_1001782e9(0,0);
          iVar4 = -0x6c;
          piVar5 = local_90;
          goto LAB_10018740f;
        }
        if (local_88 == (char *)0x0) {
          uVar8 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar8,0x10);
          if (cVar3 != '\0') {
            FUN_10068cda1(uVar8);
          }
          goto LAB_1001873f9;
        }
        if (local_a8 != 0) {
          if (lVar7 == 0) {
            uVar8 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar8,0x10);
            pcVar6 = local_88;
            piVar5 = local_90;
            if (cVar3 != '\0') {
              FUN_10068ccb5(uVar8);
            }
            FUN_1001782e9(0,0);
            iVar4 = -0x6c;
          }
          else {
            iVar4 = FUN_100186606(param_2,lVar7);
            pcVar6 = local_88;
            piVar5 = local_90;
            if (iVar4 != -0x80) {
              if (iVar4 == 0) {
                FUN_1001c62d9(&local_120,0x40);
                local_118 = local_e0;
                local_110 = local_c0;
                local_120 = param_2;
                local_108 = param_5;
                iVar4 = (**(code **)(local_98 + 0x30))
                                  (0x62656763,&local_120,*(undefined8 *)(local_98 + 0x38));
                lVar2 = local_98;
                pcVar6 = local_88;
                piVar5 = local_90;
                if (iVar4 != -0x80) {
                  if (iVar4 == 0) {
                    if (*(char *)(local_98 + 0x2cc) == '\0') {
                      FUN_10018e8ab(lVar7,*(undefined4 *)(local_98 + 0x50));
                    }
                    if (*(int *)(lVar2 + 0x2d0) == 1) {
                      FUN_10018e991(lVar7,0,0);
                    }
                    local_d0 = 0;
                    cVar3 = FUN_10018795a(param_5);
                    if (((cVar3 != '\0') && (cVar3 = FUN_10018e085(param_2,0,0), cVar3 != '\0')) &&
                       (*(long *)(lVar2 + 0x2e8) == 0)) {
                      *(long **)(lVar2 + 0x2e8) = &local_d0;
                    }
                    FUN_1001e1c39(local_c0,local_88);
                    local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar2 + 0x2d0));
                    FUN_1001c62d9(&local_78,0x40);
                    uStack_6f = (int)local_b8 == 1;
                    local_78 = SUB84(param_5,0);
                    uStack_74 = (undefined4)((ulong)param_5 >> 0x20);
                    local_70 = 1;
                    cStack_68 = (char)local_88;
                    uStack_67 = (undefined1)((ulong)local_88 >> 8);
                    uStack_66 = (undefined6)((ulong)local_88 >> 0x10);
                    iVar4 = (**(code **)(local_98 + 0x30))
                                      (0x6e616d65,&local_78,*(undefined8 *)(local_98 + 0x38));
                    if (iVar4 == 0) {
                      iVar4 = FUN_100181256(param_5,local_88,local_90);
                      if (iVar4 != 0) {
                        if ((*(int *)(local_98 + 0x2d0) == 1) &&
                           (*(char *)(local_98 + 0xf) == '\x02')) {
                          FUN_1001c62d9(&local_78,0x38);
                          local_78 = SUB84(local_88,0);
                          uStack_74 = (undefined4)((ulong)local_88 >> 0x20);
                          local_60 = (uint)*(byte *)(local_98 + 0x10);
                          local_48 = local_88;
                          iVar4 = FUN_10018166a(param_5,&local_78);
                          lVar7 = local_b0;
                          if (iVar4 == 0) {
                            iVar4 = FUN_100181256(param_5,local_88,local_90);
                            lVar7 = local_b0;
                          }
                        }
                        goto LAB_10018729a;
                      }
LAB_100187622:
                      iVar4 = FUN_100184fcd(local_98,param_2,local_c0,local_90,1);
                      if (iVar4 == 0) {
                        local_99 = *(char *)(local_98 + 9);
                        bVar11 = local_99 != '\0';
                        local_b8 = 0;
                        do {
                          iVar4 = FUN_1001879bd(param_2,0,&local_c8);
                          pcVar6 = local_d8;
                          if (iVar4 != 0) {
LAB_10018783a:
                            local_7c = iVar4;
                            bVar11 = false;
                            lVar7 = local_b0;
                            goto LAB_100187844;
                          }
LAB_1001876a2:
                          do {
                            pcVar9 = local_88;
                            iVar4 = FUN_100187bea(local_c8,local_a8,pcVar6,local_88);
                            if (iVar4 != 0) {
                              if ((iVar4 != -5000) && (iVar4 != -0x589)) goto LAB_1001877bc;
                              FUN_100187c42(local_c8);
                              goto LAB_1001877ce;
                            }
                            if (*pcVar6 == '\0') {
                              if ((local_b8 & 1) != 0) goto LAB_1001876a2;
                              iVar4 = FUN_100185d7d(local_98,local_a8,local_88,pcVar6,local_90,0);
                              pcVar9 = pcVar6;
                            }
                            else {
                              if (bVar11) goto LAB_1001876a2;
                              iVar4 = FUN_100186fbd(local_98,local_a8,local_88,pcVar6,local_90);
                              pcVar9 = pcVar6;
                            }
                            pcVar6 = local_d8;
                          } while (iVar4 == 0);
                          local_7c = iVar4;
                          if (iVar4 == -0x80) {
                            FUN_100187c42(local_c8);
                            local_7c = -0x80;
                            iVar4 = local_7c;
                            goto LAB_10018783a;
                          }
                          uVar8 = FUN_1001cc310();
                          cVar3 = _os_log_type_enabled(uVar8);
                          iVar4 = local_7c;
                          if (cVar3 != '\0') {
                            local_78 = 0x8220202;
                            uStack_74 = 0x7a0a90;
                            local_70 = 1;
                            uStack_6f = 0;
                            uStack_6e = 0;
                            uStack_6c = 0x400;
                            uStack_6a = (undefined2)local_7c;
                            cStack_68 = (char)((uint)local_7c >> 0x10);
                            uStack_67 = (undefined1)((uint)local_7c >> 0x18);
                            pcVar9 = "%{public}s: err == (%d)";
                            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",
                                                &local_78);
                            iVar4 = local_7c;
                          }
LAB_1001877bc:
                          local_7c = iVar4;
                          FUN_100187c42(local_c8);
                          iVar4 = local_7c;
                          if (local_7c != 0) goto LAB_10018783a;
LAB_1001877ce:
                          lVar7 = local_b0;
                          uVar10 = CONCAT71((int7)((ulong)pcVar9 >> 8),1);
                          bVar11 = false;
                          uVar1 = local_b8 & 1;
                          local_b8 = uVar10;
                        } while (local_99 != '\0' && uVar1 == 0);
                        bVar11 = true;
                        if (*(char *)(local_98 + 0x2cc) == '\0') {
                          FUN_100186e4b(local_90,local_b0);
                          local_7c = 0;
                          bVar11 = true;
                        }
                        else {
                          local_7c = 0;
                        }
                      }
                      else {
                        local_7c = iVar4;
                        bVar11 = false;
                      }
LAB_100187844:
                      if (local_d0 != 0) {
                        FUN_10017cdfb();
                        local_d0 = 0;
                      }
                      if (bVar11) {
                        iVar4 = local_7c;
                        if (param_6 != (void *)0x0) {
                          _memcpy(param_6,local_90,0x420);
                          iVar4 = 0;
                        }
                      }
                      else if ((local_7c != -0x80) ||
                              (iVar4 = -0x80, *(char *)(local_98 + 10) == '\0')) {
                        FUN_1001c62d9(&local_120,0x40);
                        local_120 = local_90;
                        (**(code **)(local_98 + 0x30))
                                  (0x64656c46,&local_120,*(undefined8 *)(local_98 + 0x38));
                        iVar4 = local_7c;
                      }
                    }
                    else {
LAB_10018729a:
                      if (iVar4 != -0x80) {
                        if (iVar4 == 0) goto LAB_100187622;
                        uVar8 = FUN_1001cc310();
                        cVar3 = _os_log_type_enabled(uVar8,0x10);
                        if (cVar3 != '\0') {
                          FUN_10068cb71(iVar4,uVar8);
                        }
                      }
                    }
                    FUN_1001c62d9(&local_120,0x40);
                    piVar5 = local_90;
                    local_118 = local_e0;
                    local_110 = local_c0;
                    local_f8 = local_90;
                    local_108 = (int *)CONCAT44(local_108._4_4_,iVar4);
                    local_120 = param_2;
                    local_100 = param_5;
                    (**(code **)(local_98 + 0x30))
                              (0x656e6463,&local_120,*(undefined8 *)(local_98 + 0x38));
                    goto LAB_10018740f;
                  }
                  uVar8 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar8,0x10);
                  pcVar6 = local_88;
                  piVar5 = local_90;
                  if (cVar3 != '\0') {
                    FUN_10068cbdd(iVar4,uVar8);
                  }
                }
              }
              else {
                uVar8 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar8,0x10);
                pcVar6 = local_88;
                piVar5 = local_90;
                if (cVar3 != '\0') {
                  FUN_10068cc49(iVar4,uVar8);
                }
              }
            }
          }
          goto LAB_100187517;
        }
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        piVar5 = local_90;
        if (cVar3 != '\0') {
          FUN_10068cd2b(uVar8);
        }
        FUN_1001782e9(0,0);
        iVar4 = -0x6c;
        pcVar6 = local_88;
LAB_100187521:
        FUN_1001c64c1(pcVar6);
      }
      if (local_d8 != (char *)0x0) {
        FUN_1001c64c1();
      }
      if (piVar5 != (int *)0x0) {
        FUN_1001c64c1(piVar5);
      }
      if (lVar7 != 0) {
        FUN_1001c64c1(lVar7);
      }
      *(int *)(local_98 + 0x2d0) = *(int *)(local_98 + 0x2d0) + -1;
      goto LAB_100187329;
    }
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      FUN_10068cf03(uVar8);
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_100187329:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

