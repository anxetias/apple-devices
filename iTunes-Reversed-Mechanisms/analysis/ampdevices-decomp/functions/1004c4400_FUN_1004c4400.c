// name: FUN_1004c4400
// address: 1004c4400

void FUN_1004c4400(long param_1,char param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 local_68 [8];
  long *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined ***local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x560) == 0) {
    local_58 = &PTR_FUN_10085d788;
    local_50 = 0x371;
    local_48 = 0;
    local_40 = param_1;
    local_38 = &local_58;
    FUN_1001bdcc2(0,DAT_100711ee8,0,local_68,&local_58);
    FUN_100217418(param_1 + 0x560,local_68);
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_38 == &local_58) {
      lVar2 = 0x20;
    }
    else {
      lVar2 = 0x28;
      if (local_38 == (undefined ***)0x0) goto LAB_1004c44f1;
    }
    (**(code **)((long)*local_38 + lVar2))();
  }
  else if (param_2 != '\0') {
    FUN_1001bdf7a(0);
    return;
  }
LAB_1004c44f1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

