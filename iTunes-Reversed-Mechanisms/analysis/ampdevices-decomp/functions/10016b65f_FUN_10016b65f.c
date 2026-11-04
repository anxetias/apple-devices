// name: FUN_10016b65f
// address: 10016b65f

undefined8 FUN_10016b65f(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *local_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  void *pvStack_40;
  void *local_38;
  long lStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    local_88 = &local_48;
    local_38 = (void *)0x0;
    lStack_30 = 0;
    local_48 = 0;
    pvStack_40 = (void *)0x0;
    local_28 = 0;
    local_20 = 0x100;
    local_80 = 0;
    pvStack_78 = (void *)0x0;
    local_70 = (void *)0x0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0x200;
    local_50 = 0;
    FUN_10016b747(param_1,&local_88,0);
    uVar2 = DAT_1008c4d90;
    uVar1 = FUN_10016be74(&local_48);
    uVar2 = FUN_100170dc5(uVar2,uVar1,lStack_30 - (long)local_38);
    _free(local_70);
    if (pvStack_78 != (void *)0x0) {
      operator_delete(pvStack_78);
    }
    _free(local_38);
    if (pvStack_40 != (void *)0x0) {
      operator_delete(pvStack_40);
    }
  }
  return uVar2;
}

