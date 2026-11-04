// name: FUN_1005a8a98
// address: 1005a8a98

int FUN_1005a8a98(long param_1,undefined8 param_2)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = param_2;
  iVar6 = FUN_1001ceb24(param_2,0x73706b6d,0,*(undefined8 *)(param_1 + 0x70),0);
  if (iVar6 != -0x80) {
    if (iVar6 == 0) {
      lVar9 = *(long *)(param_1 + 0x70);
      if (lVar9 != 0) {
        local_68 = (long *)(param_1 + 0x80);
        local_5c = 1;
        do {
          if (*local_68 == 0) {
            iVar6 = FUN_1001ecfab(0,"",local_68,0);
            if (iVar6 != 0) {
              if (iVar6 == -0x80) goto LAB_1005a8fa5;
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 == '\0') goto LAB_1005a8fa5;
              local_4a = (undefined2)iVar6;
              uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
              goto LAB_1005a8ebb;
            }
            lVar9 = *(long *)(param_1 + 0x70);
          }
          plVar1 = *(long **)(param_1 + 0x68);
          pvVar2 = (void *)plVar1[2];
          lVar11 = *plVar1;
          plVar3 = (long *)plVar1[1];
          *(long **)(lVar11 + 8) = plVar3;
          *plVar3 = lVar11;
          *(long *)(param_1 + 0x70) = lVar9 + -1;
          operator_delete(plVar1);
          cVar5 = FUN_1001ee068();
          if (cVar5 == '\0') {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = 0x4675;
              uStack_48 = 0x7a;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          *(code **)((long)pvVar2 + 0x40) = FUN_1005a229e;
          *(long *)((long)pvVar2 + 0x48) = param_1;
          lVar9 = (long)pvVar2 + 0x88;
          iVar6 = FUN_1001e96d3(lVar9,0,0);
          if (iVar6 != -0x80) {
            if (iVar6 == 0) {
              iVar6 = FUN_1001ecf95(*local_68,pvVar2);
              if (iVar6 != -0x80) {
                if (iVar6 == 0) {
                  iVar6 = FUN_1001e9afc(lVar9);
                  if ((iVar6 != -0x80) && (iVar6 != 0)) {
                    uVar8 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar5 != '\0') {
                      local_4a = (undefined2)iVar6;
                      uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
                      goto LAB_1005a8e5b;
                    }
                  }
                }
                else {
                  uVar8 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar5 != '\0') {
                    local_4a = (undefined2)iVar6;
                    uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
LAB_1005a8e5b:
                    local_4c = 0x400;
                    uStack_50 = 1;
                    local_54 = 0x7a0a90;
                    local_58 = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
              }
              FUN_1001e9bb5(lVar9);
            }
            else {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                local_54 = 0x7a0a90;
                uStack_50 = 1;
                local_4c = 0x400;
                local_4a = (undefined2)iVar6;
                uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
          }
          local_78 = 0;
          iVar6 = FUN_1005a9692(param_1,*(undefined4 *)((long)pvVar2 + 0x58),
                                *(undefined8 *)((long)pvVar2 + 0x60),&local_78);
          uVar8 = local_78;
          if (iVar6 == 0) {
            local_58 = *(undefined4 *)((long)pvVar2 + 0x58);
            uVar4 = *(undefined8 *)((long)pvVar2 + 0x60);
            uStack_50 = (undefined4)uVar4;
            local_4c = (undefined2)((ulong)uVar4 >> 0x20);
            local_4a = (undefined2)((ulong)uVar4 >> 0x30);
            lVar9 = FUN_1005b0998(param_1 + 0x1678,local_58,uVar4,&local_58);
            *(undefined8 *)(lVar9 + 0x30) = uVar8;
          }
          FUN_1005a2236(pvVar2);
          operator_delete(pvVar2);
          uVar10 = (ulong)local_5c;
          lVar11 = *(long *)(param_1 + 0x70) + uVar10;
          iVar6 = FUN_1001ceb24(local_70,0x73706b6d,uVar10,lVar11,0);
          if (iVar6 != 0) {
            if (iVar6 == -0x80) goto LAB_1005a8fa5;
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 == '\0') goto LAB_1005a8fa5;
            local_4a = (undefined2)iVar6;
            uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
            goto LAB_1005a8ebb;
          }
          lVar9 = *(long *)(param_1 + 0x70);
          if (lVar9 == 0) {
            iVar6 = FUN_1001b19b0();
            if ((iVar6 == *(int *)(param_1 + 0x78)) && (*(char *)(param_1 + 10) != '\0')) {
              *(undefined1 *)(param_1 + 0x7c) = 1;
              FUN_1001b0d8d(DAT_100701ae0);
              *(undefined1 *)(param_1 + 0x7c) = 0;
              iVar6 = FUN_1001ceb24(local_70,0x73706b6d,uVar10,lVar11,0);
              if (iVar6 != 0) {
                if (iVar6 == -0x80) goto LAB_1005a8fa5;
                uVar8 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar8,0x10);
                if (cVar5 == '\0') goto LAB_1005a8fa5;
                local_4a = (undefined2)iVar6;
                uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
                goto LAB_1005a8ebb;
              }
            }
            lVar9 = *(long *)(param_1 + 0x70);
          }
          local_5c = local_5c + 1;
        } while (lVar9 != 0);
      }
      iVar6 = 0;
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        local_4a = (undefined2)iVar6;
        uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
LAB_1005a8ebb:
        uStack_50 = 1;
        local_54 = 0x7a0a90;
        local_4c = 0x400;
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_1005a8fa5:
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_1001ecf9f();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  iVar7 = FUN_1001b19b0();
  if (iVar7 != *(int *)(param_1 + 0x78)) {
    FUN_1005a2cc6(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

