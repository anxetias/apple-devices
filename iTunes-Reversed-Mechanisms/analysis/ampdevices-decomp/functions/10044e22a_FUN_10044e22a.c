// name: FUN_10044e22a
// address: 10044e22a

void FUN_10044e22a(long param_1)

{
  char cVar1;
  undefined1 local_20 [8];
  long local_18;
  
  FUN_10044db08(local_20,param_1);
  cVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 400),PTR_s_mediaDomainsOpened_10088d1a0);
  if (cVar1 != '\0') {
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(param_1 + 400),PTR_s_closeMediaDomains__10088d1d8,
               &PTR___NSConcreteGlobalBlock_100859798);
  }
  if (local_18 != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

