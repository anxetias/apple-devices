// name: FUN_10050898a
// address: 10050898a

long * FUN_10050898a(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  long lVar16;
  long *plVar17;
  void *pvVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  char local_58b8 [80];
  char local_5868 [48];
  undefined4 local_5838;
  undefined8 local_5818;
  long local_5810;
  ulong local_5808;
  void *local_5800;
  void *local_57f8;
  void *local_57f0;
  void *local_57e8;
  void *local_57e0;
  long local_57d8;
  long *local_57d0;
  undefined4 local_57c8;
  char *local_57c4;
  undefined2 local_57bc;
  char *local_57ba;
  ulong local_4168;
  undefined8 uStack_4160;
  undefined1 local_4158 [104];
  long local_40f0;
  int local_40d4;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined4 local_ae0;
  undefined1 local_ad8 [1056];
  undefined4 local_6b8;
  char *local_6b4;
  undefined2 local_6ac;
  int local_6aa;
  undefined1 local_698 [44];
  undefined1 local_66c [1056];
  undefined4 local_24c;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1005089a2;
  lVar16 = FUN_100108310();
  lVar16 = -lVar16;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar23 = 0;
  if (*(short *)(param_2 + 4) == 0) {
LAB_100509029:
    local_57d0 = (long *)0x0;
  }
  else {
    local_57d0 = (long *)0x0;
    local_5818 = param_1;
    do {
      *(undefined8 *)((long)&local_38 + lVar16) = 0x1005089ec;
      cVar13 = FUN_100637a00(param_2,uVar23,local_ad8);
      if (cVar13 == '\0') {
        *(undefined8 *)((long)&local_38 + lVar16) = 0x100508c46;
        uVar19 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar16) = 0x100508c56;
        cVar13 = _os_log_type_enabled(uVar19,0x10);
        if (cVar13 != '\0') {
          local_57c8 = 0x8220202;
          local_57c4 = "Assertion failure";
          local_57bc = 0x822;
          local_57ba = "GetExternalDragReceiveItemFileSpec( itemList, itemIndex, &fileSpec )";
          *(undefined8 *)((long)&local_38 + lVar16) = 0x100508d3e;
          __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_57c8,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar16) = 0x100508c67;
        FUN_1001782e9(0,0);
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar16) = 0x100508a0e;
        iVar14 = FUN_100188aa6(local_ad8,local_ad8,1,local_58b8,0);
        if ((iVar14 == 0) && (local_58b8[0] == '\0')) {
          local_4168 = 0;
          uStack_4160 = 0;
          *(undefined8 *)((long)&local_38 + lVar16) = 0x100508a46;
          iVar14 = FUN_10017d477(local_ad8,local_5868,&local_238);
          if ((iVar14 == 0) && (local_5868[0] == '\0')) {
            *(undefined8 *)((long)&local_38 + lVar16) = 0x100508a6d;
            uVar15 = FUN_1003aea86(local_5838,&local_238);
            *(undefined8 *)((long)&local_38 + lVar16) = 0x100508a74;
            cVar13 = FUN_100536061(uVar15);
            if (cVar13 != '\0') {
              *(undefined8 *)((long)&local_38 + lVar16) = 0x100508a8d;
              FUN_1001c62d9(local_698,0x460);
              *(undefined8 *)((long)&local_38 + lVar16) = 0x100508aa1;
              _memcpy(local_66c,local_ad8,0x420);
              local_24c = local_5838;
              *(undefined8 *)((long)&local_38 + lVar16) = 0x100508ad2;
              iVar14 = FUN_1003b7a40(0x46494c45,local_698,&local_57c8,&local_4168,0,0);
              if (iVar14 != -0x80) {
                if (iVar14 == 0) {
                  if ((((local_4168 & 8) != 0) && (local_40f0 != 0)) && (local_40d4 < 0)) {
                    *(undefined8 *)((long)&local_38 + lVar16) = 0x100508b20;
                    FUN_1001c62d9(local_698,0x448);
                    *(undefined8 *)((long)&local_38 + lVar16) = 0x100508b37;
                    _memcpy(local_698,local_ad8,0x420);
                    *(undefined8 *)((long)&local_38 + lVar16) = 0x100508b53;
                    iVar14 = FUN_1004e9e57(local_5818,0x46494c45,local_698,0);
                    if (iVar14 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar16) = 0x100508b67;
                      FUN_1003af8bd(&local_b20);
                      plVar17 = local_57d0;
                      if (local_57d0 == (long *)0x0) {
                        *(undefined8 *)((long)&local_38 + lVar16) = 0x100508b84;
                        plVar17 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
                        if (plVar17 == (long *)0x0) {
                          *(undefined8 *)((long)&local_38 + lVar16) = 0x10050900c;
                          uVar19 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar16) = 0x10050901c;
                          cVar13 = _os_log_type_enabled(uVar19,0x10);
                          if (cVar13 != '\0') {
                            local_238 = 0x8220202;
                            local_234 = "Assertion failure";
                            local_22c = 0x822;
                            local_22a = "fairPlayV3TrackList != nullptr";
                            *(undefined8 *)((long)&local_38 + lVar16) = 0x1005090a9;
                            __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",
                                                &local_238,0x16);
                          }
                          *(undefined8 *)((long)&local_38 + lVar16) = 0x100509029;
                          FUN_1001782e9(0,0);
                          goto LAB_100509029;
                        }
                        *plVar17 = 0;
                        plVar17[1] = 0;
                        plVar17[2] = 0;
                      }
                      pvVar18 = (void *)plVar17[1];
                      local_57d0 = plVar17;
                      if (pvVar18 < (void *)plVar17[2]) {
                        *(undefined8 *)((long)&local_38 + lVar16) = 0x100508bc7;
                        _memcpy(pvVar18,&local_57c8,0x1660);
                        *(ulong *)((long)pvVar18 + 0x1660) = local_4168;
                        *(undefined8 *)((long)pvVar18 + 0x1668) = uStack_4160;
                        *(undefined8 *)((long)&local_38 + lVar16) = 0x100508bf0;
                        _memcpy((void *)((long)pvVar18 + 0x1670),local_4158,0x3638);
                        *(undefined8 *)((long)pvVar18 + 0x4ca8) = local_b20;
                        *(undefined8 *)((long)pvVar18 + 0x4cb0) = uStack_b18;
                        *(undefined8 *)((long)pvVar18 + 0x4cb8) = local_b10;
                        *(undefined8 *)((long)pvVar18 + 0x4cc0) = uStack_b08;
                        *(undefined8 *)((long)pvVar18 + 0x4cc8) = local_b00;
                        *(undefined8 *)((long)pvVar18 + 0x4cd0) = uStack_af8;
                        *(undefined8 *)((long)pvVar18 + 0x4cd8) = local_af0;
                        *(undefined8 *)((long)pvVar18 + 0x4ce0) = uStack_ae8;
                        *(undefined4 *)((long)pvVar18 + 0x4ce8) = local_ae0;
                        lVar21 = (long)pvVar18 + 0x4cec;
                      }
                      else {
                        pvVar4 = (void *)*plVar17;
                        lVar21 = (long)pvVar18 - (long)pvVar4;
                        lVar22 = lVar21 >> 2;
                        uVar1 = lVar22 * 0x146262b2921f4df3 + 1;
                        local_57f0 = pvVar18;
                        if (0x353fb3746e08a < uVar1) {
                          *(undefined8 *)((long)&local_38 + lVar16) = 0x1005090b8;
                          FUN_1005090ca();
                    /* WARNING: Does not return */
                          pcVar5 = (code *)invalidInstructionException();
                          (*pcVar5)();
                        }
                        lVar20 = plVar17[2] - (long)pvVar4 >> 2;
                        uVar6 = lVar20 * 0x28c4c565243e9be6;
                        local_5808 = uVar1;
                        if (uVar1 < uVar6) {
                          local_5808 = uVar6;
                        }
                        if (0x1a9fd9ba37044 < (ulong)(lVar20 * 0x146262b2921f4df3)) {
                          local_5808 = 0x353fb3746e08a;
                        }
                        local_5810 = lVar21;
                        local_57e0 = pvVar4;
                        if (local_5808 == 0) {
                          pvVar18 = (void *)0x0;
                        }
                        else {
                          if (0x353fb3746e08a < local_5808) {
                    /* WARNING: Subroutine does not return */
                            *(undefined8 *)((long)&local_38 + lVar16) = 0x1005090bf;
                            FUN_1001082d0();
                          }
                          *(undefined8 *)((long)&local_38 + lVar16) = 0x100508dd8;
                          pvVar18 = operator_new(local_5808 * 0x4cec);
                        }
                        lVar21 = lVar22 * 4;
                        local_5800 = (void *)((long)pvVar18 + lVar21);
                        *(undefined8 *)((long)&local_38 + lVar16) = 0x100508e03;
                        _memcpy(local_5800,&local_57c8,0x1660);
                        *(ulong *)((long)pvVar18 + lVar21 + 0x1660) = local_4168;
                        *(undefined8 *)((long)pvVar18 + lVar21 + 0x1668) = uStack_4160;
                        *(undefined8 *)((long)&local_38 + lVar16) = 0x100508e3b;
                        local_57e8 = pvVar18;
                        local_57d8 = lVar21;
                        _memcpy((void *)((long)pvVar18 + lVar21 + 0x1670),local_4158,0x3638);
                        *(undefined8 *)((long)pvVar18 + lVar21 + 0x4ca8) = local_b20;
                        *(undefined8 *)((long)pvVar18 + lVar21 + 0x4cb0) = uStack_b18;
                        *(undefined8 *)((long)pvVar18 + lVar21 + 0x4cb8) = local_b10;
                        *(undefined8 *)((long)pvVar18 + lVar21 + 0x4cc0) = uStack_b08;
                        *(undefined8 *)((long)pvVar18 + lVar21 + 0x4cc8) = local_b00;
                        *(undefined8 *)((long)pvVar18 + lVar21 + 0x4cd0) = uStack_af8;
                        *(undefined8 *)((long)pvVar18 + lVar21 + 0x4cd8) = local_af0;
                        *(undefined8 *)((long)pvVar18 + lVar21 + 0x4ce0) = uStack_ae8;
                        *(undefined4 *)((long)pvVar18 + lVar21 + 0x4ce8) = local_ae0;
                        pvVar18 = local_57e0;
                        if (local_57e0 != local_57f0) {
                          local_57d8 = local_57d8 + lVar22 * -4 + (long)local_57e8;
                          lVar21 = 0;
                          do {
                            lVar22 = local_57d8;
                            local_57f8 = (void *)((long)local_57e0 + lVar21);
                            pvVar18 = (void *)(local_57d8 + lVar21);
                            *(undefined8 *)((long)&local_38 + lVar16) = 0x100508ee5;
                            _memcpy(pvVar18,local_57f8,0x1660);
                            puVar2 = (undefined8 *)((long)local_57e0 + lVar21 + 0x1660);
                            uVar19 = puVar2[1];
                            puVar3 = (undefined8 *)(lVar22 + 0x1660 + lVar21);
                            *puVar3 = *puVar2;
                            puVar3[1] = uVar19;
                            *(undefined8 *)((long)&local_38 + lVar16) = 0x100508f1e;
                            _memcpy((void *)((long)pvVar18 + 0x1670),
                                    (void *)((long)local_57f8 + 0x1670),0x3638);
                            puVar2 = (undefined8 *)((long)local_57e0 + lVar21 + 0x4ca8);
                            uVar19 = puVar2[1];
                            puVar3 = (undefined8 *)((long)local_57e0 + lVar21 + 0x4cb8);
                            uVar7 = *puVar3;
                            uVar8 = puVar3[1];
                            puVar3 = (undefined8 *)((long)local_57e0 + lVar21 + 0x4cc8);
                            uVar9 = *puVar3;
                            uVar10 = puVar3[1];
                            puVar3 = (undefined8 *)((long)local_57e0 + lVar21 + 0x4cd8);
                            uVar11 = *puVar3;
                            uVar12 = puVar3[1];
                            puVar3 = (undefined8 *)(lVar22 + 0x4ca8 + lVar21);
                            *puVar3 = *puVar2;
                            puVar3[1] = uVar19;
                            puVar2 = (undefined8 *)(lVar22 + 0x4cb8 + lVar21);
                            *puVar2 = uVar7;
                            puVar2[1] = uVar8;
                            puVar2 = (undefined8 *)(lVar22 + 0x4cc8 + lVar21);
                            *puVar2 = uVar9;
                            puVar2[1] = uVar10;
                            puVar2 = (undefined8 *)(lVar22 + 0x4cd8 + lVar21);
                            *puVar2 = uVar11;
                            puVar2[1] = uVar12;
                            *(undefined4 *)(lVar22 + 0x4ce8 + lVar21) =
                                 *(undefined4 *)((long)local_57e0 + lVar21 + 0x4ce8);
                            lVar21 = lVar21 + 0x4cec;
                          } while ((void *)((long)local_57f8 + 0x4cec) != local_57f0);
                          pvVar18 = (void *)*local_57d0;
                        }
                        lVar21 = (long)local_5800 + 0x4cec;
                        *local_57d0 = (long)local_5800 - local_5810;
                        local_57d0[1] = lVar21;
                        local_57d0[2] = (long)((long)local_57e8 + local_5808 * 0x4cec);
                        if (pvVar18 != (void *)0x0) {
                          *(undefined8 *)((long)&local_38 + lVar16) = 0x100508ff7;
                          operator_delete(pvVar18);
                        }
                      }
                      local_57d0[1] = lVar21;
                    }
                  }
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar16) = 0x100508c81;
                  uVar19 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar16) = 0x100508c91;
                  cVar13 = _os_log_type_enabled(uVar19,0x10);
                  if (cVar13 != '\0') {
                    local_6b8 = 0x8220202;
                    local_6b4 = "Assertion failure";
                    local_6ac = 0x400;
                    *(undefined8 *)((long)&local_38 + lVar16) = 0x100508ce5;
                    local_6aa = iVar14;
                    __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)");
                  }
                }
              }
            }
          }
        }
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < *(ushort *)(param_2 + 4));
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)&local_38 + lVar16) = 0x1005090b3;
    ___stack_chk_fail();
  }
  return local_57d0;
}

