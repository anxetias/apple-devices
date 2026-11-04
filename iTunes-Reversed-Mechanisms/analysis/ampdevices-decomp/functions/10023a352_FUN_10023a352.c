// name: FUN_10023a352
// address: 10023a352

uint FUN_10023a352(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,uint param_6,uint *param_7)

{
  bool bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  float fVar11;
  undefined1 local_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint *local_88;
  long local_80;
  float local_78;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  uint local_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a0 = param_4;
  local_98 = param_3;
  local_90 = param_2;
  local_78 = param_1;
  if (param_7 == (uint *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 0x7b294f;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_7 = 0;
    if (param_5 != 0) {
      local_88 = param_7;
      local_80 = param_5;
      local_78 = param_1;
      do {
        FUN_1001964c8(local_b8,local_a0);
        uVar7 = FUN_1001968ef(local_78,local_90,local_98,0,local_b8,&local_60);
        FUN_1001966e2(local_b8);
        if (uVar7 != 0) {
          if (uVar7 != 0xffffff80) {
            uVar9 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar9,0x10);
            if (cVar6 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = uVar7;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          break;
        }
        uVar8 = FUN_100170ef7(local_60);
        if (DAT_1008a2e18 != -1) {
          _dispatch_once(&DAT_1008a2e18,&PTR___NSConcreteGlobalBlock_10083e9d8);
        }
        uVar4 = uStack_42;
        uVar2 = uStack_44;
        uVar9 = DAT_1008a2e10;
        uVar10 = (uint)uVar8;
        uStack_44 = (undefined2)uVar8;
        uVar3 = uStack_44;
        uStack_42 = (undefined2)(uVar8 >> 0x10);
        uVar5 = uStack_42;
        uStack_44 = uVar2;
        uStack_42 = uVar4;
        if (param_6 < uVar10) {
          cVar6 = _os_log_type_enabled(DAT_1008a2e10,0x10);
          uVar7 = 0xffffdcfd;
          if (cVar6 != '\0') {
            local_54 = (char *)(double)local_78;
            local_58 = 0x8000300;
            local_4c = 0x400;
            uStack_46 = 0x400;
            local_4a = param_6;
            uStack_44 = uVar3;
            uStack_42 = uVar5;
            __os_log_impl(0x100000000,uVar9,0x10,
                          "CompressCGImage() - failed to create compressed image for quality %f (bufferSize = %u, compressedSize = %u)"
                          ,&local_58,0x18);
          }
        }
        else {
          cVar6 = _os_log_type_enabled(DAT_1008a2e10,1);
          if (cVar6 != '\0') {
            local_54 = (char *)(double)local_78;
            local_58 = 0x8000300;
            local_4c = 0x400;
            uStack_46 = 0x400;
            local_4a = param_6;
            uStack_44 = uVar3;
            uStack_42 = uVar5;
            __os_log_impl(0x100000000,uVar9,1,
                          "CompressCGImage() - quality = %f, bufferSize = %u, compressedSize = %u",
                          &local_58,0x18);
          }
          uVar9 = FUN_100170f3b(local_60);
          FUN_1001c631b(uVar9,local_80,uVar8 & 0xffffffff);
          FUN_1001c62d9((uVar8 & 0xffffffff) + local_80,param_6 - uVar10);
          *local_88 = uVar10;
          uVar7 = 0;
        }
        FUN_10017060f(local_60);
        fVar11 = local_78 + DAT_1007106c0;
        bVar1 = local_78 != DAT_100700b50;
        local_78 = fVar11;
      } while ((0.0 <= fVar11 && bVar1) && param_6 < uVar10);
      goto LAB_10023a63e;
    }
    uVar9 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 0x7a017c;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar7 = 0xffffffce;
LAB_10023a63e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

