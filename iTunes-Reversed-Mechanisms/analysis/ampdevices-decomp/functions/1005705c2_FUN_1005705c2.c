// name: FUN_1005705c2
// address: 1005705c2

void FUN_1005705c2(long *param_1,undefined4 *param_2,int *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = operator_new(0x78,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_10086a420;
    *(undefined1 *)(puVar6 + 0xe) = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    FUN_1001c62d9(puVar6 + 4,0x28);
    FUN_1001c62d9(puVar6 + 9,0x28);
  }
  local_58 = SUB84(puVar6,0);
  uStack_54 = (undefined4)((ulong)puVar6 >> 0x20);
  puVar7 = operator_new(0x20);
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_10086a700;
  puVar7[3] = puVar6;
  local_50 = SUB84(puVar7,0);
  uStack_4c = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_4a = (undefined2)((ulong)puVar7 >> 0x30);
  FUN_100217418(param_1,&local_58);
  plVar3 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xf62;
      uStack_48 = 0x7b;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    iVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    if (*(long *)(param_2 + 2) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_2 + 2) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    iVar5 = (**(code **)(*plVar3 + 0x58))(plVar3,&local_68,0);
    plVar3 = (long *)CONCAT44(uStack_5c,uStack_60);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (iVar5 != -0x80) {
      if (iVar5 == 0) goto LAB_100570779;
      if (iVar5 != 0x2351) {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          local_50 = 1;
          uStack_4c = 0x400;
          uStack_4a = (undefined2)iVar5;
          uStack_48 = (undefined2)((uint)iVar5 >> 0x10);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        if (iVar5 == 0) {
          iVar5 = 0;
          goto LAB_100570779;
        }
      }
    }
    FUN_1002188e4(param_1);
  }
LAB_100570779:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar5;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

