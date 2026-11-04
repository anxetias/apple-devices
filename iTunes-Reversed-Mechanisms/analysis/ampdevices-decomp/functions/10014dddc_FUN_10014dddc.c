// name: FUN_10014dddc
// address: 10014dddc

undefined8 * FUN_10014dddc(undefined8 *param_1)

{
  long *plVar1;
  undefined *self;
  undefined4 uVar2;
  undefined4 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_10012f340(local_38);
  uVar3 = uStack_2c;
  uVar2 = uStack_30;
  self = PTR__OBJC_CLASS___NSBlockOperation_10082c638;
  if (CONCAT44(uStack_2c,uStack_30) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_2c,uStack_30) + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  IVar4 = NSBlockOperation::blockOperationWithBlock_
                    ((ID)self,PTR_s_blockOperationWithBlock__10088bc08);
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  puVar6 = operator_new(0x28);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_10083b290;
  puVar6[3] = &PTR_FUN_10083b2e0;
  puVar6[4] = uVar5;
  *param_1 = puVar6 + 3;
  param_1[1] = puVar6;
  if (CONCAT44(uVar3,uVar2) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (CONCAT44(uStack_2c,uStack_30) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  return param_1;
}

