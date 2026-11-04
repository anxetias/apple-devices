// name: FUN_100129008
// address: 100129008

undefined8 FUN_100129008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_a8 [16];
  undefined **local_98;
  undefined8 local_90;
  undefined ***local_78;
  undefined **local_68;
  undefined ***local_60;
  undefined ***local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  std::mutex::lock();
  FUN_1001a8d5a(local_a8,*(undefined8 *)(param_1 + 0x1d0),1);
  local_98 = &PTR_FUN_100838898;
  local_68 = &PTR_FUN_100838808;
  local_90 = param_3;
  local_78 = &local_98;
  local_60 = &local_98;
  local_48 = &local_68;
  FUN_1001a96bc(local_a8,&local_68);
  if (local_48 == &local_68) {
    lVar1 = 0x20;
LAB_1001290b0:
    (**(code **)((long)*local_48 + lVar1))();
  }
  else {
    lVar1 = 0x28;
    if (local_48 != (undefined ***)0x0) goto LAB_1001290b0;
  }
  if (local_78 == &local_98) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_78 == (undefined ***)0x0) goto LAB_1001290d6;
  }
  (**(code **)((long)*local_78 + lVar1))();
LAB_1001290d6:
  FUN_1001a8fac(local_a8);
  std::mutex::unlock();
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_10082cb58 >> 8),1);
}

