// name: FUN_10024ffb8
// address: 10024ffb8

int FUN_10024ffb8(long param_1,byte param_2,byte param_3)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 *puVar15;
  char local_c8;
  undefined4 local_b8;
  char *local_b4;
  undefined2 local_ac;
  char *local_aa;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar4 = FUN_100502578(*(undefined4 *)(param_1 + 8),(int *)(param_1 + 0xc));
  if (iVar4 == -0x80) goto LAB_100250794;
  if (iVar4 != 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_b8 = 0x8220202;
      local_b4 = "Assertion failure";
      local_ac = 0x400;
      local_aa = (char *)CONCAT44(local_aa._4_4_,iVar4);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_b8,0x12);
    }
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_b8 = 0x8220202;
        local_b4 = "Assertion failure";
        local_ac = 0x400;
        local_aa = (char *)CONCAT44(local_aa._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_b8,0x12);
      }
      goto LAB_100250794;
    }
  }
  if (*(int *)(param_1 + 0xc) == 0x69506164) {
    *(undefined4 *)(param_1 + 0x18) = 0x10e710de;
    *(undefined2 *)(param_1 + 0x1c) = 0x10e0;
  }
  lVar6 = FUN_1004de449(*(undefined4 *)(param_1 + 8));
  if (lVar6 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_b8 = 0x8220202;
      local_b4 = "Assertion failure";
      local_ac = 0x822;
      local_aa = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_b8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = 0x45f;
    goto LAB_100250794;
  }
  iVar4 = -0x1b;
  if ((((*(char *)(lVar6 + 0x386) == '\0') || (9 < *(uint *)(lVar6 + 0x151f8))) ||
      ((0x30cU >> (*(uint *)(lVar6 + 0x151f8) & 0x1f) & 1) == 0)) ||
     (*(char *)(lVar6 + 0x151fc) == '\0')) goto LAB_100250794;
  uVar5 = FUN_1001705fc(*(undefined8 *)(lVar6 + 0x7168));
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  uVar5 = FUN_1004de449(*(undefined4 *)(param_1 + 8));
  uVar5 = FUN_100501f71(uVar5);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  FUN_100368313(lVar6 + 0x50);
  FUN_1001c62d9(&local_b8,0x58);
  puVar15 = *(undefined4 **)(param_1 + 0x30);
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = &local_b8;
    iVar4 = FUN_1005bdc01(*(undefined8 *)(param_1 + 0x20),puVar15);
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        *(undefined4 **)(param_1 + 0x30) = puVar15;
        goto LAB_10025014f;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    goto LAB_10025076b;
  }
LAB_10025014f:
  uVar5 = FUN_1001705fc(*(undefined8 *)(puVar15 + 0x10));
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  if (*(char *)(lVar6 + 0x387) == '\0') {
    *(bool *)(param_1 + 0x89) = *(int *)(lVar6 + 0x15200) == 4;
LAB_100250213:
    lVar7 = FUN_100172473(DAT_1008c4d90,lVar6 + 0x106,0x600);
    *(long *)(param_1 + 0x78) = lVar7;
    if (lVar7 == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "mProductTypeString != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      lVar7 = FUN_100172473(DAT_1008c4d90,lVar6 + 0x66,0x600);
      *(long *)(param_1 + 0x80) = lVar7;
      if (lVar7 != 0) {
        if ((*(char *)(lVar6 + 0x387) == '\0') || (*(char *)(param_1 + 0x8b) != '\0')) {
          local_c8 = '\0';
LAB_100250280:
          uVar5 = FUN_100172473(DAT_1008c4d90,lVar6 + 0x6250,0x600);
          local_58 = (undefined4)uVar5;
          uStack_54 = (undefined4)((ulong)uVar5 >> 0x20);
          lVar7 = FUN_100173bb7(*(undefined8 *)(param_1 + 0x80),&cf_4_0,0x40);
          if (lVar7 == -1) {
            uVar5 = FUN_1001705fc(uVar5);
            *(undefined8 *)(param_1 + 0x48) = uVar5;
          }
          else {
            lVar7 = *(long *)(param_1 + 0x30);
            if (local_c8 == '\0') {
              uVar9 = *(undefined8 *)(lVar7 + 0x18);
            }
            else {
              uVar9 = 0;
            }
            iVar4 = FUN_10024f9f6(param_1,uVar9,*(undefined8 *)(lVar7 + 0x20),
                                  *(undefined8 *)(lVar7 + 0x28),uVar5,*(undefined8 *)(lVar7 + 0x30),
                                  *(undefined8 *)(lVar7 + 0x38),
                                  ((param_2 | param_3) ^ 1) & *(char *)(lVar6 + 0x387) == '\0');
            if (iVar4 != 0) {
              FUN_10014d890(&local_58);
              goto LAB_10025076b;
            }
            if (((*(char *)(param_1 + 0x8b) == '\x01') && (*(char *)(param_1 + 0x8c) == '\x01')) &&
               (**(long **)(param_1 + 0x38) == 0)) {
              **(long **)(param_1 + 0x38) = 1;
            }
          }
          FUN_10014d890(&local_58);
LAB_1002506b6:
          *(code **)(param_1 + 0x10) = FUN_1002509f7;
          iVar4 = 0;
        }
        else {
          lVar7 = *(long *)(param_1 + 0x30);
          cVar2 = *(char *)(lVar7 + 0x50);
          local_c8 = *(char *)(lVar7 + 0x51);
          if (*(long *)(lVar7 + 0x48) == 0) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "mCarrierMatchIdentifiersRef->carrierBundleInfoArray != nullptr";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            if (*(long *)(*(long *)(param_1 + 0x30) + 0x48) == 0) {
              iVar4 = (uint)(*(long *)(*(long *)(param_1 + 0x30) + 0x40) == 0) * 4 + 0x67d;
              goto LAB_10025076b;
            }
          }
          lVar7 = FUN_10017076e();
          if (lVar7 < 1) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "carrierBundleInfoArrayCount > 0";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            if (**(long **)(param_1 + 0x38) < lVar7) {
              uVar5 = FUN_10016499b(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x48));
              lVar8 = FUN_1001705fc(uVar5);
              *(long *)(param_1 + 0x40) = lVar8;
              lVar14 = **(long **)(param_1 + 0x38) + 1;
              if (lVar14 < lVar7) {
                **(long **)(param_1 + 0x38) = lVar14;
              }
              if (lVar8 == 0) {
                uVar5 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar5,0x10);
                if (cVar2 != '\0') {
                  local_58 = 0x8220202;
                  uStack_54 = 0x7a0a90;
                  uStack_50 = 1;
                  local_4c = 0x822;
                  local_4a = "mCarrierBundleInfoArrayEntryDictionary != nullptr";
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                iVar4 = 0x67e;
              }
              else {
                if ((lVar7 <= lVar14) && (cVar2 != '\0')) goto LAB_100250280;
                uVar5 = FUN_100166c1b(lVar8,&cf_kCTPostponementInfoCarrierID);
                uVar9 = FUN_100166c1b(*(undefined8 *)(param_1 + 0x40),&cf_MCC);
                puVar1 = (undefined8 *)(param_1 + 0x40);
                uVar10 = FUN_100166c1b(*puVar1,&cf_MNC);
                uVar11 = FUN_100166c1b(*puVar1,&cf_IntegratedCircuitCardIdentity);
                uVar12 = FUN_10016696d(*puVar1,&cf_SIMGID1);
                uVar13 = FUN_10016696d(*puVar1,&cf_SIMGID2);
                iVar4 = FUN_10024f9f6(param_1,uVar5,uVar9,uVar10,uVar11,uVar12,uVar13,0);
                if (iVar4 == 0) goto LAB_1002506b6;
              }
              goto LAB_10025076b;
            }
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "*mCarrierBundleInfoArrayIndexRef < carrierBundleInfoArrayCount";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          iVar4 = -0x1b;
        }
        goto LAB_10025076b;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "mProductVersion != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar4 = -0x6c;
  }
  else if (**(long **)(param_1 + 0x30) == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "mCarrierMatchIdentifiersRef->basebandStatusString != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
LAB_100250348:
    iVar4 = 0x67c;
  }
  else {
    cVar2 = FUN_100169ddb(**(long **)(param_1 + 0x30),"SIMNotInserted");
    if (cVar2 == '\0') {
      cVar2 = FUN_100169ddb(**(undefined8 **)(param_1 + 0x30),"BBInfoAvailable");
      if (cVar2 == '\0') goto LAB_100250348;
      cVar2 = FUN_100169ddb(*(undefined8 *)(*(long *)(param_1 + 0x30) + 8),
                            "kCTSIMSupportSIMStatusNotInserted");
      if ((cVar2 == '\0') || (*(long *)(*(long *)(param_1 + 0x30) + 0x10) != 0)) goto LAB_100250213;
    }
    *(undefined1 *)(param_1 + 0x89) = 1;
    iVar4 = 0x67a;
  }
LAB_10025076b:
  cVar2 = FUN_1001c56a7(&local_b8,0x58);
  if (cVar2 == '\0') {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_1005be2f3(&local_b8);
LAB_100250794:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

