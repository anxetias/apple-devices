// name: FUN_1003af9ea
// address: 1003af9ea

int FUN_1003af9ea(undefined8 param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 local_b4 [4];
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  uint local_94;
  long local_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 local_70;
  int local_6c;
  ulong local_68;
  long local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = 0;
  uVar4 = 0;
  local_90 = param_2;
  local_88 = param_1;
  iVar2 = FUN_1001c955b(param_1,0x636f7672,0,0,&local_60);
  if (iVar2 == -0x80) goto LAB_1003afd39;
  if (iVar2 == 0) {
    if (local_60 != 0) {
      FUN_1001c9e7d(local_88);
      local_60 = 0;
    }
    uVar4 = 0;
    iVar5 = 0;
    if (local_90 != 0) {
      iVar3 = FUN_1005d3a5b(local_90);
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar2 = FUN_1001c9b1d(local_88,&local_60);
        if (local_60 != 0 && iVar2 == 0) {
          iVar2 = FUN_1001c9f0c(local_60,0x636f7672,0,0);
        }
        if (iVar2 == -0x80) {
          uVar4 = 0;
          iVar2 = -0x80;
          goto LAB_1003afd39;
        }
        iVar5 = iVar3;
        if (iVar2 != 0) {
          uVar9 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar9,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            uVar4 = 0;
            goto LAB_1003afd39;
          }
          goto LAB_1003afd36;
        }
      }
    }
    iVar2 = 0;
    if (local_60 != 0) {
      uVar10 = 0;
      if (0 < iVar5) {
        iVar3 = 0;
        uVar10 = 0;
        local_80 = param_3;
        local_78 = param_4;
        local_6c = iVar5;
        do {
          lVar6 = FUN_1005d3da4(local_90,iVar3);
          if ((lVar6 != 0) &&
             (local_68 = uVar10, lVar7 = FUN_1005d3229(lVar6,0x40000000), uVar10 = local_68,
             lVar7 != 0)) {
            local_b0 = FUN_100170f3b(lVar7);
            local_a8 = FUN_100170ef7(lVar7);
            FUN_1005d3389(lVar6,0x61777470,local_b4);
            FUN_1005d3389(lVar6,0x6177666d,&local_94);
            FUN_1005d3389(lVar6,0x61776465,&local_a0);
            if (local_a0 == 0) {
LAB_1003afbeb:
              lVar8 = 0;
            }
            else {
              iVar2 = FUN_1001dfe99();
              local_58 = iVar2 * 3;
              uStack_54 = 0;
              if ((iVar2 == 0) || (lVar8 = FUN_1001c6429(), lVar6 = local_a0, lVar8 == 0))
              goto LAB_1003afbeb;
              uVar4 = FUN_1001dfe99(local_a0);
              param_4 = local_78;
              FUN_1001e73f2(lVar6,uVar4,lVar8,CONCAT44(uStack_54,local_58),&local_58);
            }
            if (local_94 - 0xd < 2) {
              iVar2 = FUN_1001ca984(local_60,local_94 & 0xff,local_b0,local_a8);
              if (iVar2 == 0) {
                uVar10 = (ulong)((int)local_68 + 1);
LAB_1003afc9f:
                lVar6 = local_60;
                if (lVar8 != 0) {
                  uVar4 = FUN_1001df897(lVar8);
                  param_3 = local_80;
                  FUN_1001ca240(lVar6,lVar8,uVar4);
                  FUN_1001c64c1(lVar8);
                }
                goto LAB_1003afcc9;
              }
              if (iVar2 != -0x80) {
                uVar9 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar9,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  uStack_54 = 0x7a0a90;
                  uStack_50 = 1;
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
            }
            else {
              lVar7 = FUN_1001963b2(lVar7);
              lVar6 = local_60;
              if (lVar7 == 0) {
                uVar9 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar9,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  uStack_54 = 0x7a0a90;
                  uStack_50 = 1;
                  local_4c = 0x822;
                  local_4a = "pngData";
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                FUN_10017060f(0);
                iVar5 = -0x32;
              }
              else {
                uVar9 = FUN_100170f3b(lVar7);
                uVar4 = FUN_100170ef7(lVar7);
                iVar5 = FUN_1001ca984(lVar6,0xe,uVar9,uVar4);
                local_68 = (ulong)((int)local_68 + (uint)(iVar5 == 0));
                FUN_10017060f(lVar7);
                uVar10 = local_68;
                param_4 = local_78;
                param_3 = local_80;
                if (iVar5 == 0) goto LAB_1003afc9f;
                iVar2 = -0x80;
                if (iVar5 == -0x80) goto LAB_1003afebc;
              }
              iVar2 = iVar5;
              uVar9 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar9,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
LAB_1003afebc:
            uVar4 = (undefined4)local_68;
            param_4 = local_78;
            goto LAB_1003afd39;
          }
LAB_1003afcc9:
          iVar3 = iVar3 + 1;
        } while (local_6c != iVar3);
      }
      iVar2 = 0;
      uVar4 = (undefined4)uVar10;
      FUN_1001ca6f8(local_60,&local_70);
      if (local_60 != 0) {
        local_58 = 0;
        FUN_1001ca647(local_60,&local_58);
        if (local_58 == 0) {
          FUN_1001c9e7d(local_88,local_60);
        }
        iVar2 = 0;
      }
    }
  }
  else {
    uVar9 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar9,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      goto LAB_1003afd39;
    }
LAB_1003afd36:
    uVar4 = 0;
  }
LAB_1003afd39:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar4;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_70;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

