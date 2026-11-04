// name: FUN_10058e278
// address: 10058e278

undefined8 FUN_10058e278(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_98;
  long *local_90;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined8 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = FUN_1001b8428(param_2);
  if (cVar3 == '\0') {
    cVar3 = FUN_1001b8428(param_2 + 0x10);
    if (cVar3 == '\0') {
      iVar4 = FUN_1001b9c66(param_2,param_1 + 0x20);
      if (iVar4 != 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_78 = 0x8220202;
          uStack_74 = 0x7a0a90;
          uStack_70 = 1;
          uStack_6c = 0x822;
          uStack_6a = 0xa3d4;
          uStack_68 = 0x1007e;
          uStack_64 = 0;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        FUN_1001782e9(0,0);
        uVar5 = 0x234f;
        goto LAB_10058e2e4;
      }
      FUN_10058e5b6(param_1,param_2 + 0x10);
      FUN_10058e604(param_1,param_2 + 0x20);
      if (*(char *)(param_1 + 0x58) != *(char *)(param_2 + 0x50)) {
        *(char *)(param_1 + 0x58) = *(char *)(param_2 + 0x50);
        FUN_10058e136(param_1,0x40);
      }
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_6a = 0;
      uStack_68 = 0;
      FUN_1001aa318(local_60);
      FUN_1001aa318(local_58);
      FUN_1001aa318(local_50);
      local_48 = 0;
      cVar3 = FUN_1001b8428(param_2 + 0x40);
      if (cVar3 == '\0') {
LAB_10058e3d3:
        FUN_10023ddf3(local_88,param_2 + 0x40,0x100,0x100,0);
        uStack_68 = 0x46;
        uVar5 = FUN_1003070df();
        uVar5 = FUN_10030806a(uVar5,1);
        local_78 = (undefined4)uVar5;
        uStack_74 = (undefined4)((ulong)uVar5 >> 0x20);
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        uStack_70 = (undefined4)uVar5;
        uStack_6c = (undefined2)((ulong)uVar5 >> 0x20);
        uStack_6a = (undefined2)((ulong)uVar5 >> 0x30);
        FUN_1001ab076(local_58,param_2 + 0x30);
        FUN_1001ab076(local_60,local_88);
        FUN_1001b7a50(local_88);
      }
      else {
        cVar3 = FUN_1001b8428(param_2 + 0x30);
        if (cVar3 == '\0') goto LAB_10058e3d3;
        uStack_68 = 0;
      }
      if (*(long *)(param_1 + 0x10) == 0) {
LAB_10058e55b:
                    /* WARNING: Subroutine does not return */
        FUN_10013bd04();
      }
      uVar5 = *(undefined8 *)(param_1 + 8);
      local_90 = (long *)std::__shared_weak_count::lock();
      if (local_90 == (long *)0x0) goto LAB_10058e55b;
      local_98 = uVar5;
      FUN_1002e6b32(&local_98,&local_78);
      if (local_90 != (long *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_1001ab006(local_50);
      FUN_1001ab006(local_58);
      FUN_1001ab006(local_60);
      uVar5 = 0;
      goto LAB_10058e2e4;
    }
  }
  uVar5 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar5,0x10);
  if (cVar3 != '\0') {
    local_78 = 0x8220202;
    uStack_74 = 0x7a0a90;
    uStack_70 = 1;
    uStack_6c = 0x822;
    uStack_6a = 0xdf9d;
    uStack_68 = 0x1007c;
    uStack_64 = 0;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
  }
  FUN_1001782e9(0,0);
  uVar5 = 0xffffffce;
LAB_10058e2e4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

