// name: FUN_10012fdce
// address: 10012fdce

ulong FUN_10012fdce(long param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_R14;
  ulong uVar7;
  undefined1 local_90 [16];
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined1 local_60 [16];
  undefined4 local_50;
  long local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = (**(code **)(*(long *)*param_2 + 0x70))();
  uVar7 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if (cVar3 != '\0') {
    cVar3 = FUN_1001413c6(*param_2);
    if (cVar3 == '\0') {
      (**(code **)(*(long *)*param_2 + 0xd0))(local_90);
      uVar2 = *(undefined4 *)(*param_2 + 0x188);
      uVar4 = FUN_10012d63e();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        uVar5 = FUN_1001b83ae(local_90);
        local_78 = 0x8220202;
        uStack_74 = (undefined4)uVar5;
        uStack_70 = (undefined4)((ulong)uVar5 >> 0x20);
        uStack_6c = 0x400;
        uStack_6a = (undefined2)uVar2;
        uStack_68 = (undefined2)((uint)uVar2 >> 0x10);
        __os_log_impl(0x100000000,uVar4,0x10,
                      "Request %{public}s(%d) will be held until privacy is acknowledged.",&local_78
                      ,0x12);
      }
      std::mutex::lock();
      local_78 = (undefined4)*param_2;
      uStack_74 = *(undefined4 *)((long)param_2 + 4);
      uStack_70 = (undefined4)param_2[1];
      uStack_6c = (undefined2)*(undefined4 *)((long)param_2 + 0xc);
      uStack_6a = (undefined2)((uint)*(undefined4 *)((long)param_2 + 0xc) >> 0x10);
      if (param_2[1] != 0) {
        LOCK();
        plVar1 = (long *)(param_2[1] + 0x10);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      uStack_68 = (undefined2)param_3;
      uStack_66 = (undefined2)((uint)param_3 >> 0x10);
      local_80 = param_1 + 0x48;
      FUN_1001b7a5c(local_60,local_90);
      local_48 = *param_2;
      uVar7 = *(ulong *)(param_1 + 0xa0);
      local_50 = uVar2;
      if (uVar7 < *(ulong *)(param_1 + 0xa8)) {
        FUN_1001306e9(uVar7,&local_78);
        lVar6 = uVar7 + 0x38;
        *(long *)(param_1 + 0xa0) = lVar6;
      }
      else {
        lVar6 = FUN_1001305ba(param_1 + 0x98,&local_78);
      }
      *(long *)(param_1 + 0xa0) = lVar6;
      FUN_1001b7a50(local_60);
      if (CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70)) != 0) {
        std::__shared_weak_count::__release_weak();
      }
      std::mutex::unlock();
      FUN_1001b7a50(local_90);
      uVar7 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

