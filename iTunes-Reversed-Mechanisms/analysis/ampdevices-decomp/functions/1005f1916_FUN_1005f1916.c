// name: FUN_1005f1916
// address: 1005f1916

void FUN_1005f1916(long param_1,int param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  bool bVar11;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  long *local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [22];
  undefined2 local_10a;
  undefined **local_108;
  int local_100;
  undefined ***local_e8;
  undefined **local_d8;
  int local_d0;
  undefined ***local_b8;
  undefined **local_a8;
  long local_a0;
  undefined4 *local_98;
  undefined2 *local_90;
  undefined ***local_88;
  undefined **local_78;
  long local_70;
  undefined4 *local_68;
  undefined2 *local_60;
  undefined ***local_58;
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    for (puVar1 = *(undefined4 **)(param_1 + 0x60); puVar1 != (undefined4 *)0x0;
        puVar1 = *(undefined4 **)(puVar1 + 0x1a1e)) {
      if (puVar1[0x1a21] == param_2) {
        FUN_1001b7a44(local_158);
        FUN_1001b7a44(local_148);
        local_138 = (long *)0x0;
        lVar8 = *(long *)(param_1 + 0xc0);
        if (lVar8 == 0) goto LAB_1005f1a19;
        uVar2 = *(ulong *)(puVar1 + 0x18ea);
        lVar7 = param_1 + 0xc0;
        do {
          bVar11 = *(ulong *)(lVar8 + 0x20) < uVar2;
          if (!bVar11) {
            lVar7 = lVar8;
          }
          lVar8 = *(long *)(lVar8 + (ulong)bVar11 * 8);
        } while (lVar8 != 0);
        if ((((lVar7 == param_1 + 0xc0) || (uVar2 < *(ulong *)(lVar7 + 0x20))) ||
            (*(int *)(lVar7 + 0x28) == -0x80)) || (*(int *)(lVar7 + 0x28) == 0)) {
LAB_1005f1a19:
          uVar6 = FUN_100416f20(*puVar1,0x10cc013c);
          FUN_1001b7eb0(local_130,uVar6);
          FUN_1001b8dfc(local_120,puVar1 + 4);
          FUN_1001bbec4(&local_48,local_130,local_120);
          FUN_1001b80b2(local_158,&local_48);
          FUN_1001b7a50(&local_48);
          FUN_1001b7a50(local_120);
          FUN_1001b7a50(local_130);
          uVar6 = FUN_100416f20(*puVar1,0x10cc013d);
          FUN_1001b81f2(local_148,uVar6);
          local_10a = 3;
          FUN_1001c334a(&local_48,0x10cf000d);
          FUN_1001c334a(local_130,0x10cf0011);
          FUN_1005e73f0(local_120,puVar1);
          local_a8 = &PTR_FUN_10086fde0;
          local_90 = &local_10a;
          local_a0 = param_1;
          local_98 = puVar1;
          local_88 = &local_a8;
          uVar4 = FUN_1004501a9(local_158,local_148,&local_48,local_130,local_120,&local_a8);
          if (local_88 == &local_a8) {
            lVar8 = 0x20;
LAB_1005f1b52:
            (**(code **)((long)*local_88 + lVar8))();
          }
          else {
            lVar8 = 0x28;
            if (local_88 != (undefined ***)0x0) goto LAB_1005f1b52;
          }
          FUN_1001b7a50(local_120);
          FUN_1001b7a50(local_130);
          FUN_1001b7a50(&local_48);
LAB_1005f1b79:
          bVar11 = uVar4 == 3;
          if ((uVar4 | 2) == 3) goto LAB_1005f1b92;
        }
        else {
          uVar6 = FUN_100416f20(*puVar1,0x10cc013e);
          FUN_1001b81f2(local_158,uVar6);
          uVar6 = FUN_100416f20(*puVar1,0x10cc013f);
          FUN_1001b81f2(local_148,uVar6);
          local_10a = 2;
          FUN_1001c334a(&local_48,0x10cf0011);
          FUN_1001c334a(local_130,0x5db30004);
          FUN_1005e73f0(local_120,puVar1);
          local_78 = &PTR_FUN_10086fde0;
          local_60 = &local_10a;
          local_70 = param_1;
          local_68 = puVar1;
          local_58 = &local_78;
          uVar4 = FUN_10044fcd7(local_158,local_148,&local_48,local_130,local_120,&local_78);
          if (local_58 == &local_78) {
            lVar8 = 0x20;
LAB_1005f1e0c:
            (**(code **)((long)*local_58 + lVar8))();
          }
          else {
            lVar8 = 0x28;
            if (local_58 != (undefined ***)0x0) goto LAB_1005f1e0c;
          }
          FUN_1001b7a50(local_120);
          FUN_1001b7a50(local_130);
          FUN_1001b7a50(&local_48);
          bVar11 = true;
          if (uVar4 != 1) goto LAB_1005f1b79;
LAB_1005f1b92:
          iVar5 = FUN_100425478(param_2,0,0,&local_138);
          if (iVar5 != -0x80) {
            if (iVar5 == 0) {
              if (bVar11) {
                uStack_44 = uStack_44 & 0xffffff00;
                local_48 = 0;
                pppuVar10 = &local_d8;
                local_d8 = &PTR_FUN_10086fef0;
                local_d0 = param_2;
                local_b8 = pppuVar10;
                (**(code **)(*local_138 + 0x20))(local_138,&local_48,pppuVar10);
                pppuVar9 = local_b8;
              }
              else {
                local_48 = 0;
                uStack_44 = 0;
                pppuVar10 = &local_108;
                local_108 = &PTR_FUN_10086ff70;
                local_100 = param_2;
                local_e8 = pppuVar10;
                (**(code **)(*local_138 + 0x18))(local_138,&local_48,pppuVar10);
                pppuVar9 = local_e8;
              }
              if (pppuVar9 == pppuVar10) {
                lVar8 = 0x20;
              }
              else {
                lVar8 = 0x28;
                if (pppuVar9 == (undefined ***)0x0) goto LAB_1005f1d00;
              }
              (**(code **)((long)*pppuVar9 + lVar8))();
            }
            else {
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 != '\0') {
                local_48 = 0x8220202;
                uStack_44 = 0x7a0a90;
                uStack_40 = 1;
                local_3c = 0x400;
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12)
                ;
              }
            }
          }
        }
LAB_1005f1d00:
        if (local_138 != (long *)0x0) {
          FUN_1001ceee0();
        }
        FUN_1001b7a50(local_148);
        FUN_1001b7a50(local_158);
        goto LAB_1005f1983;
      }
    }
  }
  uVar6 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar6,0x10);
  if (cVar3 != '\0') {
    local_48 = 0x8220202;
    uStack_44 = 0x7a0a90;
    uStack_40 = 1;
    local_3c = 0x822;
    local_3a = "device != nullptr";
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1005f1983:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

