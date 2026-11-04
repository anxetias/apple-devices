// name: owner
// address: 10027cc9b

/* Function Stack Size: 0x10 bytes */

weak_ptr<ArtworkClient> ArtworkEventsProxy::owner(ID param_1,SEL param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  __shared_weak_count *in_RDX;
  weak_ptr<ArtworkClient> wVar4;
  
  lVar2 = *(long *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  wVar4.field1_0x8 = in_RDX;
  wVar4.field0_0x0 = (ArtworkClient *)param_1;
  return wVar4;
}

