// name: setOwner:
// address: 10027ccb9

/* Function Stack Size: 0x20 bytes */

void ArtworkEventsProxy::setOwner_(ID param_1,SEL param_2,weak_ptr<ArtworkClient> param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ArtworkClient *pAVar5;
  
  pAVar5 = param_3.field0_0x0;
  uVar3 = *(undefined8 *)pAVar5;
  uVar4 = *(undefined8 *)(pAVar5 + 8);
  if (*(long *)(pAVar5 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(pAVar5 + 8) + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (lVar2 != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

