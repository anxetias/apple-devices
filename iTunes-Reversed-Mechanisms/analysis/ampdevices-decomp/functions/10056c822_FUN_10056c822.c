// name: FUN_10056c822
// address: 10056c822

int FUN_10056c822(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  uint uVar9;
  int local_1dc [3];
  uint local_1d0;
  uint local_1cc;
  undefined1 local_16c [4];
  int local_168;
  int local_164;
  undefined4 local_160;
  ulong local_158;
  long *local_150;
  ulong local_148;
  long local_140;
  int local_138;
  char *local_134;
  undefined2 local_12c;
  undefined2 uStack_12a;
  undefined2 uStack_128;
  undefined4 uStack_126;
  int local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1001c63e1(10000000);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_138 = 0x8220202;
      local_134 = "Assertion failure";
      local_12c = 0x822;
      uStack_12a = 0xbfdf;
      uStack_128 = 0x7c;
      uStack_126 = 1;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_138,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
  }
  else {
    iVar2 = FUN_10056a2be(param_1,local_1dc,0x70);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (local_1dc[0] == 0x616d7168) {
          iVar2 = (**(code **)(*param_2 + 0x50))(param_2,0x616d7168,local_1dc,0x70,0);
          if (iVar2 == 0) {
            local_150 = param_2;
            local_140 = lVar3;
            if (local_1d0 != 0) {
              local_148 = 10000000;
              uVar9 = 0;
LAB_10056c9d6:
              iVar2 = FUN_10056ec13(param_1,local_16c);
              lVar3 = local_140;
              if (iVar2 == 0) {
                uVar6 = (ulong)(uint)(local_164 - local_168);
                if ((local_148 < uVar6) &&
                   (lVar3 = FUN_1001c6479(local_140,uVar6), local_148 = uVar6, lVar3 == 0)) {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 != '\0') {
                    piVar8 = &local_138;
LAB_10056cf65:
                    *piVar8 = 0x8220202;
                    *(char **)(piVar8 + 1) = "Assertion failure";
                    *(undefined2 *)(piVar8 + 3) = 0x822;
                    *(char **)((long)piVar8 + 0xe) = "objectBuffer != nullptr";
                    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",piVar8,
                                        0x16);
                  }
LAB_10056cf04:
                  FUN_1001782e9(0,0);
                  iVar2 = -0x6c;
                  lVar3 = 0;
                  goto LAB_10056c97b;
                }
                iVar2 = FUN_100569944(param_1,lVar3,uVar6);
                if (iVar2 == 0) {
                  local_140 = lVar3;
                  iVar2 = (**(code **)(*local_150 + 0x50))(local_150,local_160,lVar3,uVar6,uVar9);
                  lVar3 = local_140;
                  if (iVar2 == 0) goto code_r0x00010056ca6d;
                  goto LAB_10056c97b;
                }
                if (iVar2 == -0x80) goto LAB_10056c97b;
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 == '\0') goto LAB_10056c97b;
                piVar8 = &local_138;
                local_138 = 0x8220202;
                local_134 = "Assertion failure";
                local_12c = 0x400;
                uStack_12a = (undefined2)iVar2;
                uStack_128 = (undefined2)((uint)iVar2 >> 0x10);
              }
              else {
                if (iVar2 == -0x80) goto LAB_10056c97b;
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                lVar3 = local_140;
                if (cVar1 == '\0') goto LAB_10056c97b;
                piVar8 = &local_138;
                local_138 = 0x8220202;
                local_134 = "Assertion failure";
                local_12c = 0x400;
                uStack_12a = (undefined2)iVar2;
                uStack_128 = (undefined2)((uint)iVar2 >> 0x10);
              }
              goto LAB_10056c93a;
            }
            local_148 = 10000000;
LAB_10056cade:
            plVar7 = local_150;
            if (local_1cc != 0) {
              local_158 = 0;
              do {
                lVar3 = local_140;
                iVar2 = FUN_10056a2be(param_1,&local_138,0xdc);
                if (iVar2 != 0) {
                  if (iVar2 == -0x80) goto LAB_10056c97b;
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 == '\0') goto LAB_10056c97b;
                  piVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = iVar2;
                  goto LAB_10056c93a;
                }
                if (local_138 != 0x616d7169) {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 == '\0') goto LAB_10056c96c;
                  piVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  pcVar5 = "dbQueueItem.magic == kAMLPlayQueueItemMagic";
                  goto LAB_10056cd69;
                }
                iVar2 = (**(code **)(*plVar7 + 0x50))
                                  (plVar7,0x616d7169,&local_138,(ulong)local_134 & 0xffffffff,
                                   local_158);
                if (iVar2 != 0) goto LAB_10056c97b;
                local_140 = lVar3;
                if (CONCAT22(uStack_12a,local_12c) != 0) {
                  uVar9 = 0;
                  do {
                    iVar2 = FUN_10056ec13(param_1,local_16c);
                    lVar3 = local_140;
                    if (iVar2 != 0) {
                      if (iVar2 == -0x80) goto LAB_10056c97b;
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      lVar3 = local_140;
                      if (cVar1 == '\0') goto LAB_10056c97b;
                      piVar8 = &local_58;
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = iVar2;
                      goto LAB_10056c93a;
                    }
                    uVar6 = (ulong)(uint)(local_164 - local_168);
                    if ((local_148 < uVar6) &&
                       (lVar3 = FUN_1001c6479(local_140,uVar6), local_148 = uVar6, lVar3 == 0)) {
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 == '\0') goto LAB_10056cf04;
                      piVar8 = &local_58;
                      goto LAB_10056cf65;
                    }
                    iVar2 = FUN_100569944(param_1,lVar3,uVar6);
                    if (iVar2 != 0) {
                      if (iVar2 == -0x80) goto LAB_10056c97b;
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 == '\0') goto LAB_10056c97b;
                      piVar8 = &local_58;
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = iVar2;
                      goto LAB_10056c93a;
                    }
                    local_140 = lVar3;
                    iVar2 = (**(code **)(*local_150 + 0x50))(local_150,local_160,lVar3,uVar6,uVar9);
                    lVar3 = local_140;
                    if (iVar2 != 0) goto LAB_10056c97b;
                    uVar9 = uVar9 + 1;
                    plVar7 = local_150;
                  } while (uVar9 < CONCAT22(uStack_12a,local_12c));
                }
                iVar2 = (**(code **)(*plVar7 + 0x50))(plVar7,local_138,0,0,0);
                lVar3 = local_140;
                if (iVar2 != 0) goto LAB_10056c97b;
                uVar9 = (int)local_158 + 1;
                local_158 = (ulong)uVar9;
              } while (uVar9 < local_1cc);
            }
            lVar3 = local_140;
            iVar2 = (**(code **)(*plVar7 + 0x50))(plVar7,local_1dc[0],0,0,0);
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            piVar8 = &local_138;
            local_138 = 0x8220202;
            local_134 = "Assertion failure";
            local_12c = 0x822;
            pcVar5 = "header.magic == kAMLPlayQueueHeaderMagic";
LAB_10056cd69:
            *(char **)((long)piVar8 + 0xe) = pcVar5;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",piVar8,0x16);
          }
LAB_10056c96c:
          FUN_1001782e9(0,0);
          iVar2 = -0xd0;
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          piVar8 = &local_138;
          local_138 = 0x8220202;
          local_134 = "Assertion failure";
          local_12c = 0x400;
          uStack_12a = (undefined2)iVar2;
          uStack_128 = (undefined2)((uint)iVar2 >> 0x10);
LAB_10056c93a:
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",piVar8,0x12);
        }
      }
    }
LAB_10056c97b:
    FUN_1001c64c1(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
code_r0x00010056ca6d:
  uVar9 = uVar9 + 1;
  if (local_1d0 <= uVar9) goto LAB_10056cade;
  goto LAB_10056c9d6;
}

