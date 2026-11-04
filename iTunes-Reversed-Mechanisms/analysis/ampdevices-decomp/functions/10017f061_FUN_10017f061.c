// name: FUN_10017f061
// address: 10017f061

ulong FUN_10017f061(void *param_1,undefined1 *param_2,undefined1 *param_3,uint param_4,void *param_5
                   )

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined7 uVar10;
  undefined8 uVar9;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *local_f48;
  undefined1 *local_f40;
  int local_f38;
  void *local_f28;
  undefined2 *local_f18;
  void *local_f10;
  undefined4 local_f04;
  undefined4 local_f00;
  uint local_efc;
  undefined1 local_ef8 [64];
  undefined1 local_eb8 [64];
  undefined1 local_e78 [512];
  undefined2 local_c78 [256];
  undefined1 local_a78 [512];
  undefined1 local_878 [1056];
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (void *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      FUN_1006870c6(uVar9);
    }
    FUN_1001782e9(0,0);
    uVar11 = 0xffffffce;
    goto LAB_10017f541;
  }
  local_f10 = param_5;
  local_efc = param_4;
  _memcpy(local_458,param_1,0x420);
  local_c78[0] = 0;
  uVar4 = FUN_10017d5ba(param_1,local_878);
  uVar11 = (ulong)uVar4;
  if (uVar4 == 0xffffff80) goto LAB_10017f541;
  if (uVar4 == 0) {
    bVar1 = true;
    if (param_2 == (undefined1 *)0x0) {
      local_f04 = 0;
      uVar5 = 0;
      param_2 = local_878;
LAB_10017f18d:
      if (param_3 == (undefined1 *)0x0) goto LAB_10017f1dc;
      local_f00 = uVar5;
      uVar4 = FUN_10017d489(local_458,local_c78);
      uVar11 = (ulong)uVar4;
      if (uVar4 == 0xffffff80) goto LAB_10017f4e6;
      if (uVar4 != 0) {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          FUN_100686fee(uVar11,uVar9);
        }
        cVar2 = (char)local_f04;
        uVar4 = local_efc;
        uVar5 = local_f00;
        goto LAB_10017f170;
      }
      cVar2 = FUN_1001e3edc(param_3,local_c78,0);
      if (cVar2 == '\0') {
        uVar4 = FUN_10017f9a4(local_458,param_3,(local_efc & 2) == 0);
        if (uVar4 != 0) {
          if ((local_efc & 1) == 0) {
            uVar11 = (ulong)uVar4;
            if (uVar4 == 0xffffff80) {
              uVar11 = 0xffffff80;
LAB_10017f4e6:
              cVar2 = (char)local_f04;
              uVar4 = local_efc;
            }
            else {
              uVar9 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar9,0x10);
              uVar4 = local_efc;
              cVar2 = (char)local_f04;
              if (cVar3 != '\0') {
                FUN_100686f82(uVar11,uVar9);
              }
            }
          }
          else {
            FUN_1001e40a7(param_3,local_e78,local_eb8);
            if (bVar1) {
              uVar4 = FUN_10017d489(param_1,local_a78);
              uVar11 = (ulong)uVar4;
              if (uVar4 == 0xffffff80) goto LAB_10017f4e6;
              if (uVar4 != 0) {
                uVar9 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar9,0x10);
                uVar4 = local_efc;
                cVar2 = (char)local_f04;
                if (cVar3 != '\0') {
                  FUN_100686f16(uVar11,uVar9);
                }
                goto LAB_10017f4f4;
              }
              iVar6 = FUN_10017ef94(local_a78);
              if (iVar6 != 0) {
                FUN_1001e222d(local_a78,local_ef8);
                FUN_1001c62d9(&local_f48,0x38);
                local_f48 = local_e78;
                local_f18 = local_c78;
                local_f40 = local_ef8;
                local_f38 = iVar6;
                local_f28 = param_1;
                uVar4 = FUN_10017e4d0(&local_f48);
                if (uVar4 != 0) {
                  uVar11 = (ulong)uVar4;
                  uVar9 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar2 != '\0') {
                    FUN_100686dd2(uVar11,uVar9);
                  }
                  goto LAB_10017f4e6;
                }
                cVar2 = FUN_1001e3edc(local_a78,local_c78,0);
                if (cVar2 != '\0') goto LAB_10017f1dc;
              }
            }
            uVar7 = FUN_10053600d(param_2,local_e78,local_eb8,local_c78);
            uVar4 = local_efc;
            uVar11 = (ulong)uVar7;
            cVar2 = (char)local_f04;
            uVar5 = local_f04;
            if (uVar7 == 0xffffff80) {
LAB_10017f713:
              cVar2 = (char)uVar5;
              uVar4 = local_efc;
            }
            else if (uVar7 == 0) {
              uVar7 = FUN_10017f9a4(local_458,local_c78,(local_efc & 2) == 0);
              uVar11 = (ulong)uVar7;
              if (uVar7 != 0xffffff80) {
                if (uVar7 == 0) goto LAB_10017f1dc;
                uVar9 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar9,0x10);
                uVar5 = local_f04;
                if (cVar2 != '\0') {
                  FUN_100686e3e(uVar11,uVar9);
                }
                goto LAB_10017f713;
              }
            }
            else {
              uVar9 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar9,0x10);
              if (cVar3 != '\0') {
                FUN_100686eaa(uVar11,uVar9);
              }
            }
          }
LAB_10017f4f4:
          cVar3 = (char)local_f00;
          goto LAB_10017f4fa;
        }
        FUN_1001e1c39(param_3,local_c78);
      }
LAB_10017f1dc:
      uVar11 = 0;
      if (local_f10 != (void *)0x0) {
        _memcpy(local_f10,local_458,0x420);
      }
      goto LAB_10017f541;
    }
    cVar2 = FUN_10017f77e(local_878,param_2);
    if (cVar2 != '\0') {
      local_f04 = 0;
      uVar5 = 0;
      goto LAB_10017f18d;
    }
    uVar9 = FUN_10017f857(local_458,param_2,(local_efc & 2) == 0);
    if ((int)uVar9 == 0) {
      uVar5 = (undefined4)CONCAT71((int7)((ulong)uVar9 >> 8),1);
      local_f04 = 0;
      bVar1 = false;
      goto LAB_10017f18d;
    }
    uVar4 = FUN_10017d489(local_458,local_a78);
    uVar11 = (ulong)uVar4;
    if (uVar4 == 0xffffff80) goto LAB_10017f541;
    if (uVar4 != 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        FUN_100686d66(uVar11,uVar9);
      }
      goto LAB_10017f541;
    }
    puVar12 = local_a78;
    if (param_3 != (undefined1 *)0x0) {
      puVar12 = param_3;
    }
    FUN_1001e40a7(puVar12,local_e78);
    uVar7 = FUN_10017f946(local_878,param_2,local_e78,local_eb8,local_c78);
    uVar4 = local_efc;
    uVar11 = (ulong)uVar7;
    if (uVar7 == 0xffffff80) goto LAB_10017f541;
    if (uVar7 != 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        FUN_100686cfa(uVar11,uVar9);
      }
      goto LAB_10017f541;
    }
    uVar7 = FUN_10017f9a4(local_458,local_c78,(local_efc & 2) == 0);
    uVar11 = (ulong)uVar7;
    if (uVar7 == 0xffffff80) goto LAB_10017f541;
    if (uVar7 != 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        FUN_100686c8e(uVar11,uVar9);
      }
      goto LAB_10017f541;
    }
    uVar8 = FUN_10017f857(local_458,param_2,(uVar4 & 2) == 0);
    uVar11 = uVar8 & 0xffffffff;
    if ((int)uVar8 != -0x80) {
      if ((int)uVar8 != 0) {
        uVar9 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar9,0x10);
        cVar2 = '\x01';
        if (cVar3 != '\0') {
          FUN_100686c22(uVar8 & 0xffffffff,uVar9);
        }
        uVar5 = 0;
        goto LAB_10017f170;
      }
      uVar10 = (undefined7)(uVar8 >> 8);
      local_f04 = (undefined4)CONCAT71(uVar10,1);
      bVar1 = false;
      uVar5 = (undefined4)CONCAT71(uVar10,1);
      goto LAB_10017f18d;
    }
  }
  else {
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      FUN_10068705a(uVar11,uVar9);
    }
    cVar2 = '\0';
    uVar5 = 0;
    uVar4 = local_efc;
LAB_10017f170:
    cVar3 = (char)uVar5;
    if ((int)uVar11 == 0) {
      uVar11 = 0;
      goto LAB_10017f541;
    }
LAB_10017f4fa:
    if (cVar3 != '\0') {
      FUN_10017f857(local_458,local_878,(uVar4 & 2) == 0);
    }
    if (cVar2 == '\0') goto LAB_10017f541;
  }
  FUN_10017f9a4(local_458,local_a78,(uVar4 & 2) == 0);
LAB_10017f541:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

