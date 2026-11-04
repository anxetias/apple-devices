// name: FUN_100214106
// address: 100214106

int FUN_100214106(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 local_250 [16];
  long local_240;
  long local_238;
  long *local_230;
  cfstringStruct local_228;
  cfstringStruct *local_208;
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [66];
  undefined4 local_18e;
  undefined4 local_148;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x21c0) == 0) {
    uVar11 = 0;
    bVar12 = false;
  }
  else {
    FUN_100218802(&local_238);
    if (local_238 == 0) {
      uVar11 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar11,0x10);
      if (cVar4 != '\0') {
        local_228.field0_0x0._0_4_ = 0x8220202;
        local_228.field0_0x0._4_4_ = 0x7a0a90;
        local_228.field1_0x8._0_4_ = 1;
        local_228.field1_0x8._4_2_ = 0x822;
        local_228.field1_0x8._6_2_ = 0x1cce;
        local_228.field2_0x10._0_2_ = 0x7a;
        local_228.field2_0x10._2_4_ = 1;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
      }
      lVar9 = 0;
      FUN_1001782e9(0,0);
      iVar6 = -0x2b;
LAB_1002143c5:
      FUN_1001e9587(param_1 + 0x2b00);
      *(undefined1 *)(param_1 + 0x2aec) = 0;
LAB_10021447f:
      FUN_10017060f(lVar9);
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0x21c0);
      local_228.field0_0x0._0_4_ = 0x8741b0;
      local_228.field0_0x0._4_4_ = 1;
      local_228.field1_0x8._0_4_ = 0x874190;
      local_228.field1_0x8._4_2_ = 1;
      local_228.field1_0x8._6_2_ = 0;
      local_228.field2_0x10._0_2_ = 0x5c10;
      local_228.field2_0x10._2_4_ = 0x10087;
      local_228.field2_0x10._6_2_ = 0;
      local_228.field3_0x18 = (long)&cf_SerialNumber;
      local_208 = &cf_ECID;
      uVar7 = _CFStringGetTypeID();
      lVar8 = FUN_1005ba740(uVar11,0,&cf_IntegratedCircuitCardIdentity,uVar7,0);
      local_68 = lVar8;
      uVar7 = _CFStringGetTypeID();
      local_240 = FUN_1005ba740(uVar11,0,&cf_InternationalMobileEquipmentIdentity,uVar7,0);
      local_60 = local_240;
      uVar7 = _CFStringGetTypeID();
      lVar9 = FUN_1005ba740(uVar11,0,&cf_InternationalMobileSubscriberIdentity,uVar7,0);
      local_58 = lVar9;
      uVar7 = _CFStringGetTypeID();
      lVar10 = FUN_1005ba740(uVar11,0,&cf_SerialNumber,uVar7,0);
      local_50 = lVar10;
      uVar7 = _CFNumberGetTypeID();
      local_48 = FUN_1005ba740(uVar11,0,&cf_UniqueChipID,uVar7,0);
      if ((lVar10 == 0 || lVar9 == 0) || (local_240 == 0 || lVar8 == 0)) {
        lVar9 = 0;
      }
      else {
        lVar9 = FUN_1001713ff(DAT_1008c4d90,&local_228,&local_68,5 - (ulong)(local_48 == 0),
                              PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        lVar8 = local_68;
      }
      FUN_10017060f(lVar8);
      FUN_10017060f(local_60);
      FUN_10017060f(local_58);
      FUN_10017060f(local_50);
      FUN_10017060f(local_48);
      if (lVar9 != 0) {
        iVar6 = FUN_1001e8dd6(param_1 + 0x2b00,0,0);
        if (iVar6 == -0x80) goto LAB_1002143c5;
        if (iVar6 == 0) {
          *(undefined1 *)(param_1 + 0x2aec) = 1;
          local_228.field0_0x0._0_4_ = 0x83de78;
          local_228.field0_0x0._4_4_ = 1;
          local_228.field1_0x8._0_4_ = (undefined4)param_1;
          local_228.field1_0x8._4_2_ = (undefined2)((ulong)param_1 >> 0x20);
          local_228.field1_0x8._6_2_ = (undefined2)((ulong)param_1 >> 0x30);
          local_208 = &local_228;
          FUN_100129172(local_238,&local_228);
          if (local_208 == &local_228) {
            lVar8 = 0x20;
LAB_1002143e2:
            (**(code **)(local_208->field0_0x0 + lVar8))();
          }
          else {
            lVar8 = 0x28;
            if (local_208 != (cfstringStruct *)0x0) goto LAB_1002143e2;
          }
          FUN_100128db6(local_238,2);
          lVar8 = local_238;
          FUN_1001a8d64(&local_228,lVar9);
          FUN_100128f50(lVar8,&local_228);
          FUN_1001a8fac(&local_228);
          FUN_100128e26(local_238,2);
          lVar8 = local_238;
          FUN_1001b7b04(&local_228,"checkUnbrickHealth");
          FUN_100128ef0(lVar8,&local_228);
          FUN_1001b7a50(&local_228);
          FUN_10014105c(local_238);
        }
        else {
          uVar11 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar11,0x10);
          if (cVar4 != '\0') {
            local_228.field0_0x0._0_4_ = 0x8220202;
            local_228.field0_0x0._4_4_ = 0x7a0a90;
            local_228.field1_0x8._0_4_ = 1;
            local_228.field1_0x8._4_2_ = 0x400;
            local_228.field1_0x8._6_2_ = (undefined2)iVar6;
            local_228.field2_0x10._0_2_ = (undefined2)((uint)iVar6 >> 0x10);
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_228,0x12);
          }
          if (iVar6 != 0) goto LAB_1002143c5;
        }
        iVar6 = 0;
        goto LAB_10021447f;
      }
      iVar6 = 0;
    }
    if (local_230 != (long *)0x0) {
      LOCK();
      plVar1 = local_230 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*local_230 + 0x10))(local_230);
        std::__shared_weak_count::__release_weak();
      }
    }
    bVar12 = iVar6 == 0;
    uVar11 = *(undefined8 *)(param_1 + 0x21c0);
  }
  *(undefined8 *)(param_1 + 0x2868) = uVar11;
  *(undefined8 *)(param_1 + 0x21c0) = 0;
  *(undefined8 *)(param_1 + 0x2870) = *(undefined8 *)(param_1 + 0x21c8);
  *(undefined8 *)(param_1 + 0x2878) = *(undefined8 *)(param_1 + 0x21d0);
  *(undefined8 *)(param_1 + 0x21c8) = 0;
  *(undefined8 *)(param_1 + 0x21d0) = 0;
  *(undefined8 *)(param_1 + 0x2888) = *(undefined8 *)(param_1 + 0x21e0);
  *(undefined8 *)(param_1 + 0x21e0) = 0;
  *(undefined1 *)(param_1 + 0x28a0) = 1;
  iVar6 = FUN_1001ee6ff(FUN_100213ac8,param_1,0,0,0,"");
  if (iVar6 != -0x80) {
    if (iVar6 == 0) {
      FUN_1002136da(param_1,0);
      iVar6 = *(int *)(param_1 + 0x2acc);
      if (iVar6 == 0) {
        iVar6 = 0x675;
        if (*(long *)(param_1 + 0x21c0) == 0) {
          if (*(long *)(param_1 + 0x21d8) == -1) {
            iVar6 = 0x676;
          }
          else if (*(long *)(param_1 + 0x21d8) == 0) {
            iVar6 = 0x678;
            if (((*(long *)(param_1 + 0x21d0) == 0) &&
                (iVar6 = 0x679, *(long *)(param_1 + 0x21c8) == 0)) &&
               (iVar6 = 0x684, *(long *)(param_1 + 0x21e0) == 0)) {
              *(undefined8 *)(param_1 + 0x21d0) = *(undefined8 *)(param_1 + 0x2878);
              iVar6 = 0;
              *(undefined8 *)(param_1 + 0x2878) = 0;
              uVar2 = *(undefined4 *)(param_1 + 0x2868);
              uVar3 = *(undefined4 *)(param_1 + 0x2870);
              *(undefined8 *)(param_1 + 0x2868) = 0;
              *(undefined8 *)(param_1 + 0x2870) = 0;
              *(undefined4 *)(param_1 + 0x21c0) = uVar2;
              *(undefined4 *)(param_1 + 0x21c4) = *(undefined4 *)(param_1 + 0x286c);
              *(undefined4 *)(param_1 + 0x21c8) = uVar3;
              *(undefined4 *)(param_1 + 0x21cc) = *(undefined4 *)(param_1 + 0x2874);
              *(undefined8 *)(param_1 + 0x21e0) = *(undefined8 *)(param_1 + 0x2888);
              *(undefined8 *)(param_1 + 0x2888) = 0;
              lVar9 = *(long *)(param_1 + 11000);
              if ((lVar9 != 0) && (lVar8 = FUN_100166c1b(lVar9,&cf_MessageType), lVar8 != 0)) {
                uVar11 = FUN_100166c1b(lVar9,&cf_Message);
                FUN_1001b7eb0(&local_238,uVar11);
                uVar11 = FUN_100166c1b(lVar9,&cf_Explanation);
                FUN_1001b7eb0(local_250,uVar11);
                cVar4 = FUN_100169eb1(lVar8,&cf_WARN);
                if (cVar4 == '\0') {
                  cVar4 = FUN_100169eb1(lVar8,&cf_ERROR);
                  if (cVar4 == '\0') {
                    iVar6 = 0;
                    FUN_100169eb1(lVar8,&cf_NONE);
                  }
                  else {
                    FUN_10044eef2(&local_228);
                    FUN_1001b8172(local_200,&local_238);
                    FUN_1001b8172(&local_228.field1_0x8,param_1 + 0x23e8);
                    FUN_1001b8172(local_1f0,local_250);
                    FUN_1001c334a(&local_68,0x5db30003);
                    FUN_1001b80b2(local_1e0,&local_68);
                    FUN_1001b7a50(&local_68);
                    local_18e = CONCAT22(local_18e._2_2_,1);
                    local_148 = 1;
                    FUN_10044f1a0();
                    FUN_10020dfaa(&local_228);
                    iVar6 = -0x80;
                  }
                }
                else {
                  FUN_10044eef2(&local_228);
                  FUN_1001b8172(local_200,&local_238);
                  FUN_1001b8172(&local_228.field1_0x8,param_1 + 0x23e8);
                  FUN_1001b8172(local_1f0,local_250);
                  FUN_1001c334a(&local_68,0x5db3000e);
                  FUN_1001b80b2(local_1e0,&local_68);
                  FUN_1001b7a50(&local_68);
                  FUN_1001c334a(&local_68,0x5db30004);
                  FUN_1001b80b2(local_1d0,&local_68);
                  FUN_1001b7a50(&local_68);
                  local_18e = 0x20002;
                  local_148 = 3;
                  sVar5 = FUN_10044f1a0();
                  FUN_10020dfaa(&local_228);
                  iVar6 = (uint)(sVar5 != 2) * 0x80 + -0x80;
                }
                FUN_1001b7a50(local_250);
                FUN_1001b7a50(&local_238);
              }
              goto LAB_10021458a;
            }
          }
          else {
            iVar6 = 0x677;
          }
        }
        FUN_10020fb9c(param_1);
      }
      goto LAB_10021458a;
    }
    uVar11 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar11,0x10);
    if (cVar4 != '\0') {
      local_228.field0_0x0._0_4_ = 0x8220202;
      local_228.field0_0x0._4_4_ = 0x7a0a90;
      local_228.field1_0x8._0_4_ = 1;
      local_228.field1_0x8._4_2_ = 0x400;
      local_228.field1_0x8._6_2_ = (undefined2)iVar6;
      local_228.field2_0x10._0_2_ = (undefined2)((uint)iVar6 >> 0x10);
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_228,0x12);
    }
  }
  *(undefined1 *)(param_1 + 0x28a0) = 0;
LAB_10021458a:
  if (bVar12) {
    cVar4 = FUN_1001e8dbb(param_1 + 0x2b00);
    if (cVar4 != '\0') {
      FUN_1001e9587(param_1 + 0x2b00);
    }
    FUN_10017060f(*(undefined8 *)(param_1 + 11000));
    *(undefined1 *)(param_1 + 0x2aec) = 0;
  }
  *(undefined4 *)(param_1 + 0x2acc) = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

