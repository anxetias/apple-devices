// name: FUN_10049d55e
// address: 10049d55e

int FUN_10049d55e(long *param_1,uint param_2,uint *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_190 [2];
  long *local_180;
  undefined4 local_178;
  long *local_170;
  uint local_168;
  uint local_164;
  undefined8 local_160;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_190,0x148);
  if (param_3 == (uint *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "(outNumDetails != __null)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    iVar4 = -0x32;
    FUN_1001782e9(0,0);
  }
  else {
    *param_3 = 0;
    local_190[0] = (**(code **)(*param_1 + 0x2c0))(param_1,0);
    local_178 = *(undefined4 *)((long)param_1 + 0x1c);
    local_170 = param_1 + 4;
    local_168 = param_2;
    local_160 = param_4;
    iVar4 = FUN_10043a8b3(param_1[0x9b],0x67646574);
    if (iVar4 == 0) {
      if (local_164 < param_2) {
        param_2 = local_164;
      }
      *param_3 = param_2;
      iVar4 = 0;
    }
  }
  if (local_180 != (long *)0x0) {
    LOCK();
    plVar1 = local_180 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_180 + 0x10))(local_180);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

