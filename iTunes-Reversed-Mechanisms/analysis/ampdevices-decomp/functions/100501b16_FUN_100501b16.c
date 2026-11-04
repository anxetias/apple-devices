// name: FUN_100501b16
// address: 100501b16

long * FUN_100501b16(long *param_1)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  void *pvVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 auVar14 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (DAT_1008c77c0 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "sDulcimerPluginData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    plVar10 = *(long **)(DAT_1008c77c0 + 0x10);
    if (plVar10 != (long *)0x0) {
      do {
        if ((int)plVar10[1] != 0x64756c63) {
          uVar3 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar3,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure (expected to be true)";
            local_4c = 0x822;
            local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          cVar2 = FUN_1001782e9(0,1);
          if (cVar2 == '\0') break;
        }
        if (((*(char *)((long)plVar10 + 0x6abc) != '\0') &&
            (*(char *)((long)plVar10 + 0x6abd) != '\0')) &&
           (*(char *)((long)plVar10 + 0x6ad9) != '\0')) {
          puVar12 = (undefined4 *)param_1[1];
          if (puVar12 < (undefined4 *)param_1[2]) {
            *puVar12 = (int)plVar10[5];
            puVar12 = puVar12 + 1;
          }
          else {
            pvVar8 = (void *)*param_1;
            sVar7 = (long)puVar12 - (long)pvVar8;
            lVar11 = (long)sVar7 >> 2;
            uVar1 = lVar11 + 1;
            if (0x3fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_1001bd596(param_1);
            }
            uVar6 = param_1[2] - (long)pvVar8;
            uVar4 = (long)uVar6 >> 1;
            if (uVar4 <= uVar1) {
              uVar4 = uVar1;
            }
            if (0x7ffffffffffffffb < uVar6) {
              uVar4 = 0x3fffffffffffffff;
            }
            if (uVar4 == 0) {
              auVar14 = ZEXT816(0);
              lVar9 = lVar11;
            }
            else {
              auVar14 = FUN_1001b5f6e(param_1 + 2,uVar4);
              pvVar8 = (void *)*param_1;
              sVar7 = param_1[1] - (long)pvVar8;
              lVar9 = (long)sVar7 >> 2;
            }
            lVar5 = auVar14._0_8_;
            puVar13 = (undefined4 *)(lVar5 + lVar11 * 4);
            *puVar13 = (int)plVar10[5];
            puVar12 = (undefined4 *)(lVar5 + lVar11 * 4 + 4);
            puVar13 = puVar13 + -lVar9;
            _memcpy(puVar13,pvVar8,sVar7);
            pvVar8 = (void *)*param_1;
            *param_1 = (long)puVar13;
            param_1[1] = (long)puVar12;
            param_1[2] = lVar5 + auVar14._8_8_ * 4;
            if (pvVar8 != (void *)0x0) {
              operator_delete(pvVar8);
            }
          }
          param_1[1] = (long)puVar12;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

