// name: FUN_10027cec0
// address: 10027cec0

undefined8 FUN_10027cec0(long param_1,long param_2,long param_3,undefined4 *param_4,char param_5)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  dispatch_queue_t pdVar7;
  undefined8 uVar8;
  long *plVar9;
  ID IVar10;
  undefined8 uVar11;
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  if (*(long *)(param_4 + 2) != 0) {
    LOCK();
    plVar9 = (long *)(*(long *)(param_4 + 2) + 8);
    *plVar9 = *plVar9 + 1;
    UNLOCK();
  }
  plVar9 = *(long **)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x44) = uVar6;
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (param_5 == '\0') {
    if (param_2 == 0) {
      if (param_3 == 0) goto LAB_10027cf54;
      pdVar7 = _dispatch_queue_create("artwork client",(dispatch_queue_attr_t)0x0);
    }
    else {
      pdVar7 = (dispatch_queue_t)(*(code *)PTR__objc_retain_10082c7b8)(param_2);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x48);
    *(dispatch_queue_t *)(param_1 + 0x48) = pdVar7;
    (*(code *)PTR__objc_release_10082c7b0)(uVar11);
  }
LAB_10027cf54:
  uVar8 = _objc_opt_new(&objc::class_t::ArtworkEventsProxy);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  (*(code *)PTR__objc_release_10082c7b0)(uVar11);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    plVar9 = (long *)std::__shared_weak_count::lock();
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar9[2] = plVar9[2] + 1;
      UNLOCK();
      (*(code *)PTR__objc_msgSend_10082c770)(uVar11);
      if (plVar9 != (long *)0x0) {
        std::__shared_weak_count::__release_weak();
      }
      LOCK();
      plVar1 = plVar9 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__shared_weak_count::__release_weak();
      }
      if (param_5 == '\0') {
        if (param_3 == 0) {
          if (param_2 != 0) {
            pdVar7 = _dispatch_queue_create("artwork client events",(dispatch_queue_attr_t)0x0);
            (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)(param_1 + 0x30),PTR_s_setQueue__10088c598,pdVar7);
            (*(code *)PTR__objc_release_10082c7b0)(pdVar7);
            goto LAB_10027d050;
          }
          uVar11 = *(undefined8 *)(param_1 + 0x30);
          param_3 = *(long *)(param_1 + 0x48);
        }
        else {
          uVar11 = *(undefined8 *)(param_1 + 0x30);
        }
        (*(code *)PTR__objc_msgSend_10082c770)(uVar11,PTR_s_setQueue__10088c598,param_3);
      }
LAB_10027d050:
      IVar10 = _objc_alloc(PTR__OBJC_CLASS___AMPArtworkClient_10082b4c8);
      IVar10 = AMPArtworkClient::initWithQueue_
                         (IVar10,PTR_s_initWithQueue__10088c5a0,*(undefined8 *)(param_1 + 0x48));
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      *(ID *)(param_1 + 0x28) = IVar10;
      (*(code *)PTR__objc_release_10082c7b0)(uVar11);
      if (DAT_1008c7568 != -1) {
        _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
      }
      uVar11 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
      (*(code *)PTR__objc_msgSend_10082c770)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_setLogHandle__10088c5a8,uVar11);
      (*(code *)PTR__objc_release_10082c7b0)(uVar11);
      (*(code *)PTR__objc_msgSend_10082c770)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_setEventsDelegate__10088c5b0,
                 *(undefined8 *)(param_1 + 0x30));
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10013bd04();
}

