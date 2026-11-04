// name: FUN_1005e9102
// address: 1005e9102

void FUN_1005e9102(long param_1,long param_2,char param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined6 local_88;
  undefined2 uStack_82;
  long *local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1005e937f(param_2);
  if (cVar2 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      local_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0x2323;
      local_88 = 0x1007f;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined1 *)(param_2 + 0x68ca) = 1;
    uVar3 = FUN_1001c156e();
    FUN_1001c6987(uVar3,0x72697072,*(undefined4 *)(param_2 + 0x6884),0,0);
    if (*(long *)(param_2 + 0x6890) != 0) {
      FUN_100264ec8();
      *(undefined8 *)(param_2 + 0x6890) = 0;
    }
    FUN_10017060f(*(undefined8 *)(param_2 + 0x68a0));
    *(undefined8 *)(param_2 + 0x68a0) = 0;
    FUN_10017060f(*(undefined8 *)(param_2 + 0x68a8));
    *(undefined8 *)(param_2 + 0x68a8) = 0;
    FUN_10017060f(*(undefined8 *)(param_2 + 0x68b0));
    *(undefined8 *)(param_2 + 0x68b0) = 0;
    lVar5 = *(long *)(param_1 + 0x60);
    if (lVar5 != 0) {
      if (lVar5 == param_2) {
        lVar6 = 0;
      }
      else {
        do {
          lVar6 = lVar5;
          lVar5 = *(long *)(lVar6 + 0x6878);
          if (lVar5 == 0) goto LAB_1005e922c;
        } while (lVar5 != param_2);
      }
      puVar4 = (undefined8 *)(lVar6 + 0x6878);
      if (lVar6 == 0) {
        puVar4 = (undefined8 *)(param_1 + 0x60);
      }
      *puVar4 = *(undefined8 *)(param_2 + 0x6878);
      *(undefined8 *)(param_2 + 0x6878) = 0;
    }
LAB_1005e922c:
    if (param_3 == '\0') {
      FUN_1001c64c1(param_2);
    }
    else {
      FUN_1001c62d9(param_2,0x68e8);
      local_98._0_4_ = 0x86fca8;
      local_98._4_4_ = 1;
      local_90 = 0x5e90ea;
      uStack_8c = 1;
      uStack_8a = 0;
      local_88 = (undefined6)param_2;
      uStack_82 = (undefined2)((ulong)param_2 >> 0x30);
      local_68 = 0;
      uStack_60 = 0;
      uStack_59 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = (long *)0x0;
      local_78 = &local_98;
      FUN_10017869a(&local_98);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar5 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar5 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_78 == &local_98) {
        lVar5 = 0x20;
      }
      else {
        lVar5 = 0x28;
        if (local_78 == (long *)0x0) goto LAB_1005e92e1;
      }
      (**(code **)(*local_78 + lVar5))();
    }
  }
LAB_1005e92e1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

