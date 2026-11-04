// name: getDelegate
// address: 10044b963

/* Function Stack Size: 0x10 bytes */

shared_ptr<AMPLibraryEventsDelegate> AMPLClientEventsDelegate::getDelegate(ID param_1,SEL param_2)

{
  __shared_weak_count *extraout_RDX;
  shared_ptr<AMPLibraryEventsDelegate> sVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_sync_enter(param_2);
  FUN_10044b8c6(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  _objc_sync_exit(param_2);
  sVar1.field1_0x8 = extraout_RDX;
  sVar1.field0_0x0 = (AMPLibraryEventsDelegate *)param_1;
  return sVar1;
}

