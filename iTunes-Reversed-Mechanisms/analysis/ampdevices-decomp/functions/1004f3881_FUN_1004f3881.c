// name: FUN_1004f3881
// address: 1004f3881

ulong FUN_1004f3881(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined1 param_5)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_86;
  undefined2 uStack_82;
  long *local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1001edfc7();
  if (cVar2 == '\0') {
    puVar6 = operator_new(0x50,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar6 == (undefined4 *)0x0) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_98 = 0x8220202;
        uStack_94 = 0x7a0a90;
        uStack_90 = 1;
        uStack_8c = 0x822;
        uStack_8a = 0xf3e1;
        uStack_88 = 0x7c;
        uStack_86 = 1;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      FUN_1001782e9(0,0);
      uVar5 = 0xffffff94;
    }
    else {
      puVar7 = puVar6 + 7;
      *(undefined8 *)(puVar6 + 7) = 0;
      *(undefined8 *)(puVar6 + 9) = 0;
      puVar9 = puVar6 + 0xc;
      *(undefined8 *)(puVar6 + 0xc) = 0;
      puVar6[0xe] = 0;
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x12) = 0;
      FUN_1001c62d9(puVar6,0x50);
      *puVar6 = param_1;
      puVar6[1] = param_2;
      puVar6[2] = param_3;
      puVar6[3] = param_4;
      *(undefined1 *)(puVar6 + 4) = param_5;
      cVar2 = FUN_1001ee056();
      *(char *)(puVar6 + 6) = cVar2;
      if (cVar2 == '\0') {
        uVar3 = FUN_1001e8dd6(puVar9,0,0);
      }
      else {
        uVar3 = FUN_1001e96d3(puVar7,0,0);
      }
      uVar5 = (ulong)uVar3;
      if (uVar3 != 0xffffff80) {
        if (uVar3 == 0) {
          local_98 = 0x868548;
          uStack_94 = 1;
          uStack_90 = 0x4f423d;
          uStack_8c = 1;
          uStack_8a = 0;
          uStack_88 = SUB82(puVar6,0);
          uStack_86 = (undefined4)((ulong)puVar6 >> 0x10);
          uStack_82 = (undefined2)((ulong)puVar6 >> 0x30);
          local_68 = 0;
          uStack_60 = 0;
          uStack_59 = 0;
          local_50 = 0;
          uStack_48 = 0;
          local_40 = (long *)0x0;
          local_78 = (long *)&local_98;
          FUN_10017869a(&local_98);
          if (local_40 != (long *)0x0) {
            LOCK();
            plVar1 = local_40 + 1;
            lVar4 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar4 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_78 == (long *)&local_98) {
            lVar4 = 0x20;
LAB_1004f3b34:
            (**(code **)(*local_78 + lVar4))();
          }
          else {
            lVar4 = 0x28;
            if (local_78 != (long *)0x0) goto LAB_1004f3b34;
          }
          if (*(char *)(puVar6 + 6) == '\x01') {
            FUN_1001e9afc(puVar7);
            FUN_1001e9bb5(puVar7);
          }
          else {
            FUN_1001e944c(puVar9);
            FUN_1001e9587(puVar9);
          }
          uVar5 = (ulong)(uint)puVar6[5];
        }
        else {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            local_98 = 0x8220202;
            uStack_94 = 0x7a0a90;
            uStack_90 = 1;
            uStack_8c = 0x400;
            uStack_8a = (undefined2)uVar3;
            uStack_88 = (undefined2)(uVar3 >> 0x10);
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_98,0x12);
          }
        }
      }
      operator_delete(puVar6);
    }
  }
  else {
    lVar4 = FUN_1004de449(param_1);
    if (lVar4 != 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        uVar5 = FUN_1004f3c62(lVar4,param_2,param_3,param_4,param_5);
        return uVar5;
      }
      goto LAB_1004f3c41;
    }
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_98 = 0x8220202;
      uStack_94 = 0x7a0a90;
      uStack_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0xde6a;
      uStack_88 = 0x7a;
      uStack_86 = 1;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0x45f;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
LAB_1004f3c41:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

