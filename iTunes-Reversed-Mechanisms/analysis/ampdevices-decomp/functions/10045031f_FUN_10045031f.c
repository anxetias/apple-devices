// name: FUN_10045031f
// address: 10045031f

void FUN_10045031f(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  undefined4 *puVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
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
  cVar3 = FUN_1001edfc7();
  if (cVar3 != '\0') {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      FUN_10024336d(param_1,param_2,param_3,param_4,param_5,param_6);
      return;
    }
    goto LAB_100450751;
  }
  puVar5 = operator_new(0x90,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar5 == (undefined4 *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_98 = 0x8220202;
      uStack_94 = 0x7a0a90;
      local_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0xf3e1;
      uStack_88 = 0x7c;
      uStack_86 = 1;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *puVar5 = 0;
    FUN_1001b7a44();
    FUN_1001b7a44();
    FUN_1001b7a44();
    FUN_1001b7a44();
    FUN_1001b7a44();
    *(undefined2 *)(puVar5 + 0x16) = 0;
    puVar1 = puVar5 + 0x17;
    *(undefined8 *)(puVar5 + 0x17) = 0;
    *(undefined8 *)(puVar5 + 0x19) = 0;
    *(undefined8 *)(puVar5 + 0x1c) = 0;
    puVar5[0x1e] = 0;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(undefined8 *)(puVar5 + 0x22) = 0;
    FUN_1001c62d9(puVar1,0x10);
    puVar8 = puVar5 + 0x1c;
    FUN_1001c62d9(puVar8,0x20);
    FUN_1001b8172(puVar5 + 2,param_4);
    *puVar5 = param_1;
    FUN_1001b8172(puVar5 + 6,param_2);
    FUN_1001b8172(puVar5 + 10,param_3);
    FUN_1001b8172(puVar5 + 0xe,param_5);
    FUN_1001b8172(puVar5 + 0x12,param_6);
    if (param_7 != (undefined1 *)0x0) {
      *(undefined1 *)(puVar5 + 0x16) = *param_7;
    }
    cVar3 = FUN_1001ee056();
    *(char *)((long)puVar5 + 0x59) = cVar3;
    if (cVar3 == '\0') {
      iVar4 = FUN_1001e8dd6(puVar8,0,0);
    }
    else {
      iVar4 = FUN_1001e96d3(puVar1,0,0);
    }
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        local_98 = 0x859858;
        uStack_94 = 1;
        local_90 = 0x450e70;
        uStack_8c = 1;
        uStack_8a = 0;
        uStack_88 = SUB82(puVar5,0);
        uStack_86 = (undefined4)((ulong)puVar5 >> 0x10);
        uStack_82 = (undefined2)((ulong)puVar5 >> 0x30);
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
          plVar2 = local_40 + 1;
          lVar6 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar6 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_78 == (long *)&local_98) {
          lVar6 = 0x20;
LAB_100450662:
          (**(code **)(*local_78 + lVar6))();
        }
        else {
          lVar6 = 0x28;
          if (local_78 != (long *)0x0) goto LAB_100450662;
        }
        if (*(char *)((long)puVar5 + 0x59) == '\0') {
          FUN_1001e944c(puVar8);
          FUN_1001e9587(puVar8);
        }
        else {
          FUN_1001e9afc(puVar1);
          FUN_1001e9bb5(puVar1);
        }
        if (param_7 != (undefined1 *)0x0) {
          *param_7 = *(undefined1 *)(puVar5 + 0x16);
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_98 = 0x8220202;
          uStack_94 = 0x7a0a90;
          local_90 = 1;
          uStack_8c = 0x400;
          uStack_8a = (undefined2)iVar4;
          uStack_88 = (undefined2)((uint)iVar4 >> 0x10);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_98,0x12);
        }
      }
    }
    FUN_1001b7a50(puVar5 + 0x12);
    FUN_1001b7a50(puVar5 + 0xe);
    FUN_1001b7a50(puVar5 + 10);
    FUN_1001b7a50(puVar5 + 6);
    FUN_1001b7a50(puVar5 + 2);
    operator_delete(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_100450751:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

