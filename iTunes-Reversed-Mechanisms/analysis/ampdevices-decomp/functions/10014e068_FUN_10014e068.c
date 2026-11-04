// name: FUN_10014e068
// address: 10014e068

void FUN_10014e068(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  long local_58;
  long *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  FUN_10012f340(&local_48,param_1);
  lVar2 = *param_2;
  plVar3 = (long *)param_2[1];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  local_58 = lVar2;
  local_50 = plVar3;
  IVar5 = _objc_alloc(PTR__OBJC_CLASS___NSURLRequest_10082c6c0);
  IVar5 = NSURLRequest::_initWithCFURLRequest_
                    (IVar5,PTR_s__initWithCFURLRequest__10088bae0,*(undefined8 *)(lVar2 + 0x10));
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  local_a0 = PTR___NSConcreteStackBlock_10082caf0;
  local_98 = 0xc6000000;
  local_90 = FUN_10014e255;
  local_88 = &DAT_10083b1e8;
  local_70 = local_48;
  uStack_6c = uStack_44;
  uStack_68 = uStack_40;
  uStack_64 = uStack_3c;
  if (CONCAT44(uStack_3c,uStack_40) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_3c,uStack_40) + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  local_78 = param_1;
  local_60 = param_3;
  uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(IVar5);
  local_80 = uVar6;
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar7,PTR_s_dataTaskWithRequest_completionHa_10088bc18,uVar6,&local_a0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  FUN_1001a7bd2(lVar2 + 0x10,0);
  _objc_storeStrong(lVar2 + 8,uVar7);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_resume_10088bc50);
  puVar4 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  (*(code *)puVar4)(local_80);
  if (CONCAT44(uStack_64,uStack_68) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (CONCAT44(uStack_3c,uStack_40) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  return;
}

