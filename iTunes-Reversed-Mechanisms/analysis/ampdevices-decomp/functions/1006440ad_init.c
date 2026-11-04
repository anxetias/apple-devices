// name: init
// address: 1006440ad

/* Function Stack Size: 0x10 bytes */

ID AMPDeviceProgress::init(ID param_1,SEL param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  objc_super local_40;
  undefined1 local_30 [8];
  long *local_28;
  
  local_40.super_class = (class_t *)PTR_AMPDeviceProgress_100885718;
  local_40.receiver = param_1;
  IVar4 = _objc_msgSendSuper2(&local_40,PTR_s_init_10088c4d0);
  if (IVar4 != 0) {
    *(undefined4 *)(IVar4 + 0x10) = 0xffffffff;
    *(undefined4 *)(IVar4 + 0x14) = 0xffffffff;
    *(undefined4 *)(IVar4 + 0x18) = 0xffffffff;
    *(undefined4 *)(IVar4 + 0x1c) = 0xffffffff;
    FUN_1001cea4e(local_30,0,FUN_1006441af,IVar4,0,0);
    FUN_100217418(IVar4 + 0x48,local_30);
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar5 = _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_10082dfb8);
    uVar3 = *(undefined8 *)(IVar4 + 0x30);
    *(undefined8 *)(IVar4 + 0x30) = uVar5;
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    uVar5 = _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_10082dfb8);
    uVar3 = *(undefined8 *)(IVar4 + 0x38);
    *(undefined8 *)(IVar4 + 0x38) = uVar5;
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    *(undefined8 *)(IVar4 + 0x40) = 1;
  }
  return IVar4;
}

