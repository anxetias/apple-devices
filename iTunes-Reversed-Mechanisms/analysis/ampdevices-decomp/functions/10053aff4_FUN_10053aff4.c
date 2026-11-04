// name: FUN_10053aff4
// address: 10053aff4

/* WARNING: Removing unreachable block (ram,0x00010053b0bd) */
/* WARNING: Removing unreachable block (ram,0x00010053b0cf) */

void FUN_10053aff4(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_458 [16];
  int local_448;
  undefined2 local_444;
  int local_438 [4];
  undefined1 local_428 [512];
  undefined8 local_228;
  undefined4 local_220;
  undefined2 uStack_21c;
  undefined2 uStack_21a;
  undefined6 uStack_218;
  uint local_210;
  long *local_208;
  long local_1f8;
  undefined7 uStack_1f0;
  undefined4 uStack_1e9;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  long *local_1d0;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10053b1a0:
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_228._0_4_ = 0x8220202;
      local_228._4_4_ = 0x7a0a90;
      local_220 = 1;
      uStack_21c = 0x822;
      uStack_21a = 0xd2b2;
      uStack_218 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_228._0_4_ = 0x8220202;
        local_228._4_4_ = 0x7ab58c;
        local_220 = 1;
        uStack_21c = 0x822;
        uStack_21a = 0xd710;
        uStack_218 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_10053b1a0;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    FUN_1004f0e83(param_1,local_428);
    local_444 = 0;
    local_448 = (uint)(*(char *)(DAT_1008c76a0 + 0x1a91) != '\0') << 8;
    FUN_1002520df(param_1,0,&local_448,0,local_438);
    if (local_438[0] != 1) {
      if (local_438[0] == 3) {
        local_210 = *(uint *)(param_1 + 0x28);
        local_228._0_4_ = 0x869610;
        local_228._4_4_ = 1;
        local_220 = 0x53aff4;
        uStack_21c = 1;
        uStack_21a = 0;
        local_1e0 = 0;
        uStack_1d8 = 0;
        local_1d0 = (long *)0x0;
        local_1f8 = (ulong)local_210 << 0x20;
        uStack_1f0 = 0;
        uStack_1e9 = 0x40;
        local_208 = &local_228;
        FUN_10017869a(&local_228);
        if (local_1d0 != (long *)0x0) {
          LOCK();
          plVar1 = local_1d0 + 1;
          lVar5 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar5 == 0) {
            (**(code **)(*local_1d0 + 0x10))(local_1d0);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_208 == &local_228) {
          lVar5 = 0x20;
        }
        else {
          lVar5 = 0x28;
          if (local_208 == (long *)0x0) goto LAB_10053b1c6;
        }
        (**(code **)(*local_208 + lVar5))();
      }
      else if (*(char *)(DAT_1008c76a0 + 0x1a91) != '\0') {
        lVar5 = FUN_1004de449(uVar2);
        if (lVar5 == 0) {
          uVar4 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar4,0x10);
          if (cVar3 != '\0') {
            local_228._0_4_ = 0x8220202;
            local_228._4_4_ = 0x7a0a90;
            local_220 = 1;
            uStack_21c = 0x822;
            uStack_21a = 0xde6a;
            uStack_218 = 0x1007a;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          uVar4 = FUN_100416f20(*(undefined4 *)(lVar5 + 0x66b0),0x10cc01d1);
          FUN_1001b7eb0(local_438,uVar4);
          FUN_1004f0e83(lVar5,&local_228);
          FUN_1001b8dfc(local_458,&local_228);
          FUN_1001bbec4(&local_448,local_438,local_458);
          FUN_1004fda52(&local_228,*(undefined4 *)(lVar5 + 0x28));
          FUN_100450d15(&local_448,&local_228);
          FUN_1001b7a50(&local_228);
          FUN_1001b7a50(&local_448);
          FUN_1001b7a50(local_458);
          FUN_1001b7a50(local_438);
          FUN_1004e3b42(lVar5);
        }
      }
    }
  }
LAB_10053b1c6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

