// name: FUN_10063534d
// address: 10063534d

int FUN_10063534d(undefined4 param_1,undefined4 param_2,long *param_3,undefined4 param_4)

{
  code *pcVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined4 *puVar13;
  ushort uVar14;
  undefined1 auVar15 [16];
  undefined1 local_a4 [4];
  long *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  long *local_90;
  long *local_88;
  short local_7c;
  ushort local_7a;
  undefined4 local_78;
  ushort local_74;
  ushort uStack_72;
  undefined4 uStack_70;
  undefined2 local_6c;
  undefined2 local_6a;
  uint uStack_68;
  undefined2 uStack_64;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  local_a0 = param_3;
  local_98 = param_4;
  local_94 = param_2;
  uVar8 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0x9d,199,0xb7,0x80,0x9e,0xc0,0x11,0xd4,0xa5,0x4f,0,10,0x27,5,0x28,0x61);
  uVar9 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,0x42,0x6f)
  ;
  iVar7 = _IOCreatePlugInInterfaceForService(param_1,uVar8,uVar9,&local_90,local_a4);
  plVar5 = local_90;
  uVar4 = local_94;
  uVar3 = local_98;
  plVar2 = local_a0;
  if (iVar7 == 0) {
    if (local_90 == (long *)0x0) {
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        pcVar12 = "plugInInterface != __null";
LAB_1006357f0:
        local_6c = 0x822;
        uStack_70 = 1;
        uStack_72 = 0x7a;
        local_74 = 0xa90;
        local_78._2_2_ = 0x822;
        local_78._0_2_ = 0x202;
        local_6a = SUB82(pcVar12,0);
        uStack_68 = (uint)((ulong)pcVar12 >> 0x10);
        uStack_64 = 0;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_78,0x16);
      }
    }
    else {
      pcVar1 = *(code **)(*local_90 + 8);
      uVar8 = _CFUUIDGetConstantUUIDWithBytes
                        (0,0xfe,0x2f,0xd5,0x2f,0x3b,0x5a,0x47,0x3b,0x97,0x7b,0xad,0x99,0,0x1e,0xb3,
                         0xed);
      auVar15 = _CFUUIDGetUUIDBytes(uVar8);
      iVar7 = (*pcVar1)(plVar5,auVar15._0_8_,auVar15._8_8_,&local_88);
      _IODestroyPlugInInterface(local_90);
      if (iVar7 != 0) {
        uVar8 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        if (cVar6 != '\0') {
          puVar13 = &local_78;
          local_78._0_2_ = 0x202;
          local_78._2_2_ = 0x822;
          local_74 = 0xa90;
          uStack_72 = 0x7a;
          uStack_70 = 1;
          local_6c = 0x822;
          pcVar12 = "hresult == ((HRESULT)0x00000000L)";
          goto LAB_100635732;
        }
        goto LAB_100635474;
      }
      if (local_88 != (long *)0x0) {
        iVar7 = (**(code **)(*local_88 + 0x68))(local_88,&local_7c);
        if (iVar7 != 0) goto LAB_100635454;
        if (local_7c != 0x5ac) {
          uVar8 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar8,0x10);
          if (cVar6 != '\0') {
            local_78._0_2_ = 0x202;
            local_78._2_2_ = 0x822;
            local_74 = 0xa90;
            uStack_72 = 0x7a;
            uStack_70 = 1;
            local_6c = 0x822;
            local_6a = 0x6bf6;
            uStack_68 = 0x1007f;
            uStack_64 = 0;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_78,0x16);
          }
          FUN_1001782e9(0,0);
          iVar7 = -0x1ffffd39;
          goto LAB_10063547d;
        }
        local_78._0_2_ = 0x40c0;
        local_78._2_2_ = 0;
        local_74 = 0;
        uStack_72 = 2;
        uStack_70 = SUB84(&local_7a,0);
        local_6c = (undefined2)((ulong)&local_7a >> 0x20);
        local_6a = (undefined2)((ulong)&local_7a >> 0x30);
        iVar7 = (**(code **)(*local_88 + 0xd0))();
        if (iVar7 != 0) goto LAB_10063547d;
        if (uStack_68 == uStack_72) {
          iVar7 = -0x1ffffd39;
          uVar14 = (ushort)uVar4;
          if (local_7a < uVar14) goto LAB_10063547d;
          local_78._0_2_ = 0x40c0;
          local_74 = 0;
          local_78._2_2_ = uVar14;
          if (uVar14 == 2) {
            lVar10 = FUN_1001c6479(0,0x1000);
            if (lVar10 != 0) {
              do {
                uStack_72 = 0x1000;
                lVar11 = (ulong)local_74 * 0x1000 + lVar10;
                uStack_70 = (undefined4)lVar11;
                local_6c = (undefined2)((ulong)lVar11 >> 0x20);
                local_6a = (undefined2)((ulong)lVar11 >> 0x30);
                iVar7 = (**(code **)(*local_88 + 0xd0))(local_88,&local_78);
                if (iVar7 != 0) {
                  uVar8 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar6 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "err == 0";
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                  FUN_1001c64c1(lVar10);
                  goto LAB_100635968;
                }
                if (uStack_68 < uStack_72) {
                  *(undefined1 *)
                   (CONCAT26(local_6a,CONCAT24(local_6c,uStack_70)) + (ulong)uStack_68) = 0;
                  iVar7 = 0;
                  goto LAB_100635978;
                }
                local_74 = local_74 + 1;
                lVar10 = FUN_1001c6479(lVar10,(ulong)local_74 * 0x1000 + 0x1000);
              } while (lVar10 != 0);
            }
            uVar8 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar8,0x10);
            if (cVar6 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "checkpointData != __null";
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x16);
            }
            iVar7 = 0;
            FUN_1001782e9(0,0);
LAB_100635968:
            lVar10 = 0;
LAB_100635978:
            if ((ushort)uVar3 != 8) {
              uVar8 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar8,0x10);
              if (cVar6 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "resultLength == sizeof(MemPtr)";
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x16)
                ;
              }
              FUN_1001782e9(0,0);
            }
            *plVar2 = lVar10;
            goto LAB_10063547d;
          }
          uStack_70 = SUB84(plVar2,0);
          local_6c = (undefined2)((ulong)plVar2 >> 0x20);
          local_6a = (undefined2)((ulong)plVar2 >> 0x30);
          uStack_72 = (ushort)uVar3;
          iVar7 = (**(code **)(*local_88 + 0xd0))();
          if (iVar7 != 0) {
            uVar8 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar8,0x10);
            if (cVar6 == '\0') goto LAB_100635474;
            puVar13 = &local_58;
            goto LAB_100635712;
          }
          iVar7 = 0;
          if (uStack_68 == uStack_72) goto LAB_10063547d;
        }
        uVar8 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        if (cVar6 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "req.wLenDone == req.wLength";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar7 = -0x1ffffd19;
        goto LAB_10063547d;
      }
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        pcVar12 = "deviceInterface != __null";
        goto LAB_1006357f0;
      }
    }
    FUN_1001782e9(0,0);
    iVar7 = -0x1ffffd44;
  }
  else {
LAB_100635454:
    uVar8 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar8,0x10);
    if (cVar6 != '\0') {
      puVar13 = &local_78;
LAB_100635712:
      *puVar13 = 0x8220202;
      *(char **)(puVar13 + 1) = "Assertion failure";
      *(undefined2 *)(puVar13 + 3) = 0x822;
      pcVar12 = "err == 0";
LAB_100635732:
      *(char **)((long)puVar13 + 0xe) = pcVar12;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",puVar13,0x16);
    }
LAB_100635474:
    FUN_1001782e9(0,0);
  }
LAB_10063547d:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x18))();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

