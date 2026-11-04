// name: FUN_1005c9432
// address: 1005c9432

void FUN_1005c9432(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  char cVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1005c9a5c:
    uVar16 = FUN_1001cc310();
    cVar14 = _os_log_type_enabled(uVar16,0x10);
    if (cVar14 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar16 = FUN_1001cc310();
      cVar14 = _os_log_type_enabled(uVar16,0x10);
      if (cVar14 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar14 = FUN_1001782e9(0,1);
      if (cVar14 == '\0') goto LAB_1005c9a5c;
    }
    if (param_2 == (undefined8 *)0x0) {
      uVar16 = FUN_1001cc310();
      cVar14 = _os_log_type_enabled(uVar16,0x10);
      if (cVar14 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "exceptions != nullptr";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x152e0) = 0;
      pvVar2 = *(void **)(param_1 + 0x157f8);
      if (pvVar2 != (void *)0x0) {
        FUN_1003380d0(pvVar2);
        operator_delete(pvVar2);
        *(undefined8 *)(param_1 + 0x157f8) = 0;
      }
      cVar14 = FUN_10057bb0c(param_2,param_1 + 0x14cd0);
      if (cVar14 != '\0') {
        puVar17 = operator_new(0x220,(nothrow_t *)PTR_nothrow_10082c970);
        if (puVar17 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar17 + 10) = *(undefined4 *)(param_2 + 10);
          uVar16 = param_2[9];
          puVar17[8] = param_2[8];
          puVar17[9] = uVar16;
          uVar16 = *param_2;
          uVar13 = param_2[1];
          uVar1 = *(undefined4 *)(param_2 + 2);
          uVar3 = *(undefined4 *)((long)param_2 + 0x14);
          uVar4 = *(undefined4 *)(param_2 + 3);
          uVar5 = *(undefined4 *)((long)param_2 + 0x1c);
          uVar6 = *(undefined4 *)(param_2 + 4);
          uVar7 = *(undefined4 *)((long)param_2 + 0x24);
          uVar8 = *(undefined4 *)(param_2 + 5);
          uVar9 = *(undefined4 *)((long)param_2 + 0x2c);
          uVar10 = *(undefined4 *)((long)param_2 + 0x34);
          uVar11 = *(undefined4 *)(param_2 + 7);
          uVar12 = *(undefined4 *)((long)param_2 + 0x3c);
          *(undefined4 *)(puVar17 + 6) = *(undefined4 *)(param_2 + 6);
          *(undefined4 *)((long)puVar17 + 0x34) = uVar10;
          *(undefined4 *)(puVar17 + 7) = uVar11;
          *(undefined4 *)((long)puVar17 + 0x3c) = uVar12;
          *(undefined4 *)(puVar17 + 4) = uVar6;
          *(undefined4 *)((long)puVar17 + 0x24) = uVar7;
          *(undefined4 *)(puVar17 + 5) = uVar8;
          *(undefined4 *)((long)puVar17 + 0x2c) = uVar9;
          *(undefined4 *)(puVar17 + 2) = uVar1;
          *(undefined4 *)((long)puVar17 + 0x14) = uVar3;
          *(undefined4 *)(puVar17 + 3) = uVar4;
          *(undefined4 *)((long)puVar17 + 0x1c) = uVar5;
          *puVar17 = uVar16;
          puVar17[1] = uVar13;
          puVar17[0xb] = 0;
          puVar17[0xc] = 0;
          puVar17[0xd] = 0;
          FUN_1005cd39a(puVar17 + 0xb,param_2[0xb],param_2[0xc],
                        ((long)(param_2[0xc] - param_2[0xb]) >> 2) * -0x7f01fc07f01fc07f);
          puVar17[0xe] = 0;
          puVar17[0xf] = 0;
          puVar17[0x10] = 0;
          FUN_1005cd39a();
          puVar17[0x11] = 0;
          puVar17[0x12] = 0;
          puVar17[0x13] = 0;
          FUN_1005cd39a();
          puVar17[0x14] = 0;
          puVar17[0x15] = 0;
          puVar17[0x16] = 0;
          FUN_1005cd39a();
          puVar17[0x17] = 0;
          puVar17[0x18] = 0;
          puVar17[0x19] = 0;
          FUN_1005cd39a();
          puVar17[0x1a] = 0;
          puVar17[0x1b] = 0;
          puVar17[0x1c] = 0;
          FUN_1005cd39a();
          puVar17[0x1d] = 0;
          puVar17[0x1e] = 0;
          puVar17[0x1f] = 0;
          FUN_1005cd39a();
          puVar17[0x20] = 0;
          puVar17[0x21] = 0;
          puVar17[0x22] = 0;
          FUN_1005cd39a();
          puVar17[0x23] = 0;
          puVar17[0x24] = 0;
          puVar17[0x25] = 0;
          FUN_1005cd39a();
          puVar17[0x26] = 0;
          puVar17[0x27] = 0;
          puVar17[0x28] = 0;
          FUN_1005cd39a();
          puVar17[0x29] = 0;
          puVar17[0x2a] = 0;
          puVar17[0x2b] = 0;
          FUN_1005cd39a();
          puVar17[0x2c] = 0;
          puVar17[0x2d] = 0;
          puVar17[0x2e] = 0;
          FUN_1005cd39a();
          puVar17[0x2f] = 0;
          puVar17[0x30] = 0;
          puVar17[0x31] = 0;
          FUN_1005cd39a();
          puVar17[0x32] = 0;
          puVar17[0x33] = 0;
          puVar17[0x34] = 0;
          FUN_1005cd39a();
          puVar17[0x35] = 0;
          puVar17[0x36] = 0;
          puVar17[0x37] = 0;
          FUN_1005cd39a();
          puVar17[0x38] = 0;
          puVar17[0x39] = 0;
          puVar17[0x3a] = 0;
          FUN_1005cd39a();
          puVar17[0x3b] = 0;
          puVar17[0x3c] = 0;
          puVar17[0x3d] = 0;
          FUN_1005cd39a();
          puVar17[0x3e] = 0;
          puVar17[0x3f] = 0;
          puVar17[0x40] = 0;
          FUN_1005cd39a(puVar17 + 0x3e,param_2[0x3e],param_2[0x3f],
                        ((long)(param_2[0x3f] - param_2[0x3e]) >> 2) * -0x7f01fc07f01fc07f);
          puVar17[0x41] = 0;
          puVar17[0x42] = 0;
          puVar17[0x43] = 0;
          FUN_1005cd39a(puVar17 + 0x41,param_2[0x41],param_2[0x42],
                        ((long)(param_2[0x42] - param_2[0x41]) >> 2) * -0x7f01fc07f01fc07f);
        }
        *(undefined8 **)(param_1 + 0x157f8) = puVar17;
      }
      uVar16 = FUN_1001c156e();
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar15 = FUN_1005c9e10(param_1);
      FUN_1001c6987(uVar16,0x69706572,uVar1,uVar15,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

