// name: FUN_10060514d
// address: 10060514d

uint FUN_10060514d(long param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long *local_a0;
  long local_98;
  long lStack_90;
  uint local_88;
  uint local_84;
  undefined8 local_80;
  uint local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_58;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 uStack_42;
  char *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 & 0x183) == 0) {
    uVar11 = 0;
  }
  else {
    local_98 = 0;
    lStack_90 = 0;
    local_a0 = &local_98;
    lVar5 = FUN_1004e0c3f(param_1,1);
    if (lVar5 == 0) {
      uVar9 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar9,0x10);
      if (cVar1 != '\0') {
        local_58._0_4_ = 0x8220202;
        local_58._4_4_ = 0x7a0a90;
        local_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x822;
        uStack_4a = 0x472b;
        uStack_48 = 0x7f;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      uVar11 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      FUN_1002b1d9f(&local_58,lVar5);
      FUN_1002a41f4(&local_a0,local_98);
      local_98 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,CONCAT22(uStack_4e,local_50)));
      lStack_90 = CONCAT26(uStack_42,CONCAT42(uStack_46,uStack_48));
      lVar7 = local_98;
      local_a0 = &local_98;
      if (lStack_90 != 0) {
        *(long **)(local_98 + 0x10) = &local_98;
        local_50 = 0;
        uStack_4e = 0;
        uStack_4c = 0;
        uStack_4a = 0;
        uStack_48 = 0;
        uStack_46 = 0;
        uStack_42 = 0;
        lVar7 = 0;
        local_a0 = local_58;
        local_58 = (long *)&local_50;
      }
      FUN_1002a41f4(&local_58,lVar7);
      lVar7 = FUN_1002f930c(*(undefined8 *)(param_1 + 0x30));
      local_74 = param_2 & 0x100;
      local_88 = local_74 >> 8;
      local_84 = param_2 & 0x202;
      uVar11 = 0;
      while (lVar7 != 0) {
        uVar9 = *(undefined8 *)(lVar7 + 0x58);
        cVar1 = FUN_100605e59(uVar9,lVar5,&local_a0,local_88);
        if (cVar1 != '\0') {
          if ((*(int *)(lVar7 + 0xc2) < 0) && ((*(byte *)(lVar7 + 0xc6) & 1) == 0)) {
            uVar3 = FUN_1004744bf(lVar7,0);
            if ((uVar3 & 0x10004) == 4) goto LAB_1006056f8;
            uVar8 = FUN_1004744bf(lVar7,0);
            if ((uVar8 & 0xc00000) != 0 && (uVar8 & 0x18000) == 0) {
              if ((char)param_2 < '\0') {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                local_70 = DAT_1008c75b8;
                cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar1 != '\0') {
                  FUN_100476ac1(&local_58,lVar7);
                  local_64 = FUN_1001b83ae(&local_58);
                  local_68 = 0x8220102;
                  __os_log_impl(0x100000000,local_70,1,
                                "sync> found device downloaded book track \"%{public}s\"",&local_68,
                                0xc);
                  FUN_1001b7a50(&local_58);
                }
                cVar1 = FUN_1002bdcf0(uVar9);
                uVar3 = (uint)(cVar1 != '\0') << 8 | 0x80;
                if (local_74 == 0) {
                  uVar3 = 0x80;
                }
                uVar11 = uVar11 | uVar3;
              }
              goto LAB_1006056f8;
            }
            cVar1 = FUN_1002bdcf0(uVar9);
            if (cVar1 != '\0') {
              if (local_74 != 0) {
                cVar1 = FUN_1004ec140(param_1,uVar9);
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                local_70 = DAT_1008c75b8;
                cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar2 != '\0') {
                  local_80 = FUN_100606010(lVar7);
                  FUN_100476ac1(&local_68,lVar7);
                  uVar9 = FUN_1001b83ae(&local_68);
                  local_40 = ", but cloud music library is enabled on device";
                  if (cVar1 == '\0') {
                    local_40 = "";
                  }
                  local_58._0_4_ = 0x8220302;
                  local_58._4_4_ = (uint)local_80;
                  local_50 = (undefined2)((ulong)local_80 >> 0x20);
                  uStack_4e = (undefined2)((ulong)local_80 >> 0x30);
                  uStack_4c = 0x822;
                  uStack_4a = (undefined2)uVar9;
                  uStack_48 = (undefined2)((ulong)uVar9 >> 0x10);
                  uStack_46 = (undefined4)((ulong)uVar9 >> 0x20);
                  uStack_42 = 0x822;
                  __os_log_impl(0x100000000,local_70,1,
                                "sync> found device redownloaded %{public}s track \"%{public}s\"%{public}s"
                                ,&local_58,0x20);
                  FUN_1001b7a50(&local_68);
                }
                if (cVar1 == '\0') {
                  uVar11 = uVar11 | 0x100;
                }
              }
              goto LAB_1006056f8;
            }
            if ((param_2 & 2) != 0) {
              cVar1 = FUN_1006060f8(uVar9,param_2);
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              local_70 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar2 != '\0') {
                local_80 = FUN_100606010(lVar7);
                FUN_100476ac1(&local_68,lVar7);
                uVar9 = FUN_1001b83ae(&local_68);
                local_40 = ", but cloud music library is enabled on host";
                if (cVar1 != '\0') {
                  local_40 = "";
                }
                local_58._0_4_ = 0x8220302;
                local_58._4_4_ = (uint)local_80;
                local_50 = (undefined2)((ulong)local_80 >> 0x20);
                uStack_4e = (undefined2)((ulong)local_80 >> 0x30);
                uStack_4c = 0x822;
                uStack_4a = (undefined2)uVar9;
                uStack_48 = (undefined2)((ulong)uVar9 >> 0x10);
                uStack_46 = (undefined4)((ulong)uVar9 >> 0x20);
                uStack_42 = 0x822;
                __os_log_impl(0x100000000,local_70,1,
                              "sync> found device purchased %{public}s track \"%{public}s\"%{public}s"
                              ,&local_58,0x20);
                FUN_1001b7a50(&local_68);
              }
              uVar3 = 0;
              if (cVar1 != '\0') {
                uVar3 = local_84;
              }
              uVar11 = uVar11 | uVar3;
              goto LAB_1006056f8;
            }
          }
          else {
            if (((param_2 & 1) != 0) && ((uVar11 & 1) == 0)) {
              lVar10 = FUN_1006061f2(uVar9,lVar5,&local_a0,0,0);
              if (lVar10 == 0) {
                iVar4 = FUN_1002b0559(uVar9,2);
                if (iVar4 == 0) {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  local_70 = DAT_1008c75b8;
                  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar1 != '\0') {
                    uVar9 = FUN_100606010(lVar7);
                    FUN_100476ac1(&local_68,lVar7);
                    uVar6 = FUN_1001b83ae(&local_68);
                    local_58._0_4_ = 0x8220202;
                    local_58._4_4_ = (uint)uVar9;
                    local_50 = (undefined2)((ulong)uVar9 >> 0x20);
                    uStack_4e = (undefined2)((ulong)uVar9 >> 0x30);
                    uStack_4c = 0x822;
                    uStack_4a = (undefined2)uVar6;
                    uStack_48 = (undefined2)((ulong)uVar6 >> 0x10);
                    uStack_46 = (undefined4)((ulong)uVar6 >> 0x20);
                    __os_log_impl(0x100000000,local_70,1,
                                  "sync> found synced purchased %{public}s track \"%{public}s\"",
                                  &local_58,0x16);
                    FUN_1001b7a50(&local_68);
                  }
                  uVar11 = uVar11 | 1;
                }
              }
            }
LAB_1006056f8:
            if (((param_2 & 2) != 0) && ((uVar11 & 2) == 0)) goto LAB_100605728;
          }
          if ((((param_2 & 1) == 0) || ((uVar11 & 1) != 0)) &&
             ((-1 < (char)param_2 || ((uVar11 & 0x80) != 0)))) break;
        }
LAB_100605728:
        lVar7 = FUN_1002f9451(lVar7);
      }
    }
    FUN_1002a41f4(&local_a0,local_98);
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar9 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    FUN_1006064a6(&local_a0,uVar11);
    uVar6 = FUN_1001b83ae(&local_a0);
    local_58._0_4_ = 0x4000202;
    local_50 = 0x822;
    uStack_4e = (undefined2)uVar6;
    uStack_4c = (undefined2)((ulong)uVar6 >> 0x10);
    uStack_4a = (undefined2)((ulong)uVar6 >> 0x20);
    uStack_48 = (undefined2)((ulong)uVar6 >> 0x30);
    local_58._4_4_ = uVar11;
    __os_log_impl(0x100000000,uVar9,1,"sync> needed reverse sync options = 0x%08X (%{public}s)",
                  &local_58,0x12);
    FUN_1001b7a50(&local_a0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

