// name: FUN_10044d106
// address: 10044d106

void FUN_10044d106(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ID IVar4;
  long *local_28;
  long *plStack_20;
  
  if (*(ID *)(param_1 + 0x20) == 0) {
    local_28 = (long *)0x0;
    plStack_20 = (long *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_28,*(ID *)(param_1 + 0x20),PTR_s_getDelegate_10088d168);
    if (local_28 != (long *)0x0) {
      iVar3 = (**(code **)(*local_28 + 0x90))
                        (local_28,*(undefined1 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x31));
      if (iVar3 == 0) {
        IVar4 = 0;
      }
      else {
        IVar4 = NSError::errorWithDomain_code_userInfo_
                          ((ID)PTR__OBJC_CLASS___NSError_10082c660,
                           PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                           *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,(long)iVar3,0);
      }
      goto LAB_10044d1a7;
    }
  }
  IVar4 = NSError::errorWithDomain_code_userInfo_
                    ((ID)PTR__OBJC_CLASS___NSError_10082c660,
                     PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                     *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,0x2365,0);
LAB_10044d1a7:
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),IVar4);
  if (plStack_20 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_20 + 0x10))(plStack_20);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

