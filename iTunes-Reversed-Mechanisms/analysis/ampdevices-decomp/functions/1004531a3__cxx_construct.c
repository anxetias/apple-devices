// name: .cxx_construct
// address: 1004531a3

/* Function Stack Size: 0x10 bytes */

ID MediaLibraryObserver::_cxx_construct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(ID *)(param_1 + 0x38) = param_1 + 0x40;
  return param_1;
}

