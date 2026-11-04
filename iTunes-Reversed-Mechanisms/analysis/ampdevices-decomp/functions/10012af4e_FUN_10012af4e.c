// name: FUN_10012af4e
// address: 10012af4e

void FUN_10012af4e(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  undefined1 local_98 [16];
  double local_88;
  double local_80;
  cfstringStruct *local_78;
  long *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 local_5c;
  uint local_5a;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  std::mutex::lock();
  lVar9 = *param_2;
  lVar2 = *(long *)(param_1 + 8);
  FUN_1001a7ad8(lVar2,lVar9);
  uVar8 = *(undefined8 *)(lVar9 + 0x18);
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
  *(undefined8 *)(lVar2 + 0x18) = uVar8;
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) == 0) {
    local_78 = &cf_timestamp;
    FUN_1001a8c1c(&local_68);
    local_88 = (double)FUN_10012b30a(0,lVar9,&local_68);
    FUN_1001ab006(&local_68);
    uVar8 = *(undefined8 *)(param_1 + 8);
    local_78 = &cf_timestamp;
    FUN_1001a8c1c(&local_68);
    local_80 = (double)FUN_10012b30a(0,uVar8,&local_68);
    FUN_1001ab006(&local_68);
    uVar8 = FUN_10012a714();
    cVar4 = _os_log_type_enabled(uVar8,1);
    if (cVar4 != '\0') {
      local_5a = -(uint)(local_80 != local_88) & 1;
      local_68._0_4_ = 0x8000200;
      local_68._4_4_ = SUB84(local_88,0);
      uStack_60 = (undefined4)((ulong)local_88 >> 0x20);
      local_5c = 0x400;
      __os_log_impl(0x100000000,uVar8,1,
                    "Successfully set new bag with timestamp %f. Is new bag? = %d. Notifying listeners."
                    ,&local_68,0x12);
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    FUN_1001a8c1c(&local_78);
    FUN_1001b7a44(local_98);
    FUN_100129a4c(&local_68,uVar8,&local_78,local_98);
    FUN_1001b7a50(local_98);
    FUN_1001ab006(&local_78);
    uVar8 = *(undefined8 *)(param_1 + 8);
    FUN_1001a8c1c(&local_78);
    cVar4 = FUN_100129b0a(uVar8,&local_78,0);
    FUN_1001ab006(&local_78);
    cVar5 = FUN_1001b8428(&local_68);
    uVar10 = 0;
    if (cVar5 == '\0') {
      iVar6 = FUN_1001ba026(&local_68,"korea");
      uVar10 = (uint)(iVar6 == 0);
    }
    FUN_100151a22(&local_78);
    uVar7 = FUN_1001523d6(&local_78);
    if ((uVar7 != uVar10) || (cVar5 = FUN_1001524fa(&local_78), cVar4 != cVar5)) {
      FUN_10015240c(&local_78,uVar10);
      FUN_100152530(&local_78,cVar4);
      FUN_100151afa(&local_78);
    }
    FUN_100151a16(&local_78);
    FUN_1001b7a50(&local_68);
  }
  LOCK();
  *(undefined1 *)(param_1 + 0x70) = 0;
  UNLOCK();
  std::mutex::unlock();
  FUN_10012b372(param_1,param_2,0);
  if (*(long *)*param_2 == 0) goto LAB_10012b241;
  lVar9 = FUN_100156d72();
  local_78 = *(cfstringStruct **)(lVar9 + 200);
  plVar3 = *(long **)(lVar9 + 0xd0);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  local_68._0_4_ = 0x838d28;
  local_68._4_4_ = 1;
  local_70 = plVar3;
  local_48 = &local_68;
  (**(code **)(local_78->field0_0x0 + 0x10))(local_78,&local_68);
  if (local_48 == &local_68) {
    lVar9 = 0x20;
LAB_10012b213:
    (**(code **)(*local_48 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_10012b213;
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10012b241:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

