// name: FUN_10043dd98
// address: 10043dd98

long * FUN_10043dd98(long *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
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
  puVar4 = operator_new(0x570,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_100859120;
    puVar4[3] = 0;
    *(undefined4 *)(puVar4 + 0x90) = 0;
    puVar4[0x91] = 0;
    *(undefined4 *)(puVar4 + 0x92) = 0;
    puVar4[0x93] = 0;
    puVar4[0x94] = 0;
    puVar4[0x95] = 0;
    puVar4[0x96] = 0;
    *(undefined4 *)(puVar4 + 0x97) = 0;
    puVar4[0x98] = 0;
    puVar4[0x99] = 0;
    puVar4[0x9a] = 0;
    puVar4[0x9b] = 0;
    *(undefined4 *)(puVar4 + 0x9c) = 0;
    puVar4[0x9d] = 0;
    puVar4[0x9e] = 0;
    puVar4[0x9f] = 0;
    puVar4[0xa0] = 0;
    puVar4[0xa1] = 0;
    puVar4[0xa2] = 0;
    puVar4[0xa3] = 0;
    puVar4[0xa4] = 0;
    *(undefined8 *)((long)puVar4 + 0x522) = 0;
    *(undefined8 *)((long)puVar4 + 0x52a) = 0;
    puVar4[0xa9] = 0;
    puVar4[0xa7] = 0;
    puVar4[0xa8] = 0;
    FUN_1001aa318(puVar4 + 0xaa);
    puVar4[0xab] = 0;
    FUN_1001b7a44(puVar4 + 0xac);
    ___bzero(puVar4 + 4,0x460);
    puVar4[0xa2] = 0;
    puVar4[0xa3] = 0;
    puVar4[0xa0] = 0;
    puVar4[0xa1] = 0;
    puVar4[0x9e] = 0;
    puVar4[0x9f] = 0;
    puVar4[0x9c] = 0;
    puVar4[0x9d] = 0;
    puVar4[0xa4] = 0;
  }
  local_58 = SUB84(puVar4,0);
  uStack_54 = (undefined4)((ulong)puVar4 >> 0x20);
  plVar5 = operator_new(0x20);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_100859320;
  plVar5[3] = (long)puVar4;
  local_50 = SUB84(plVar5,0);
  uStack_4c = (undefined2)((ulong)plVar5 >> 0x20);
  uStack_4a = (undefined2)((ulong)plVar5 >> 0x30);
  if (puVar4 != (undefined8 *)0x0) {
    if (puVar4[2] == 0) {
      LOCK();
      plVar5[1] = plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar5[2] = plVar5[2] + 1;
      UNLOCK();
      puVar4[1] = puVar4;
      puVar4[2] = plVar5;
    }
    else {
      if (*(long *)(puVar4[2] + 8) != -1) goto LAB_10043df78;
      LOCK();
      plVar5[1] = plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar5[2] = plVar5[2] + 1;
      UNLOCK();
      puVar4[1] = puVar4;
      puVar4[2] = plVar5;
      std::__shared_weak_count::__release_weak();
    }
    plVar6 = plVar5 + 1;
    LOCK();
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10043df78:
  FUN_100217418(param_1,&local_58);
  plVar5 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xf62;
      uStack_48 = 0x7b;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10043e01f;
  }
  iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) goto LAB_10043e01f;
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x400;
      uStack_4a = (undefined2)iVar3;
      uStack_48 = (undefined2)((uint)iVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    if (iVar3 == 0) goto LAB_10043e01f;
  }
  FUN_1002188e4(param_1);
LAB_10043e01f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

