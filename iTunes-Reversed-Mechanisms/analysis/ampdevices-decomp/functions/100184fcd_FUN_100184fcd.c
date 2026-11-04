// name: FUN_100184fcd
// address: 100184fcd

int FUN_100184fcd(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined1 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long **pplVar7;
  undefined8 uVar8;
  long *plVar9;
  long **pplVar10;
  undefined1 local_190 [16];
  long *local_180;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  undefined8 local_140;
  long local_138;
  long *local_130;
  int local_128;
  char *local_124;
  undefined2 local_11c;
  int local_11a;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined8 uStack_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  long *local_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_80;
  undefined1 local_7c;
  char local_7b;
  int local_78;
  long local_70;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c8[0] = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  local_140 = param_3;
  FUN_1001c62d9(&local_108,200);
  local_d8 = param_1;
  local_7c = param_5;
  FUN_1001c62d9(local_190,0x10);
  iVar5 = FUN_1001857c3(param_2,local_190,&local_128,&local_180);
  if (iVar5 == 0) {
    pplVar10 = (long **)0x0;
    local_138 = param_1;
    local_130 = param_4;
    do {
      if ((local_180 == (long *)0x0) || (local_128 != 0x72737263)) {
        if (local_180 != (long *)0x0) goto LAB_1001850e6;
      }
      else if (((*(byte *)(*(long *)(param_1 + 0x2b8) + 0x426) & 0x80) != 0) &&
              (*(char *)(param_1 + 7) == '\0')) {
LAB_1001850e6:
        pplVar7 = *(long ***)(param_1 + 0x58);
        if (pplVar7 == (long **)0x0) {
          pplVar7 = (long **)FUN_1001c6429(0x28);
          if (pplVar7 == (long **)0x0) {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              FUN_10068b6b7(uVar8);
            }
            FUN_1001782e9(0,0);
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            param_1 = local_138;
            if (cVar4 != '\0') {
              FUN_10068b72d(uVar8);
            }
            FUN_1001782e9(0,0);
            iVar6 = -0x6c;
            goto LAB_10018535c;
          }
        }
        else {
          *(long **)(param_1 + 0x58) = *pplVar7;
          FUN_1001c62d9(pplVar7,0x28);
        }
        *(int *)(pplVar7 + 3) = local_128;
        pplVar7[4] = local_180;
        if (pplVar10 == (long **)0x0) {
          pplVar10 = &local_d0;
        }
        *pplVar10 = (long *)pplVar7;
        iVar6 = FUN_10017cc65(param_2,local_128,0x201,pplVar7 + 1);
        param_1 = local_138;
        pplVar10 = pplVar7;
        if (iVar6 != 0) {
          if (iVar6 != -0x80) {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              FUN_10068b64b(iVar6,uVar8);
            }
          }
          goto LAB_10018535c;
        }
      }
      iVar5 = FUN_1001857c3(param_2,local_190,&local_128,&local_180);
      param_4 = local_130;
    } while (iVar5 == 0);
  }
  iVar6 = 0;
  if (iVar5 != -0x589) {
    iVar6 = iVar5;
  }
  if (local_d0 != (long *)0x0) {
    plVar9 = local_d0;
    do {
      iVar6 = FUN_10017cc65(param_4,(int)plVar9[3],
                            (uint)(*(char *)(param_1 + 6) != '\0') << 0xb | 0x202,plVar9 + 2);
      if (iVar6 != 0) {
        if (iVar6 != -0x80) {
          uVar8 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar8,0x10);
          if (cVar4 != '\0') {
            FUN_10068bb03(iVar6,uVar8);
          }
        }
        goto LAB_10018535c;
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
    iVar6 = FUN_1001e9c3e(local_c8);
    if (iVar6 != -0x80) {
      if (iVar6 == 0) {
        if (*(char *)(param_1 + 3) == '\0') {
          iVar6 = FUN_1001e8dd6(&local_f8,1,0);
          if (iVar6 != -0x80) {
            if (iVar6 == 0) goto LAB_1001853f7;
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              FUN_10068ba2b(iVar6,uVar8);
            }
          }
LAB_100185600:
          FUN_100185d23(&local_108);
        }
        else {
          iVar6 = FUN_1001e96d3(&local_108,1,0);
          if (iVar6 == -0x80) goto LAB_100185600;
          if (iVar6 != 0) {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              FUN_10068b7a3(iVar6,uVar8);
            }
            goto LAB_100185600;
          }
LAB_1001853f7:
          iVar6 = FUN_100185893(param_1,&local_108);
          if (iVar6 != -0x80) {
            if (iVar6 == 0) {
              plVar9 = param_4;
              if (*(char *)(param_1 + 0xd) == '\0') {
LAB_10018546b:
                do {
                  local_130 = plVar9;
                  if (*(char *)(param_1 + 3) == '\0') {
                    iVar6 = FUN_1001e944c(&local_f8);
                    if (iVar6 != 0) {
                      if (iVar6 != -0x80) {
                        uVar8 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar8,0x10);
                        if (cVar4 != '\0') {
                          FUN_10068b953(iVar6,uVar8);
                        }
                      }
                      goto LAB_10018562b;
                    }
                  }
                  else {
                    iVar6 = FUN_1001e9afc(&local_108);
                    if (iVar6 != 0) {
                      if (iVar6 != -0x80) {
                        uVar8 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar8,0x10);
                        if (cVar4 != '\0') {
                          FUN_10068b87b(iVar6,uVar8);
                        }
                      }
                      goto LAB_10018562b;
                    }
                  }
                  iVar5 = FUN_1001e9de0(local_c8);
                  if ((iVar5 != -0x80) && (iVar5 != 0)) {
                    uVar8 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar4 != '\0') {
                      local_128 = 0x8220202;
                      local_124 = "Assertion failure";
                      local_11c = 0x400;
                      local_11a = iVar5;
                      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",
                                          &local_128,0x12);
                    }
                  }
                  if (*(char *)(param_1 + 3) == '\0') {
                    FUN_1001e9460(&local_f8);
                  }
                  else {
                    FUN_1001e9b10(&local_108);
                  }
                  cVar4 = local_7b;
                  lVar2 = *(long *)(param_1 + 0x290);
                  lVar3 = *(long *)(param_1 + 0x2d8);
                  FUN_1001e9eb9(local_c8);
                  if (local_78 == 0) {
                    FUN_1001c62d9(&local_180,0x40);
                    local_180 = (long *)CONCAT44(local_180._4_4_,1);
                    local_178 = lVar3 + lVar2;
                    local_170 = *(long *)(param_1 + 0x2e0) + *(long *)(param_1 + 0x298);
                    local_168 = local_140;
                    local_78 = (**(code **)(param_1 + 0x30))
                                         (0x70726f67,&local_180,*(undefined8 *)(param_1 + 0x38));
                  }
                  plVar9 = local_130;
                } while (cVar4 == '\0');
                iVar6 = local_78;
                if (local_80 != 0) {
                  iVar6 = local_80;
                }
                if (*(char *)(param_1 + 0xd) != '\0') {
                  FUN_1001c62d9(&local_180,0x40);
                  local_180 = plVar9;
                  local_178._0_5_ = CONCAT14(local_7b,iVar6);
                  iVar6 = (**(code **)(param_1 + 0x30))
                                    (0x73746f70,&local_180,*(undefined8 *)(param_1 + 0x38));
                  if ((iVar6 != -0x80) && (iVar6 != 0)) {
                    uVar8 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar4 != '\0') {
                      FUN_10068b8e7(iVar6,uVar8);
                    }
                  }
                }
              }
              else {
                FUN_1001c62d9(&local_180,0x40);
                local_178 = local_70;
                local_180 = param_4;
                iVar6 = (**(code **)(param_1 + 0x30))
                                  (0x73747274,&local_180,*(undefined8 *)(param_1 + 0x38));
                if (iVar6 != -0x80) {
                  plVar9 = param_4;
                  if (iVar6 == 0) goto LAB_10018546b;
                  uVar8 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar4 != '\0') {
                    FUN_10068b80f(iVar6,uVar8);
                  }
                }
              }
            }
            else {
              uVar8 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar8,0x10);
              if (cVar4 != '\0') {
                FUN_10068b9bf(iVar6,uVar8);
              }
            }
          }
LAB_10018562b:
          FUN_100185d23(&local_108);
          if (*(char *)(param_1 + 3) == '\0') {
            FUN_1001e9587(&local_f8);
          }
          else {
            FUN_1001e9bb5(&local_108);
          }
        }
        FUN_1001e9d75(local_c8);
        plVar9 = local_d0;
        goto joined_r0x000100185372;
      }
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        FUN_10068ba97(iVar6,uVar8);
      }
    }
  }
LAB_10018535c:
  FUN_100185d23(&local_108);
  plVar9 = local_d0;
joined_r0x000100185372:
  while (plVar9 != (long *)0x0) {
    if (plVar9[1] != 0) {
      FUN_10017cdfb();
    }
    if (plVar9[2] != 0) {
      FUN_10017cdfb();
    }
    plVar1 = (long *)*plVar9;
    *plVar9 = *(long *)(param_1 + 0x58);
    *(long **)(param_1 + 0x58) = plVar9;
    plVar9 = plVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

