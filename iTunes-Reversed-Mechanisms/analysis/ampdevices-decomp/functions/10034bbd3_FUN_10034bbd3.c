// name: FUN_10034bbd3
// address: 10034bbd3

void FUN_10034bbd3(undefined8 param_1,undefined8 param_2,long param_3,uint *param_4,ulong *param_5,
                  uint param_6,char param_7)

{
  undefined8 uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  char cVar16;
  long lVar17;
  ulong uVar18;
  char *pcVar19;
  undefined8 uVar20;
  ulong local_78;
  undefined4 local_68;
  uint local_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 local_5c;
  uint local_5a;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 local_52;
  uint local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 local_48;
  uint local_46;
  uint uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar17 = FUN_1003401bb();
  if (param_3 != 0 && lVar17 != 0) {
    lVar17 = FUN_100166b7f(lVar17,param_3);
  }
  if (lVar17 == 0) {
    *param_4 = 0;
  }
  else {
    FUN_100167740(lVar17,&cf__Count,param_4);
    cVar16 = FUN_100167ab3(lVar17,&cf__PhysicalSize,param_5);
    uVar11 = uStack_42;
    uVar9 = local_46;
    uVar7 = uStack_4a;
    uVar5 = uStack_4c;
    uVar15 = uStack_54;
    uVar14 = uStack_56;
    uVar13 = local_5a;
    uStack_4c = (undefined2)((ulong)param_2 >> 0x20);
    uVar6 = uStack_4c;
    uStack_4a = (undefined2)((ulong)param_2 >> 0x30);
    uVar8 = uStack_4a;
    uStack_42 = (uint)((ulong)param_2 >> 0x20);
    uVar12 = uStack_42;
    local_46 = (uint)param_2;
    uVar10 = local_46;
    uStack_56 = (undefined2)((ulong)param_3 >> 0x20);
    uVar3 = uStack_56;
    uStack_54 = (undefined2)((ulong)param_3 >> 0x30);
    uVar4 = uStack_54;
    local_5a = (uint)param_3;
    uVar2 = local_5a;
    local_5a = uVar13;
    uStack_56 = uVar14;
    uStack_54 = uVar15;
    uStack_4c = uVar5;
    uStack_4a = uVar7;
    local_46 = uVar9;
    uStack_42 = uVar11;
    if (cVar16 != '\0') {
      if ((long)*param_5 < 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar1 = DAT_1008c75b8;
        cVar16 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (param_3 == 0) {
          if (cVar16 != '\0') {
            uVar18 = *param_5;
            local_68 = 0x8000302;
            local_64 = (uint)uVar18;
            uStack_60 = (undefined2)(uVar18 >> 0x20);
            uStack_5e = (undefined2)(uVar18 >> 0x30);
            pcVar19 = "airtraffic> unrealistic PhysicalSize %llu (%lld) for %{public}@ dataclass";
            uVar20 = 0x20;
            local_5a = local_64;
            uStack_56 = uStack_60;
            uStack_54 = uStack_5e;
            local_50 = uVar10;
            uStack_4c = uVar6;
            uStack_4a = uVar8;
            goto LAB_10034be0b;
          }
        }
        else if (cVar16 != '\0') {
          uVar18 = *param_5;
          local_68 = 0x8000402;
          local_64 = (uint)uVar18;
          uStack_60 = (undefined2)(uVar18 >> 0x20);
          uStack_5e = (undefined2)(uVar18 >> 0x30);
          local_48 = 0x842;
          pcVar19 = 
          "airtraffic> unrealistic PhysicalSize %llu (%lld) for %{public}@ asset type for %{public}@ dataclass"
          ;
          uVar20 = 0x2a;
          local_5a = local_64;
          uStack_56 = uStack_60;
          uStack_54 = uStack_5e;
          local_50 = uVar2;
          uStack_4c = uVar3;
          uStack_4a = uVar4;
          local_46 = uVar10;
          uStack_42 = uVar12;
LAB_10034be0b:
          local_52 = 0x842;
          local_5c = 0x800;
          local_64 = local_5a;
          uStack_60 = uStack_56;
          uStack_5e = uStack_54;
          __os_log_impl(0x100000000,uVar1,1,pcVar19,&local_68,uVar20);
        }
        *param_5 = 0;
      }
      else if (param_7 != '\0') {
        cVar16 = FUN_100167ab3(lVar17,&cf__PurgeableSize);
        if (local_78 != 0 && cVar16 != '\0') {
          uVar18 = *param_5 - local_78;
          if (*param_5 < local_78) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar1 = DAT_1008c75b8;
            cVar16 = _os_log_type_enabled(DAT_1008c75b8,1);
            uVar15 = uStack_5e;
            uVar14 = uStack_60;
            uVar13 = local_64;
            uStack_60 = (undefined2)(local_78 >> 0x20);
            uStack_5e = (undefined2)(local_78 >> 0x30);
            local_64 = (uint)local_78;
            if (param_3 == 0) {
              if (cVar16 != '\0') {
                uVar18 = *param_5;
                local_68 = 0x8000302;
                local_5a = (uint)uVar18;
                uStack_56 = (undefined2)(uVar18 >> 0x20);
                uStack_54 = (undefined2)(uVar18 >> 0x30);
                pcVar19 = 
                "airtraffic> PurgeableSize %llu exceeds PhysicalSize %llu for %{public}@ dataclass";
                uVar20 = 0x20;
                local_50 = uVar10;
                uStack_4c = uVar6;
                uStack_4a = uVar8;
                goto LAB_10034be65;
              }
            }
            else if (cVar16 != '\0') {
              uVar18 = *param_5;
              local_68 = 0x8000402;
              local_5a = (uint)uVar18;
              uStack_56 = (undefined2)(uVar18 >> 0x20);
              uStack_54 = (undefined2)(uVar18 >> 0x30);
              local_48 = 0x842;
              pcVar19 = 
              "airtraffic> PurgeableSize %llu exceeds PhysicalSize %llu for %{public}@ asset type for %{public}@ dataclass"
              ;
              uVar20 = 0x2a;
              local_50 = uVar2;
              uStack_4c = uVar3;
              uStack_4a = uVar4;
              local_46 = uVar10;
              uStack_42 = uVar12;
LAB_10034be65:
              local_52 = 0x842;
              local_5c = 0x800;
              __os_log_impl(0x100000000,uVar1,1,pcVar19,&local_68,uVar20);
              uVar13 = local_64;
              uVar14 = uStack_60;
              uVar15 = uStack_5e;
            }
            uStack_5e = uVar15;
            uStack_60 = uVar14;
            local_64 = uVar13;
            uVar18 = 0;
          }
          *param_5 = uVar18;
        }
      }
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar16 = _os_log_type_enabled(DAT_1008c75b8,1);
    uVar15 = local_48;
    uVar14 = uStack_4a;
    uStack_4a = (undefined2)param_2;
    local_48 = (undefined2)((ulong)param_2 >> 0x10);
    if (param_3 == 0) {
      if (cVar16 != '\0') {
        local_64 = *param_4;
        uVar18 = *param_5;
        local_68 = 0x4000302;
        uStack_5e = (undefined2)uVar18;
        local_5c = (undefined2)(uVar18 >> 0x10);
        local_5a = (uint)(uVar18 >> 0x20);
        pcVar19 = "airtraffic> Count = %u, PhysicalSize = %llu for %{public}@ dataclass";
        uVar20 = 0x1c;
        uStack_54 = uStack_4a;
        local_52 = local_48;
        local_50 = uVar12;
        uStack_4a = uVar14;
        local_48 = uVar15;
        goto LAB_10034bf3d;
      }
    }
    else if (cVar16 != '\0') {
      local_64 = *param_4;
      uVar18 = *param_5;
      local_68 = 0x4000402;
      uStack_5e = (undefined2)uVar18;
      local_5c = (undefined2)(uVar18 >> 0x10);
      local_5a = (uint)(uVar18 >> 0x20);
      uStack_54 = (undefined2)param_3;
      local_52 = (undefined2)((ulong)param_3 >> 0x10);
      local_50 = (uint)((ulong)param_3 >> 0x20);
      uStack_4c = 0x842;
      pcVar19 = 
      "airtraffic> Count = %u, PhysicalSize = %llu for %{public}@ asset type for %{public}@ dataclass"
      ;
      uVar20 = 0x26;
      local_46 = uVar12;
LAB_10034bf3d:
      uStack_56 = 0x842;
      uStack_60 = 0x800;
      __os_log_impl(0x100000000,uVar1,1,pcVar19,&local_68,uVar20);
      uVar14 = uStack_4a;
      uVar15 = local_48;
    }
    local_48 = uVar15;
    uStack_4a = uVar14;
    if (param_6 != 0) {
      if (*param_5 % (ulong)param_6 != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar1 = DAT_1008c75b8;
        cVar16 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (param_3 == 0) {
          if (cVar16 != '\0') {
            uVar18 = *param_5;
            local_50 = param_6 >> 10;
            local_68 = 0x8000302;
            local_64 = (uint)uVar18;
            uStack_60 = (undefined2)(uVar18 >> 0x20);
            uStack_5e = (undefined2)(uVar18 >> 0x30);
            local_52 = 0x400;
            pcVar19 = 
            "airtraffic> PhysicalSize of %llu for %{public}@ dataclass not multiple of %uKB allocation block size"
            ;
            uVar20 = 0x1c;
            local_5a = uVar10;
            uStack_56 = uVar6;
            uStack_54 = uVar8;
            goto LAB_10034c034;
          }
        }
        else if (cVar16 != '\0') {
          uVar18 = *param_5;
          local_46 = param_6 >> 10;
          local_68 = 0x8000402;
          local_64 = (uint)uVar18;
          uStack_60 = (undefined2)(uVar18 >> 0x20);
          uStack_5e = (undefined2)(uVar18 >> 0x30);
          local_52 = 0x842;
          local_48 = 0x400;
          pcVar19 = 
          "airtraffic> PhysicalSize of %llu for %{public}@ asset type for %{public}@ dataclass not multiple of %uKB allocation block size"
          ;
          uVar20 = 0x26;
          local_5a = uVar2;
          uStack_56 = uVar3;
          uStack_54 = uVar4;
          local_50 = uVar10;
          uStack_4c = uVar6;
          uStack_4a = uVar8;
LAB_10034c034:
          local_5c = 0x842;
          __os_log_impl(0x100000000,uVar1,1,pcVar19,&local_68,uVar20);
        }
      }
    }
    if ((*param_4 != 0) || (*param_5 == 0)) goto LAB_10034c04c;
  }
  *param_5 = 0;
LAB_10034c04c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

