// name: FUN_1005bfc7b
// address: 1005bfc7b

int FUN_1005bfc7b(undefined8 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  char *pcVar9;
  bool bVar10;
  bool bVar11;
  double dVar12;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined8 uStack_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1005b7cbc();
  if (iVar2 == -0x80) goto LAB_1005bff44;
  if (iVar2 != 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x202;
      uStack_56 = 0x822;
      uStack_54._0_4_ = 0x7a0a90;
      uStack_54._4_4_ = 1;
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    goto LAB_1005bff44;
  }
  dVar12 = (double)FUN_1001711e2();
  pcVar9 = (char *)(long)(dVar12 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1970_10082e010);
  bVar11 = true;
  if (param_2 == '\0') {
    local_58 = 0;
    uStack_56 = 0;
    uStack_54._0_4_ = 0;
    iVar2 = FUN_1005b8a8e(param_1,0,&cf_TimeIntervalSince1970,4);
    bVar10 = true;
    if (iVar2 == 0) {
      uVar4 = (long)pcVar9 - CONCAT44((undefined4)uStack_54,CONCAT22(uStack_56,local_58));
      uVar8 = -uVar4;
      if ((long)uVar8 < 0) {
        uVar8 = uVar4;
      }
      bVar10 = 0x3b < uVar8;
    }
    iVar2 = FUN_1005b8a8e(param_1,0,&cf_TimeZoneOffsetFromUTC,3);
    if (iVar2 == 0) {
      iVar3 = FUN_100178263();
      bVar11 = iVar3 != 0;
    }
    if (bVar10) goto LAB_1005bfd55;
LAB_1005bfdca:
    if (!bVar11) goto LAB_1005bff31;
    lVar5 = FUN_1001c2347();
    if (lVar5 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x202;
        uStack_56 = 0x822;
        uStack_54._0_4_ = 0x7a0a90;
        uStack_54._4_4_ = 1;
        local_4c = 0x822;
        local_4a = "timeZoneName != __null";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      lVar5 = 0;
      FUN_1001782e9(0,0);
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      iVar2 = -1;
      if (cVar1 != '\0') {
        local_58 = 0;
        pcVar9 = "CopySystemTimeZoneName failed";
        uVar6 = 2;
        puVar7 = PTR___os_log_default_10082cb88;
LAB_1005c0017:
        __os_log_error_impl(0x100000000,puVar7,0x10,pcVar9,&local_58,uVar6);
        goto LAB_1005bff31;
      }
    }
    else {
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar1 != '\0') {
        local_58 = 0x102;
        uStack_56 = 0x842;
        uStack_54._0_4_ = (undefined4)lVar5;
        uStack_54._4_4_ = (undefined4)((ulong)lVar5 >> 0x20);
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,"setting time zone to %{public}@"
                      ,&local_58,0xc);
      }
      iVar2 = _AMDeviceSetValue(param_1,0,&cf_TimeZone,lVar5);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x202;
          uStack_56 = 0x822;
          uStack_54._0_4_ = 0x7a0a90;
          uStack_54._4_4_ = 1;
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  else {
LAB_1005bfd55:
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar1 != '\0') {
      local_58 = 0x100;
      uStack_56 = 0x800;
      uStack_54 = pcVar9;
      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,"setting time interval to %lld",
                    &local_58,0xc);
    }
    lVar5 = 0;
    iVar2 = FUN_1005b8afb(param_1,0,&cf_TimeIntervalSince1970,pcVar9);
    if (iVar2 == -0x80) goto LAB_1005bff34;
    if (iVar2 == 0) goto LAB_1005bfdca;
    puVar7 = (undefined *)FUN_1001cc310();
    cVar1 = _os_log_type_enabled(puVar7,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x202;
      uStack_56 = 0x822;
      uStack_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      pcVar9 = "%{public}s: err == (%d)";
      uVar6 = 0x12;
      goto LAB_1005c0017;
    }
LAB_1005bff31:
    lVar5 = 0;
  }
LAB_1005bff34:
  FUN_10017060f(lVar5);
  FUN_1005b8595(param_1);
LAB_1005bff44:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

