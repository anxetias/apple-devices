// name: FUN_10052b208
// address: 10052b208

undefined4 FUN_10052b208(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  size_t sVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 local_a0 [8];
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  long *plStack_80;
  void *local_78;
  long *local_70;
  undefined8 local_68;
  long *plStack_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inHandlerPtr != __null";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c62d9(local_a0,8);
    (**(code **)(*param_1 + 0x20))(param_1);
    plVar14 = param_1 + 1;
    uVar5 = FUN_10015a59c(plVar14,local_a0);
    plVar6 = (long *)FUN_10015b12c(plVar14,uVar5);
    *plVar6 = param_2;
    if (*(char *)((long)param_1 + 0x84) == '\x01') {
      FUN_100238ca8(&local_58,param_2 + 0x20);
      FUN_1002c3cd0(&local_68,param_2 + 0x68);
      plVar6 = plStack_60;
      uVar7 = local_68;
      local_88 = local_68;
      plStack_80 = plStack_60;
      local_68 = 0;
      plStack_60 = (long *)0x0;
      puVar11 = *(undefined8 **)(param_2 + 0x10);
      if (puVar11 < *(undefined8 **)(param_2 + 0x18)) {
        *puVar11 = uVar7;
        puVar11[1] = plVar6;
        local_88 = 0;
        plStack_80 = (long *)0x0;
        puVar11 = puVar11 + 2;
      }
      else {
        local_78 = *(void **)(param_2 + 8);
        sVar12 = (long)puVar11 - (long)local_78;
        lVar10 = (long)sVar12 >> 4;
        uVar1 = lVar10 + 1;
        local_70 = plVar14;
        if (uVar1 >> 0x3c != 0) {
          FUN_100532924();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar8 = (long)*(undefined8 **)(param_2 + 0x18) - (long)local_78;
        uVar13 = (long)uVar8 >> 3;
        if (uVar13 <= uVar1) {
          uVar13 = uVar1;
        }
        if (0x7fffffffffffffef < uVar8) {
          uVar13 = 0xfffffffffffffff;
        }
        if (uVar13 == 0) {
          pvVar9 = (void *)0x0;
        }
        else {
          local_98 = uVar7;
          local_90 = lVar10;
          if (0xfffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_1001082d0();
          }
          pvVar9 = operator_new(uVar13 << 4);
          uVar7 = local_98;
          lVar10 = local_90;
        }
        puVar2 = (undefined8 *)((long)pvVar9 + lVar10 * 0x10);
        puVar11 = puVar2 + 2;
        *puVar2 = uVar7;
        puVar2[1] = plVar6;
        local_88 = 0;
        plStack_80 = (long *)0x0;
        _memcpy(pvVar9,local_78,sVar12);
        *(void **)(param_2 + 8) = pvVar9;
        *(undefined8 **)(param_2 + 0x10) = puVar11;
        *(void **)(param_2 + 0x18) = (void *)(uVar13 * 0x10 + (long)pvVar9);
        plVar14 = local_70;
        if (local_78 != (void *)0x0) {
          operator_delete(local_78);
          plVar14 = local_70;
        }
      }
      *(undefined8 **)(param_2 + 0x10) = puVar11;
      if (plStack_60 != (long *)0x0) {
        LOCK();
        plVar6 = plStack_60 + 1;
        lVar10 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plStack_60 + 0x10))(plStack_60);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_10015a142(&local_58);
    }
    uVar5 = FUN_10015a861(plVar14);
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

