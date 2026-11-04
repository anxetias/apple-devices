// name: progressInfo
// address: 100644f1c

/* Function Stack Size: 0x10 bytes */

shared_ptr<ProgressInfo> AMPDeviceProgress::progressInfo(ID param_1,SEL param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  __shared_weak_count *in_RDX;
  shared_ptr<ProgressInfo> sVar4;
  
  lVar2 = *(long *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 8) = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  sVar4.field1_0x8 = in_RDX;
  sVar4.field0_0x0 = (ProgressInfo *)param_1;
  return sVar4;
}

