// name: installProgressInfoForObjectID:
// address: 100648014

/* Function Stack Size: 0x14 bytes */

shared_ptr<ProgressInfo>
AMPDevicesClientConnection::installProgressInfoForObjectID_
          (ID param_1,SEL param_2,unsigned_int param_3)

{
  undefined4 in_register_00000014;
  __shared_weak_count *p_Var1;
  __shared_weak_count *extraout_RDX;
  shared_ptr<ProgressInfo> sVar2;
  
  p_Var1 = (__shared_weak_count *)CONCAT44(in_register_00000014,param_3);
  if (DAT_1008c34a0 == 0) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)param_1,DAT_1008c34a0,PTR_s_progressInfoForObjectID__10088da48)
    ;
    p_Var1 = extraout_RDX;
  }
  sVar2.field1_0x8 = p_Var1;
  sVar2.field0_0x0 = (ProgressInfo *)param_1;
  return sVar2;
}

