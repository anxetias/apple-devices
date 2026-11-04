// name: FUN_10043d7e7
// address: 10043d7e7

int FUN_10043d7e7(long param_1,undefined4 param_2,long param_3,uint param_4,long param_5,
                 long param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long local_1c0;
  uint local_1b4;
  long local_1b0;
  ulong local_1a8;
  undefined1 local_1a0 [16];
  long *local_190;
  undefined4 local_188;
  long local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  long local_148;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_1a8 = CONCAT44(local_1a8._4_4_,param_2);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1b4 = param_4;
  local_1b0 = param_1;
  ___bzero(local_1a0,0x148);
  if (param_1 == 0 || param_3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "(playerPlugin != nullptr) && (location != nullptr)";
LAB_10043db4f:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if ((param_6 != 0 && param_5 != 0) && param_7 != 0) {
      local_1c0 = 0;
      iVar4 = FUN_1001ed0ff(&local_1c0,0,"");
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          local_188 = (undefined4)local_1a8;
          local_178 = 0xc101;
          local_158 = 0;
          uStack_150 = 0;
          local_148 = local_1c0;
          local_180 = param_3;
          iVar4 = FUN_10043a8b3(local_1b0,0x706c6179);
          if (iVar4 == 0) {
            if (local_1b4 != 0) {
              local_1a8 = (ulong)local_1b4;
              uVar6 = 0;
              do {
                local_178 = *(undefined4 *)(param_5 + uVar6 * 4);
                local_174 = 0;
                local_168 = 0;
                iVar4 = FUN_10043a8b3(local_1b0,0x626f6666,local_1a0);
                if ((iVar4 != -0x80) && (iVar4 != 0)) {
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
                *(undefined4 *)(param_6 + uVar6 * 4) = local_174;
                *(undefined8 *)(param_7 + uVar6 * 8) = local_168;
                uVar6 = uVar6 + 1;
              } while (local_1a8 != uVar6);
            }
            iVar4 = 0;
            FUN_10043a8b3(local_1b0,0x73746f70,local_1a0);
          }
          if (local_1c0 != 0) {
            FUN_1001ed1fc();
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
      goto LAB_10043da3e;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = 
      "(desiredTimesInMS != nullptr) && (actualTimesInMS != nullptr) && (byteOffsets != nullptr)";
      goto LAB_10043db4f;
    }
  }
  iVar4 = -0x32;
  FUN_1001782e9(0,0);
LAB_10043da3e:
  if (local_190 != (long *)0x0) {
    LOCK();
    plVar1 = local_190 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_190 + 0x10))(local_190);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

