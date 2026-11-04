// name: .cxx_destruct
// address: 10027cd01

/* Function Stack Size: 0x10 bytes */

void ArtworkEventsProxy::_cxx_destruct(ID param_1,SEL param_2)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  _objc_storeStrong(param_1 + 8,0);
  return;
}

