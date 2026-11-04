// name: FUN_10058dc38
// address: 10058dc38

undefined8 FUN_10058dc38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 local_88 [16];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1002188e4(param_3);
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inPersistentID != 0";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = FUN_1001b8428(param_2);
    if (cVar2 == '\0') {
      puVar6 = operator_new(0xa8,(nothrow_t *)PTR_nothrow_10082c970);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = &PTR_FUN_10086aa60;
        puVar6[3] = param_1;
        FUN_1001b7a5c(puVar6 + 4,param_2);
        local_78 = puVar6 + 4;
        FUN_10015095e(local_88);
        FUN_1001517f8(&local_58,local_88);
        iVar4 = FUN_1001b9c66(param_2,&local_58);
        if (iVar4 == 0) {
          bVar3 = FUN_1001b8428(param_2);
          bVar3 = bVar3 ^ 1;
        }
        else {
          bVar3 = 0;
        }
        FUN_1001b7a50(&local_58);
        FUN_100150de8(local_88);
        *(byte *)(puVar6 + 6) = bVar3;
        *(undefined4 *)((long)puVar6 + 0x34) = 0;
        FUN_1001b7a44(puVar6 + 7);
        local_70 = puVar6 + 7;
        FUN_1001b7a44(puVar6 + 9);
        *(undefined1 *)(puVar6 + 0xb) = 0;
        FUN_1001b7a44(puVar6 + 0xc);
        FUN_1001b7a44(puVar6 + 0xe);
        FUN_1001b7a44(puVar6 + 0x10);
        *(undefined4 *)(puVar6 + 0x14) = 0;
        puVar6[0x12] = 0;
        *(undefined8 *)((long)puVar6 + 0x96) = 0;
      }
      local_68 = puVar6;
      plVar7 = operator_new(0x20);
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_10086aab8;
      plVar7[3] = (long)puVar6;
      local_60 = plVar7;
      if (puVar6 != (undefined8 *)0x0) {
        if (puVar6[2] == 0) {
          LOCK();
          plVar7[1] = plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar7[2] = plVar7[2] + 1;
          UNLOCK();
          puVar6[1] = puVar6;
          puVar6[2] = plVar7;
        }
        else {
          if (*(long *)(puVar6[2] + 8) != -1) goto LAB_10058de81;
          LOCK();
          plVar7[1] = plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar7[2] = plVar7[2] + 1;
          UNLOCK();
          puVar6[1] = puVar6;
          puVar6[2] = plVar7;
          std::__shared_weak_count::__release_weak();
        }
        plVar8 = plVar7 + 1;
        LOCK();
        lVar1 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__shared_weak_count::__release_weak();
        }
      }
LAB_10058de81:
      if (local_68 == (undefined8 *)0x0) {
        uVar5 = 0xffffff94;
      }
      else {
        FUN_10058d9b6();
        FUN_100203686(param_3,&local_68);
        uVar5 = 0;
      }
      if (local_60 != (long *)0x0) {
        LOCK();
        plVar7 = local_60 + 1;
        lVar1 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto LAB_10058dccc;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inProfileID.NotEmpty()";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar5 = 0xffffffce;
LAB_10058dccc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

